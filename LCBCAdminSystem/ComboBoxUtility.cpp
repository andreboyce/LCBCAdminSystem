#include "stdafx.h"
#include "ComboBoxUtility.h"

// Adds intems in a list to a combobox
// Optionally sets the text of the combobox to the text of first item
void FillComboBox( System::Windows::Forms::ComboBox^ comboBox, System::Collections::Generic::List<System::String^>^ list, bool setText )
{
	for( int i=0; i<list->Count ; i++ )
    {
	   comboBox->Items->Add( list[i] );
	}
	if( setText )
	{
	   if( comboBox->Items->Count > 0 )
       {
          comboBox->Text = comboBox->Items[0]->ToString();
	   }
	}
}