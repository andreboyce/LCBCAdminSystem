#pragma once

#ifndef __print_H
#define __print_H

#include "DataAccessClass.h"

namespace LCBCAdminSystem
{

using namespace System;
using namespace System::IO;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Drawing::Drawing2D;
using namespace System::Text;

float printHeader( System::Drawing::Graphics^ graphics, System::Drawing::Font^ font );

void DrawDataGridView( System::Drawing::PointF point, System::Drawing::Font^ font, 
					   System::Drawing::Graphics^ graphics, DataGridView^ dataGridView );

void DrawDataGridView( System::Drawing::PointF point, DateTimePicker^ dateTimePicker, System::Drawing::Font^ font, 
					   System::Drawing::Graphics^ graphics, DataGridView^ dataGridView,
					   LCBCAdminSystem::DataAccessClass^ dataAccessClass );

float  DrawHeader( System::Drawing::Font^ font, System::Drawing::Graphics^ graphics, float columnPosition, 
				 float rowPosition, DataGridView^ datagridview );

void DrawGridBody( System::Drawing::Font^ font, System::Drawing::Graphics^ graphics, 
				   float columnPosition, float rowPosition, DataGridView^ dataGridView, 
				   LCBCAdminSystem::DataAccessClass^ dataAccessClass );

}

#endif

