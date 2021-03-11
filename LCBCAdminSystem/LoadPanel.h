#pragma once

#include "DataAccessClass.h"

// This File is responsible for Loading Data into the DataGridView and ListView

#ifndef __LoadPanel_H
#define __LoadPanel_H

namespace LCBCAdminSystem
{
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

//  Load the data into the datagridview and list view from the database
bool LoadPanel( LCBCAdminSystem::DataAccessClass^ dataAccessClass, DataGridView^ dataGridView, String^ tableName, ListView^ listView );

// Loads the fields of the DataGrid into the listView
void LoadFields( ListView^ listView, LCBCAdminSystem::DataAccessClass^ dataAccessClass, System::String^ tablename );

// Loads the values of the selected row into the list view
void LoadFieldValues( DataGridView^ dataGridView, ListView^ listView, LCBCAdminSystem::DataAccessClass^ dataAccessClass, System::String^ tablename );


}

#endif
