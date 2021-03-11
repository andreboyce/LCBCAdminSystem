#pragma once
#ifndef __DataAccessClass_H
#define __DataAccessClass_H
 
// This File DataAccessClass.h
// Contains a class that is capable of modifiying the contents of a MS Access Database.
// The paramaters have self explanitory names and are only described if their function is ambiguous

using namespace System::Data::OleDb;
using namespace System::Data;
using namespace System::Collections;
using namespace System::Collections::Generic;

namespace LCBCAdminSystem
{

public ref class DataAccessClass
{
	public:
				// Connection to the database
		public: System::Data::OleDb::OleDbConnection^  connection;

				// DataAdapter for a table in the database
		public: System::Data::OleDb::OleDbDataAdapter^ dataAdapter;

				// Dataset stores the data froma a table in a database inmemory
		public: System::Data::DataSet^                 dataSet;

				// The string to connect to the database
		public: System::String^                        connectionString;

				// Class to automatically build SQL commands
		public: OleDbCommandBuilder^                   oleDbCommandBuilder; 

				// Name of the Table this class is operating on
		public: System::String^                        tableName;

				// The path and filename of the MS Access Database
		public: System::String^                        databaseSource; 



	// Default Constructor
    public: DataAccessClass( void )
	{
		InitializeComponent();
	}

    public: ~DataAccessClass()
	{
	}

	// Initialize variables
	public: void InitializeComponent( void )
	{
		connection          = gcnew System::Data::OleDb::OleDbConnection();
		dataAdapter         = gcnew System::Data::OleDb::OleDbDataAdapter();
		dataSet             = gcnew System::Data::DataSet(); // Class to hold database schema and data
		connectionString    = gcnew System::String( "Provider=Microsoft.Jet.OLEDB.4.0;Data Source=" ); // COnnection string with blank password
		databaseSource      = gcnew System::String( "..\\data\\data.mdb" ); // The path to the database file
		tableName           = gcnew System::String( "" );
		oleDbCommandBuilder = gcnew OleDbCommandBuilder();
	}

	// Closes a connection to the database
	public: void Close( void )
	{
		connection->Close();
	}
	// Clears the dataset
	void ClearDataSet()
	{
		dataSet->Clear();
	}
	// Opens A connection to the database
	public: bool Connect( System::String^ _databaseSource )
	{
		try
		{
			connection->ConnectionString = connectionString+_databaseSource;
			connection->Open();
			return true;
		}
		catch( System::Exception^ e )
		{
			using namespace System::Windows::Forms;
			MessageBox::Show( e->Message, "Error", MessageBoxButtons::OK, 
					          MessageBoxIcon::Exclamation );
			return false;
		}
	}

	// Opens A connection to the database
	public: bool Connect()
	{
		try
		{
			connection->ConnectionString = connectionString+databaseSource;
			connection->Open();
			return true;
		}
		catch( System::Exception^ e )
		{
			using namespace System::Windows::Forms;
			MessageBox::Show( e->Message, "Error", MessageBoxButtons::OK, 
					          MessageBoxIcon::Exclamation );
			return false;
		}
	}

	// Deletes a row from the table
	void DeleteRow( int row )
	{
	   try
	   {
		  if( row < 0 )
		  {
			  return;
		  }
		  if( dataSet->Tables[ tableName ]->Rows->Count > row )
		  {
			  dataSet->Tables[ tableName ]->Rows->RemoveAt( row );
			  Update( tableName );
			  //dataSet->AcceptChanges();
		  }
	   }
	   catch( System::Exception^ e )
	   {
		  using namespace System::Windows::Forms;
          MessageBox::Show( e->Message, "Error", MessageBoxButtons::OK, 
		                    MessageBoxIcon::Exclamation );
	   }
	}

	// Get a List of the values in a colum
	public:
	System::Collections::Generic::List<System::String^>^ GetColumnValues( System::String^ columnName )
	{
	   try
	   {
		  System::Collections::Generic::List<System::String^>^ list = gcnew System::Collections::Generic::List<System::String^>();
	      if( dataSet->Tables[ tableName ]->Rows->Count <= 0 ) // bounds checking
		     return nullptr;
	      System::Data::DataRow^ dataRow;
		  for( int i=0; i<dataSet->Tables[ tableName ]->Rows->Count ; i++ )
		  {
			 dataRow = dataSet->Tables[ tableName ]->Rows[i];
			 list->Add( dataRow[columnName]->ToString() );
		  }
	      return list;
	   }
	   catch( System::Exception^ e )
	   {
		  using namespace System::Windows::Forms;
          MessageBox::Show( e->Message, "Error", MessageBoxButtons::OK, 
		                    MessageBoxIcon::Exclamation );
		  return nullptr;
	   }
	}

	// Gets a colum from the table
	public: System::Data::DataColumn^ GetColumn( System::String^ columnName )
	{
	   try
	   {
	      if( dataSet->Tables[ this->tableName ]->Columns->Count <= 0 ) //
			return nullptr;
		  System::Data::DataColumn^ dataColumn = dataSet->Tables[ this->tableName ]->Columns[ columnName ];
	      return dataColumn;
	   }
	   catch( System::Exception^ e )
	   {
		  using namespace System::Windows::Forms;
          MessageBox::Show( e->Message, "Error", MessageBoxButtons::OK, 
		                    MessageBoxIcon::Exclamation );
		  return nullptr;
	   }
	}

	// Searches the database for the first row matching the vlaue in the column specified
	// This function only returns one row so it essentially assumes that the column does not allow duplicate values
	public: System::Data::DataRow^ FindRow( System::String^ ColumnName, System::String^ Value )
	{
	   try
	   {
	      System::Data::DataRow^ dataRow = nullptr;
		  if( dataSet->Tables[ this->tableName ] == nullptr )
		  {
			  System::Exception^ ex = gcnew System::Exception( "Table: " + tableName + " not Loaded." );
			  throw ex;
		  }
	      for( int i=0; i<dataSet->Tables[ this->tableName ]->Rows->Count ; i++ )
		  {
		     dataRow = GetRow( this->tableName, i );
		     if( dataRow != nullptr )
		     {
			   if( System::String::Compare( dataRow[ColumnName]->ToString(), Value ) == 0 )// If the string matches
			   {
				   return dataRow;
			   }
		     }
		  }
		  return nullptr;
	   }
	   catch( System::Exception^ e )
	   {
		  using namespace System::Windows::Forms;
          MessageBox::Show( e->Message, "Error", MessageBoxButtons::OK, 
		                    MessageBoxIcon::Exclamation );
		  return nullptr;
	   }
	}

	// Gets a row from the table
    public: System::Data::DataRow^ GetRow( System::String^ tablename, int row )
	{
	   try
	   {
	      if( dataSet->Tables[ tablename ]->Rows->Count <= row ) // -1 for the terminating row
			return nullptr;
	      System::Data::DataRow^ dataRow = dataSet->Tables[ tablename ]->Rows[row];
	      return dataRow;
	   }
	   catch( System::Exception^ e )
	   {
		  using namespace System::Windows::Forms;
          MessageBox::Show( e->Message, "Error", MessageBoxButtons::OK, 
		                    MessageBoxIcon::Exclamation );
		  return nullptr;
	   }
	}

	// Gets a list of columns in the table
	public: System::Collections::Generic::List< System::Data::DataColumn^ >^ GetTableColumns( System::String^ tablename )
	{
		List< System::Data::DataColumn^ >^  columns = gcnew List< System::Data::DataColumn^ >();
		for( int i=0; i < dataSet->Tables[ tablename ]->Columns->Count; i++ )
		{
			columns->Add( dataSet->Tables[ tablename ]->Columns[i] );
		}
		return columns;
	}

	// Gets a list of the Names of the columns in the table
    public: System::Collections::Generic::List< System::String^ >^ GetTableFields( System::String^ tablename )
	{
		List< System::String^ >^  fields = gcnew List< System::String^ >();
		for( int i=0; i < dataSet->Tables[ tablename ]->Columns->Count; i++ )
		{
			fields->Add( dataSet->Tables[ tablename ]->Columns[i]->ColumnName );
		}
		return fields;
	}

	// Get the data types of each column in the table
	public: System::Collections::Generic::List< System::Type^ >^ GetTableFieldTypes( System::String^ tablename, int row )
	{
		List< System::Type^ >^  fields = gcnew List< System::Type^ >();
		for( int i=0; i < dataSet->Tables[ tablename ]->Columns->Count; i++ )
		{
			fields->Add( dataSet->Tables[ tablename ]->Columns[i]->DataType );
		}
		return fields;
	}

	// Returns a list of the tables in a database
	public: System::Collections::Generic::List< System::String^ >^ GetTables( void )
	{
	   using namespace System::Data::Common;
	   using namespace System::Data;
	   using namespace System::Data::OleDb;
	   using namespace System::Collections::Generic;
       using namespace System::Windows::Forms;
	   try
	   {
		   DbProviderFactory^ factory             = DbProviderFactories::GetFactory( "System.Data.OleDb" );
		   // The list we will be returning
		   List< System::String^ >^  tables       = gcnew List< System::String^ >();
		   // Class we will use to hold schema information, in this case a list of the tables.
		   DataTable^                dataTables   = nullptr;
		   // Restricts the Schema information returned.
		   array< System::String^ >^ restrictions = gcnew array<System::String^>(4);
           // Restricts the Schema information returned to tables.
		   restrictions[3] = "Table";

		   Connect();
		   dataTables = connection->GetSchema( "Tables", restrictions );
		   for( int i=0 ; i < dataTables->Rows->Count; i++ )
		   {
			   System::String^ tableName = dataTables->Rows[i][2]->ToString();
			   if( tableName[0] != '~' ) // hack trying to remove hidden tables
					tables->Add( tableName );
		   }
		   Close();
	   	   return tables;
	   }
	   catch( System::Exception^ e )
	   {
          MessageBox::Show( e->Message, "Error", MessageBoxButtons::OK, 
		                    MessageBoxIcon::Exclamation );
		  return (gcnew List< System::String^ >());
	   }
	}

	// writes the changes to the database
    public: bool Update( System::String^ tablename )
	{
		try
		{
			Connect(); 
			// Make commands for each possible modification
			dataAdapter->UpdateCommand = oleDbCommandBuilder->GetUpdateCommand();
			dataAdapter->InsertCommand = oleDbCommandBuilder->GetInsertCommand();
			dataAdapter->DeleteCommand = oleDbCommandBuilder->GetDeleteCommand();
			dataAdapter->Update( dataSet, tablename ) ; // Write the changes to the database
			Close();
			return true;
		}
		catch( System::Exception^ e )
		{
			using namespace System::Windows::Forms;
			MessageBox::Show( e->Message, "Error", MessageBoxButtons::OK, 
					          MessageBoxIcon::Exclamation );
			return false;
		}
	}

	// Load Data from a table in a database into memory
	public: bool FillDataSet( System::String^ tablename )
	{
		try
		{
			this->tableName = tablename;
			Connect(); // Connect to the database
			dataAdapter                 = gcnew System::Data::OleDb::OleDbDataAdapter();
			System::String^ queryString = gcnew System::String(	"select * from " + tablename ); // Select all the tables
			dataAdapter->SelectCommand  = gcnew OleDbCommand( queryString, this->connection );
            oleDbCommandBuilder         = gcnew OleDbCommandBuilder( dataAdapter ); // Associate this command builder with the table
			// This will create custom insert, delete, update etc... commands rather than having to do it manually
			dataSet                     = gcnew System::Data::DataSet(); // garbage collector will release the memory
			dataAdapter->Fill( dataSet, tablename );                     // Load the table data into memory
			Close(); // Close the connection
			return true;
		}
		catch( System::Exception^ e )
		{
			using namespace System::Windows::Forms;
			MessageBox::Show( e->Message, "Error", MessageBoxButtons::OK, 
					          MessageBoxIcon::Exclamation );
			return false;
		}
	}
};
}
#endif
