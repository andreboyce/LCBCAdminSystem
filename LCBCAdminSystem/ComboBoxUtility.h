#pragma once

#ifndef __ComboBoxUtility_H
#define __ComboBoxUtility_H

// Fills a combobox with a list of strings
void FillComboBox( System::Windows::Forms::ComboBox^ comboBox, 
				   System::Collections::Generic::List<System::String^>^ list, 
				   bool setText );

#endif