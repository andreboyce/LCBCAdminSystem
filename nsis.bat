if exist "C:\Program Files (x86)\NSIS\makensis.exe" goto yesfile
if not exist "C:\Program Files (x86)\NSIS\makensis.exe" goto nofile
goto end
:yesfile
echo NSIS exists. Attempting to create install
"C:\Program Files (x86)\NSIS\makensis.exe" %CD%\installscript.nsi
"C:\Program Files (x86)\NSIS\makensis.exe" %CD%\installscript_nodotnet.nsi
goto end
:nofile
echo NSIS does not exist in the path "C:\Program Files (x86)\NSIS\makensis.exe".
goto end
:end
Rem pause