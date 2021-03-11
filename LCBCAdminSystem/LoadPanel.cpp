#include "stdafx.h"
#include "LoadPanel.h"

namespace LCBCAdminSystem
{

// Loads the fields of the DataGrid into the listView
void LoadFields( ListView^ listView, LCBCAdminSystem::DataAccessClass^ dataAccessClass, System::String^ tableName )
{
	listView->Items->Clear(); // Remove all Items
	System::Collections::Generic::List< System::String^ >^ fields = nullptr;
	dataAccessClass->FillDataSet( tableName ); // Load the table from the database into memory
	fields = dataAccessClass->GetTableFields( tableName ); // Get the colum names
	for( int i=0; i < fields->Count; i++ ) // Add them to the list View
	{
		listView->Items->Add( fields[i] );
		listView->Items[i]->ToolTipText = fields[i];
	}
}

//  Load the data into the datagridview and list view from the database
bool LoadPanel( LCBCAdminSystem::DataAccessClass^ dataAccessClass, DataGridView^ dataGridView, String^ tableName, ListView^ listView )
{
	try
	{
		System::Collections::Generic::List< System::String^ >^ fields = nullptr;
		dataAccessClass->FillDataSet( tableName ); // Load the table into memory
		if( dataAccessClass->dataSet->Tables->Count > 0 )
		{
		   dataGridView->DataSource = dataAccessClass->dataSet->Tables[ tableName ]; // Bind the DataGridView to the selected table
		   fields = dataAccessClass->GetTableFields( tableName );
		   for( int i=0; i < fields->Count; i++ ) // Populate the list view with the column names
		   {
			   listView->Items->Add( fields[i] );
			   listView->Items[i]->ToolTipText = fields[i];
		   }
		   LoadFieldValues( dataGridView, listView, dataAccessClass, tableName ); // Load the values of the selected row into the table
		   return true;
		}
		return false;

	}
	catch( System::Exception^ e )
	{
		using namespace System::Windows::Forms;
		MessageBox::Show( e->Message, "Error", MessageBoxButtons::OK, 
				          MessageBoxIcon::Exclamation );
		return false;
	}
}

// Loads the values of the selected row into the list view
void LoadFieldValues( DataGridView^ dataGridView, ListView^ listView, LCBCAdminSystem::DataAccessClass^ dataAccessClass, System::String^ tablename )
{
	try
	{
		if( (dataGridView->RowCount <= 0) || (dataGridView->CurrentRow == nullptr) || (listView == nullptr) || (dataAccessClass == nullptr) || (tablename == nullptr) )
		{
		   return;
		}
		int Row = dataGridView->CurrentRow->Index;    //get the row number on the DataGrid 			
		System::Data::DataRow^ dataRow = dataAccessClass->GetRow( tablename, Row );
		if( dataRow == nullptr )
		{
			return;
		}
		// I this row is marked for deletion
		if( dataRow->RowState == DataRowState::Deleted ) // Prevent "Cannot Access Deleted Row Data" Exception
			return;

		// Load the values into the list
		for( int i=0; (i < dataRow->ItemArray->Length) && (listView->Items->Count) ; i++ )
		{
			if( listView->Items[i]->SubItems->Count > 1 )
			{
				listView->Items[i]->SubItems->RemoveAt(1);
			}
			listView->Items[i]->SubItems->Add( dataRow->ItemArray[i]->ToString() );
		}
	}
	catch( System::Exception^ e )
	{
		using namespace System::Windows::Forms;
		MessageBox::Show( e->Message, "Error", MessageBoxButtons::OK, 
			          MessageBoxIcon::Exclamation );
	}
}


}