#include "stdafx.h"
#include "print.h"

namespace LCBCAdminSystem
{

float printHeader( System::Drawing::Graphics^ graphics, System::Drawing::Font^ font )
{
	try
	{
	   System::Drawing::Bitmap^ image = gcnew System::Drawing::Bitmap( "../data/logosmall.JPG" );
	   System::Drawing::RectangleF visibleClipBounds = graphics->VisibleClipBounds;
	   float width  = visibleClipBounds.Width;
	   float height = visibleClipBounds.Height;
	   font->GetHeight( graphics );
	   graphics->DrawImage( image, System::Drawing::PointF( (float)(width/2)-(image->Width/2), (float)0 ) );
	   //System::Windows::Forms::VisualStyles::VisualStyleRenderer::GetTextMetrics();
	   System::Drawing::SizeF^ stringSize = gcnew System::Drawing::SizeF();
       stringSize = graphics->MeasureString( "Lower Caribbean Bible College", font );
	   graphics->DrawString( "Lower Caribbean Bible College", font, System::Drawing::Brushes::Black, System::Drawing::PointF( (float)(width/2)-(stringSize->Width/2), (float)image->Height ) );
	   float bottom_of_header = (float)image->Height+(float)font->Height;
	   return bottom_of_header;
	}
    catch( System::Exception^ e )
    {
        using namespace System::Windows::Forms;
        MessageBox::Show( e->Message, "Error", MessageBoxButtons::OK, 
                          MessageBoxIcon::Exclamation );
	   return (float)0;
    }
}

void DrawDataGridView( System::Drawing::PointF point, DateTimePicker^ dateTimePicker, System::Drawing::Font^ font, 
					   System::Drawing::Graphics^ graphics, DataGridView^ dataGridView,
					   LCBCAdminSystem::DataAccessClass^ dataAccessClass )
{			
    // Print the date and time
	graphics->DrawString( dateTimePicker->Text, font, System::Drawing::Brushes::Black, point.X, point.Y );

    // custom draws the grid from the data

    float columnPosition = point.X;
    float rowPosition    = point.Y+25;

    // draw headers
    DrawHeader( font, graphics, columnPosition, rowPosition, dataGridView );

    rowPosition += 65;

    // draw each row
	DrawGridBody( font, graphics, columnPosition, rowPosition, dataGridView, dataAccessClass );
}

float DrawHeader( System::Drawing::Font^ font, System::Drawing::Graphics^ graphics, float columnPosition, float rowPosition, DataGridView^ datagridview )
{
    for( int i=0; i<datagridview->Columns->Count ; i++ )
	{
       graphics->DrawString( datagridview->Columns[i]->HeaderText, font, System::Drawing::Brushes::Black, (float)columnPosition, (float)rowPosition );
       columnPosition += datagridview->Columns[i]->Width + 5;
	}
    return columnPosition;
}

void DrawGridBody( System::Drawing::Font^ font, System::Drawing::Graphics^ graphics, float columnPosition, float rowPosition, DataGridView^ dataGridView, LCBCAdminSystem::DataAccessClass^ dataAccessClass )
{
   // loop through each row and draw the data to the graphics
   // surface.
   System::Drawing::RectangleF visibleClipBounds = graphics->VisibleClipBounds;
   float width  = visibleClipBounds.Width;
   float height = visibleClipBounds.Height;
   for( int i=0; i<dataAccessClass->dataSet->Tables[dataAccessClass->tableName]->Rows->Count; i++ )
   {
      System::Data::DataRow^ dataRow = dataAccessClass->dataSet->Tables[dataAccessClass->tableName]->Rows[i];
      columnPosition = 0;

      // draw a line to separate the rows
	  graphics->DrawLine( System::Drawing::Pens::Black, 
					      System::Drawing::PointF( 0.0, (float)rowPosition ), 
						  System::Drawing::PointF( (float)width, (float)rowPosition ) );

      // loop through each column in the row, and
      // draw the individual data item
	  for( int i=0; i<dataGridView->Columns->Count ; i++ )
      {
	     DataGridViewColumn^ dataColumn = dataGridView->Columns[i];
         // if its a picture, draw a bitmap
         if( dataColumn->DataPropertyName == "Picture" )
         {
            if( dataRow[ dataColumn->DataPropertyName ]->ToString()->Length != 0 )
            {
               //graphics->DrawImage();
            }
         }
         else if( dataColumn->ValueType == (gcnew System::Boolean)->GetType() )
         {
            // draw a check box in the column

            graphics->DrawRectangle( System::Drawing::Pens::Black, Rectangle( (int)columnPosition, (int)rowPosition + 20, 10, 10 ) );
         }
         else
         {
            // just draw string in the column
		    System::String^ text = dataRow[ dataColumn->DataPropertyName ]->ToString();
		    if( dataColumn->DefaultCellStyle->Font != nullptr )
            {
               graphics->DrawString( text, dataColumn->DefaultCellStyle->Font, System::Drawing::Brushes::Black, (float)columnPosition, (float)rowPosition + 20 );
            }
            else
            {
               graphics->DrawString( text, font, System::Drawing::Brushes::Black, (float)columnPosition, (float)rowPosition + 20 );
            }
         }

         // go to the next column position
         columnPosition += dataColumn->Width + 5;
      }
      // go to the next row position
      rowPosition = rowPosition + 65;
   }
}

}
