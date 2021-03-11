// LCBCAdminSystem.cpp : main project file.

#include "stdafx.h"
#include "StartOptionsDialog.h"

using namespace LCBCAdminSystem;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	try
	{
		// Enabling Windows XP visual effects before any controls are created
		Application::EnableVisualStyles();
		Application::SetCompatibleTextRenderingDefault(false); 

		// Create the main window and run it
		Application::Run(gcnew StartOptionsDialog());
		return 0;
	}
	catch( System::Exception^ e )
	{
		using namespace System::Windows::Forms;
		MessageBox::Show( e->Message, "Error: Program Exiting because...", MessageBoxButtons::OK, 
				          MessageBoxIcon::Exclamation );
		return -1;
	}
}
