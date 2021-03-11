#ifndef __configclass_H
#define __configclass_H

namespace LCBCAdminSystem
{

using namespace System::Data;

public ref class ConfigClass
{
   public: System::String^ configFileName;
   public: System::Xml::XmlDataDocument^ xmlDataDocument;
   public: ConfigClass()
   {
      try
      {
         xmlDataDocument = gcnew System::Xml::XmlDataDocument();
		 configFileName  = gcnew System::String( "config.xml" );
	     LoadConfig();
      }
      catch( System::Exception^ e )
      {
         using namespace System::Windows::Forms;
         MessageBox::Show( e->Message, "Error", MessageBoxButtons::OK, 
                           MessageBoxIcon::Exclamation );
      }
   }
   ~ConfigClass(){}
   public:
      bool LoadConfig();
      bool SaveConfig();
	  System::String^ GetDatabaseFileName()
	  {
		  System::String^ dbFileName = gcnew System::String( "../data/data.mdb" );
		  return dbFileName;
	  }
   protected:
   private:
};

}
#endif
