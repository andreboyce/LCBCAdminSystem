#include "stdafx.h"
#include "configclass.h"

namespace LCBCAdminSystem
{

bool ConfigClass::LoadConfig()
{
	System::String^ filename = gcnew System::String( "config.xml" );
	System::Xml::XmlTextReader^ xmlreader = gcnew System::Xml::XmlTextReader( filename );
	return false;
}

bool ConfigClass::SaveConfig()
{
	System::String^ filename = gcnew System::String( "config.xml" );
	//System::Xml::XmlTextWriter^ xmlwriter = gcnew System::Xml::XmlTextWriter( filename );
	return false;
}

}