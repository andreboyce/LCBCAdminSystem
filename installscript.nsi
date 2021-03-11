; installscript.nsi
;
; This installer is supposed to accomplish the following:
; 1) Check for .net 2.0 runtime. If the .net 2.0 runtime does not exist install install it.
; 2) Check for previous versions of this program (LCBCAdminSystem), if they exist uninstall them and backup the database.
; 3) Install current version

;--------------------------------

; Use lzma compression
SetCompressor lzma

; Use win xp styles
XPStyle on

; The name of the installer
Name "LCBCAdminSystem"

; The file to write
OutFile "setup.exe"

; The default installation directory
InstallDir $PROGRAMFILES\LCBCAdminSystem


;icons
Icon LCBCAdminSystem\app.ico
UninstallIcon LCBCAdminSystem\app.ico

; Registry key to check for directory (so if you install again, it will 
; overwrite the old one automatically)
InstallDirRegKey HKLM "Software\NSIS_LCBCAdminSystem" "Install_Dir"

;
LoadLanguageFile "${NSISDIR}\Contrib\Language Files\English.nlf"

;Version Information

  VIProductVersion "0.1.0.0"
  VIAddVersionKey /LANG=${LANG_ENGLISH} "ProductName" "LCBCAdminSystem"
  VIAddVersionKey /LANG=${LANG_ENGLISH} "Comments" "Lower Caribbean Bible Colleage Administration System"
  VIAddVersionKey /LANG=${LANG_ENGLISH} "CompanyName" "Alpha Solutions"
  VIAddVersionKey /LANG=${LANG_ENGLISH} "LegalTrademarks" "Nil"
  VIAddVersionKey /LANG=${LANG_ENGLISH} "LegalCopyright" "©Alpha Solutions Inc."
  VIAddVersionKey /LANG=${LANG_ENGLISH} "FileDescription" "LCBCAdminSystem"
  VIAddVersionKey /LANG=${LANG_ENGLISH} "FileVersion" "0.1"


ReserveFile "${NSISDIR}\Plugins\InstallOptions.dll"
ReserveFile "installscript.ini"


; Pages

Page directory
Page instfiles
;Page custom CreateCustom2 EndCustom2 ": Install .net 2.0 runtime"
Page custom CreateCustom EndCustom ": Finish"


UninstPage uninstConfirm
UninstPage instfiles

; .NET Stuff

	!include WordFunc.nsh
	!insertmacro VersionCompare
	!include LogicLib.nsh

	Function .onInit
		Call GetDotNETVersion
		Pop $0
		${If} $0 == "not found"
			MessageBox MB_OK|MB_ICONSTOP ".NET runtime library is not installed. The .NET installer will now run. After .NET has been installed, installion will resume."
			Call InstallDotNET
			Return
		${EndIf}

		StrCpy $0 $0 "" 1 # skip "v"

		${VersionCompare} $0 "2.0" $1
		${If} $1 == 2
			MessageBox MB_OK|MB_ICONSTOP ".NET runtime library v2.0 or newer is required. You have $0."
			Call InstallDotNET
			Return
		${Else}
;			MessageBox MB_OK|MB_ICONSTOP "The correct version of the .NET runtime library is installed."

		${EndIf}
	FunctionEnd

	Function GetDotNETVersion
		Push $0
		Push $1

		System::Call "mscoree::GetCORVersion(w .r0, i ${NSIS_MAX_STRLEN}, *i) i .r1"
		StrCmp $1 "error" 0 +2
		StrCpy $0 "not found"

		Pop $1
		Exch $0
	FunctionEnd

	Function InstallDotNET
                SetOutPath "$INSTDIR\temp"
                File "dotnet2runtime\dotnetfx.exe"
                ExecWait "$OUTDIR\dotnetfx.exe" $0
                Delete "$INSTDIR\temp\dotnet2runtime\*.*"
                RMDir "$INSTDIR\temp\dotnet2runtime"
                RMDir "$INSTDIR\temp\temp"
;                ${If} $0 != 0
;                   Abort "Program cannot function without the .net 2.0 Runtime."
	FunctionEnd


; The stuff to install
Section "LCBCAdminSystem"

  SectionIn RO
  
  ; Set output path to the installation directory.
  SetOutPath $INSTDIR

  SetOutPath $INSTDIR\release  
  ; Get all the .exe and .dll files while ignoring the others.
  File /x .svn\ /x *.res /x *.obj /x *.pch /x *.o /x *.a /x *.db /x *.Manifest /x *.bat release\*.exe release\*.dll

  SetOutPath $INSTDIR\data
  File /x .svn\ /x *.db /x *.bat data\*.mdb data\*.jpg

  SetOutPath $INSTDIR\help
  File /x .svn\ /x *.db help\*.chm
 
  
  ; Write the installation path into the registry
  WriteRegStr HKLM SOFTWARE\NSIS_LCBCAdminSystem "Install_Dir" "$INSTDIR"
  
  ; Write the uninstall keys for Windows
  WriteRegStr HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\LCBCAdminSystem" "DisplayName" "NSIS LCBCAdminSystem"
  WriteRegStr HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\LCBCAdminSystem" "UninstallString" '"$INSTDIR\uninstall.exe"'
  WriteRegDWORD HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\LCBCAdminSystem" "NoModify" 1
  WriteRegDWORD HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\LCBCAdminSystem" "NoRepair" 1
  WriteUninstaller "uninstall.exe"
    
SectionEnd ; end the section

Section "Desktop Shortcut"
  SetOutPath $INSTDIR\release
  CreateShortCut "$DESKTOP\LCBCAdminSystem.lnk" "$INSTDIR\release\LCBCAdminSystem.exe" "" "$INSTDIR\release\LCBCAdminSystem.exe"  
SectionEnd

; Optional section (can be disabled by the user)
Section "Start Menu Shortcuts"
  SetOutPath $INSTDIR
  CreateDirectory "$SMPROGRAMS\LCBCAdminSystem"
  CreateShortCut "$SMPROGRAMS\LCBCAdminSystem\Uninstall.lnk" "$INSTDIR\uninstall.exe" "" "$INSTDIR\uninstall.exe" 0
  SetOutPath $INSTDIR\release
  CreateShortCut "$SMPROGRAMS\LCBCAdminSystem\LCBCAdminSystem.lnk" "$INSTDIR\release\LCBCAdminSystem.exe" "" "$INSTDIR\release\LCBCAdminSystem.exe" 0
  
SectionEnd


; Uninstaller

Section "Uninstall"
  
  ; Remove registry keys
  DeleteRegKey HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\LCBCAdminSystem"
  DeleteRegKey HKLM SOFTWARE\NSIS_LCBCAdminSystem

  ; Remove files and uninstaller
  Delete $INSTDIR\data\*.*
  Delete $INSTDIR\help\*.*
  Delete $INSTDIR\release\*.*
  Delete $INSTDIR\*.*
  Delete $DESKTOP\LCBCAdminSystem.lnk

  ; Remove shortcuts, if any
  Delete "$SMPROGRAMS\LCBCAdminSystem\*.*"

  ; Remove directories used
  RMDir "$INSTDIR\data"
  RMDir "$INSTDIR\help"
  RMDir "$INSTDIR\release"
  RMDir "$SMPROGRAMS\LCBCAdminSystem"
  RMDir "$INSTDIR"

SectionEnd

Var IniFileFinish

Function CreateCustom

  ;Display the Finish dialog

   GetTempFileName $0
   File /oname=$0 "installscript.ini"

   StrCpy $IniFileFinish $0

   InstallOptions::dialog $0
   Pop $R1
   StrCmp $R1 "cancel" done
   StrCmp $R1 "back" done
   StrCmp $R1 "success" done
   ;error: MessageBox MB_OK|MB_ICONSTOP "InstallOptions error:$\r$\n$R1"
   done:
FunctionEnd

Function EndCustom
   ReadINIStr $0 $IniFileFinish "Field 1" "State"
   StrCmp $0 1 run_program_now done
   run_program_now: Exec '"$INSTDIR\release\LCBCAdminSystem.exe"'
   done:
FunctionEnd

;                ExecWait "$OUTDIR\dotnet2runtime\dotnetfx.exe /q:a /c:$\"install /q$\""