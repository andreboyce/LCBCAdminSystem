#pragma once

#include "DataAccessClass.h"
#include "print.h"
#include "LoadPanel.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace LCBCAdminSystem
{

	/// <summary>
	/// Summary for FindDialog
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class FindDialog : public System::Windows::Forms::Form
	{
	public:
		FindDialog(void)
		{
			InitializeComponent();
			dataAccessClass = gcnew LCBCAdminSystem::DataAccessClass();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FindDialog()
		{
			if (components)
			{
				delete components;
			}
		}
	private: LCBCAdminSystem::DataAccessClass^ dataAccessClass;
	private: System::Windows::Forms::StatusStrip^  statusStrip;
	protected: 
	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	private: System::Windows::Forms::SplitContainer^  splitContainer2;
	private: System::Windows::Forms::SplitContainer^  splitContainer3;
	private: System::Windows::Forms::SplitContainer^  splitContainer4;
	private: System::Windows::Forms::DataGridView^  dataGridView;
	private: System::Windows::Forms::ListView^  listView;
	private: System::Windows::Forms::ColumnHeader^  Field;
	private: System::Windows::Forms::ColumnHeader^  Value;
	private: System::Windows::Forms::Button^  buttonPrint;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  comboBoxColumn;

	private: System::Windows::Forms::CheckBox^  checkBoxMatchCase;
	private: System::Windows::Forms::ComboBox^  comboBoxTable;

	private: System::Windows::Forms::TextBox^  textBoxSearchString;
	private: System::Windows::Forms::Button^  buttonFind;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::CheckBox^  checkBoxMatchWholePhrase;
	private: System::Windows::Forms::CheckBox^  checkBoxShowEntireTable;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->statusStrip = (gcnew System::Windows::Forms::StatusStrip());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->splitContainer2 = (gcnew System::Windows::Forms::SplitContainer());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->splitContainer3 = (gcnew System::Windows::Forms::SplitContainer());
			this->checkBoxShowEntireTable = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxMatchWholePhrase = (gcnew System::Windows::Forms::CheckBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxSearchString = (gcnew System::Windows::Forms::TextBox());
			this->buttonFind = (gcnew System::Windows::Forms::Button());
			this->comboBoxColumn = (gcnew System::Windows::Forms::ComboBox());
			this->checkBoxMatchCase = (gcnew System::Windows::Forms::CheckBox());
			this->comboBoxTable = (gcnew System::Windows::Forms::ComboBox());
			this->splitContainer4 = (gcnew System::Windows::Forms::SplitContainer());
			this->listView = (gcnew System::Windows::Forms::ListView());
			this->Field = (gcnew System::Windows::Forms::ColumnHeader());
			this->Value = (gcnew System::Windows::Forms::ColumnHeader());
			this->dataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->buttonPrint = (gcnew System::Windows::Forms::Button());
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->splitContainer2->Panel1->SuspendLayout();
			this->splitContainer2->Panel2->SuspendLayout();
			this->splitContainer2->SuspendLayout();
			this->splitContainer3->Panel1->SuspendLayout();
			this->splitContainer3->Panel2->SuspendLayout();
			this->splitContainer3->SuspendLayout();
			this->splitContainer4->Panel1->SuspendLayout();
			this->splitContainer4->Panel2->SuspendLayout();
			this->splitContainer4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// statusStrip
			// 
			this->statusStrip->Location = System::Drawing::Point(0, 488);
			this->statusStrip->Name = L"statusStrip";
			this->statusStrip->Padding = System::Windows::Forms::Padding(1, 0, 16, 0);
			this->statusStrip->Size = System::Drawing::Size(510, 22);
			this->statusStrip->TabIndex = 0;
			this->statusStrip->Text = L"statusStrip1";
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 0);
			this->splitContainer1->Name = L"splitContainer1";
			this->splitContainer1->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->splitContainer2);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->buttonPrint);
			this->splitContainer1->Size = System::Drawing::Size(510, 488);
			this->splitContainer1->SplitterDistance = 438;
			this->splitContainer1->SplitterWidth = 12;
			this->splitContainer1->TabIndex = 1;
			// 
			// splitContainer2
			// 
			this->splitContainer2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer2->Location = System::Drawing::Point(0, 0);
			this->splitContainer2->Name = L"splitContainer2";
			this->splitContainer2->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer2.Panel1
			// 
			this->splitContainer2->Panel1->Controls->Add(this->label1);
			// 
			// splitContainer2.Panel2
			// 
			this->splitContainer2->Panel2->Controls->Add(this->splitContainer3);
			this->splitContainer2->Size = System::Drawing::Size(510, 438);
			this->splitContainer2->SplitterDistance = 31;
			this->splitContainer2->SplitterWidth = 12;
			this->splitContainer2->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(185, 10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(129, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Search Database";
			// 
			// splitContainer3
			// 
			this->splitContainer3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer3->FixedPanel = System::Windows::Forms::FixedPanel::Panel1;
			this->splitContainer3->Location = System::Drawing::Point(0, 0);
			this->splitContainer3->Name = L"splitContainer3";
			this->splitContainer3->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer3.Panel1
			// 
			this->splitContainer3->Panel1->Controls->Add(this->checkBoxShowEntireTable);
			this->splitContainer3->Panel1->Controls->Add(this->checkBoxMatchWholePhrase);
			this->splitContainer3->Panel1->Controls->Add(this->label4);
			this->splitContainer3->Panel1->Controls->Add(this->label3);
			this->splitContainer3->Panel1->Controls->Add(this->label2);
			this->splitContainer3->Panel1->Controls->Add(this->textBoxSearchString);
			this->splitContainer3->Panel1->Controls->Add(this->buttonFind);
			this->splitContainer3->Panel1->Controls->Add(this->comboBoxColumn);
			this->splitContainer3->Panel1->Controls->Add(this->checkBoxMatchCase);
			this->splitContainer3->Panel1->Controls->Add(this->comboBoxTable);
			// 
			// splitContainer3.Panel2
			// 
			this->splitContainer3->Panel2->Controls->Add(this->splitContainer4);
			this->splitContainer3->Size = System::Drawing::Size(510, 395);
			this->splitContainer3->SplitterDistance = 179;
			this->splitContainer3->SplitterWidth = 12;
			this->splitContainer3->TabIndex = 0;
			// 
			// checkBoxShowEntireTable
			// 
			this->checkBoxShowEntireTable->AutoSize = true;
			this->checkBoxShowEntireTable->Location = System::Drawing::Point(294, 151);
			this->checkBoxShowEntireTable->Name = L"checkBoxShowEntireTable";
			this->checkBoxShowEntireTable->Size = System::Drawing::Size(123, 19);
			this->checkBoxShowEntireTable->TabIndex = 9;
			this->checkBoxShowEntireTable->Text = L"Show Entire Table";
			this->checkBoxShowEntireTable->UseVisualStyleBackColor = true;
			// 
			// checkBoxMatchWholePhrase
			// 
			this->checkBoxMatchWholePhrase->AutoSize = true;
			this->checkBoxMatchWholePhrase->Checked = true;
			this->checkBoxMatchWholePhrase->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBoxMatchWholePhrase->Enabled = false;
			this->checkBoxMatchWholePhrase->Location = System::Drawing::Point(137, 90);
			this->checkBoxMatchWholePhrase->Name = L"checkBoxMatchWholePhrase";
			this->checkBoxMatchWholePhrase->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->checkBoxMatchWholePhrase->Size = System::Drawing::Size(139, 19);
			this->checkBoxMatchWholePhrase->TabIndex = 8;
			this->checkBoxMatchWholePhrase->Text = L"Match Whole Phrase";
			this->checkBoxMatchWholePhrase->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(14, 120);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(37, 15);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Value";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(14, 38);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(48, 15);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Column";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(14, 7);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 15);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Table";
			// 
			// textBoxSearchString
			// 
			this->textBoxSearchString->Location = System::Drawing::Point(70, 116);
			this->textBoxSearchString->Name = L"textBoxSearchString";
			this->textBoxSearchString->Size = System::Drawing::Size(206, 22);
			this->textBoxSearchString->TabIndex = 4;
			this->textBoxSearchString->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &FindDialog::textBoxSearchString_KeyPress);
			// 
			// buttonFind
			// 
			this->buttonFind->Location = System::Drawing::Point(189, 146);
			this->buttonFind->Name = L"buttonFind";
			this->buttonFind->Size = System::Drawing::Size(87, 27);
			this->buttonFind->TabIndex = 3;
			this->buttonFind->Text = L"Find";
			this->buttonFind->UseVisualStyleBackColor = true;
			this->buttonFind->Click += gcnew System::EventHandler(this, &FindDialog::buttonFind_Click);
			// 
			// comboBoxColumn
			// 
			this->comboBoxColumn->FormattingEnabled = true;
			this->comboBoxColumn->Location = System::Drawing::Point(70, 35);
			this->comboBoxColumn->Name = L"comboBoxColumn";
			this->comboBoxColumn->Size = System::Drawing::Size(206, 23);
			this->comboBoxColumn->TabIndex = 2;
			// 
			// checkBoxMatchCase
			// 
			this->checkBoxMatchCase->AutoSize = true;
			this->checkBoxMatchCase->Location = System::Drawing::Point(186, 65);
			this->checkBoxMatchCase->Name = L"checkBoxMatchCase";
			this->checkBoxMatchCase->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->checkBoxMatchCase->Size = System::Drawing::Size(90, 19);
			this->checkBoxMatchCase->TabIndex = 1;
			this->checkBoxMatchCase->Text = L"Match Case";
			this->checkBoxMatchCase->UseVisualStyleBackColor = true;
			// 
			// comboBoxTable
			// 
			this->comboBoxTable->FormattingEnabled = true;
			this->comboBoxTable->Location = System::Drawing::Point(70, 3);
			this->comboBoxTable->Name = L"comboBoxTable";
			this->comboBoxTable->Size = System::Drawing::Size(206, 23);
			this->comboBoxTable->TabIndex = 0;
			this->comboBoxTable->SelectedIndexChanged += gcnew System::EventHandler(this, &FindDialog::comboBoxTable_SelectedIndexChanged);
			// 
			// splitContainer4
			// 
			this->splitContainer4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer4->FixedPanel = System::Windows::Forms::FixedPanel::Panel1;
			this->splitContainer4->Location = System::Drawing::Point(0, 0);
			this->splitContainer4->Name = L"splitContainer4";
			// 
			// splitContainer4.Panel1
			// 
			this->splitContainer4->Panel1->Controls->Add(this->listView);
			// 
			// splitContainer4.Panel2
			// 
			this->splitContainer4->Panel2->Controls->Add(this->dataGridView);
			this->splitContainer4->Size = System::Drawing::Size(510, 204);
			this->splitContainer4->SplitterDistance = 189;
			this->splitContainer4->SplitterWidth = 12;
			this->splitContainer4->TabIndex = 0;
			// 
			// listView
			// 
			this->listView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) {this->Field, this->Value});
			this->listView->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listView->FullRowSelect = true;
			this->listView->GridLines = true;
			this->listView->Location = System::Drawing::Point(0, 0);
			this->listView->Name = L"listView";
			this->listView->Size = System::Drawing::Size(189, 204);
			this->listView->TabIndex = 2;
			this->listView->UseCompatibleStateImageBehavior = false;
			this->listView->View = System::Windows::Forms::View::Details;
			// 
			// Field
			// 
			this->Field->Text = L"Field";
			this->Field->Width = 91;
			// 
			// Value
			// 
			this->Value->Text = L"Value";
			this->Value->Width = 92;
			// 
			// dataGridView
			// 
			this->dataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView->Location = System::Drawing::Point(0, 0);
			this->dataGridView->Name = L"dataGridView";
			this->dataGridView->Size = System::Drawing::Size(309, 204);
			this->dataGridView->TabIndex = 0;
			this->dataGridView->CurrentCellChanged += gcnew System::EventHandler(this, &FindDialog::dataGridView_CurrentCellChanged);
			// 
			// buttonPrint
			// 
			this->buttonPrint->Location = System::Drawing::Point(133, 3);
			this->buttonPrint->Name = L"buttonPrint";
			this->buttonPrint->Size = System::Drawing::Size(87, 27);
			this->buttonPrint->TabIndex = 0;
			this->buttonPrint->Text = L"Print";
			this->buttonPrint->UseVisualStyleBackColor = true;
			// 
			// FindDialog
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(510, 510);
			this->Controls->Add(this->splitContainer1);
			this->Controls->Add(this->statusStrip);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Name = L"FindDialog";
			this->Text = L"FindDialog";
			this->Load += gcnew System::EventHandler(this, &FindDialog::FindDialog_Load);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			this->splitContainer1->ResumeLayout(false);
			this->splitContainer2->Panel1->ResumeLayout(false);
			this->splitContainer2->Panel1->PerformLayout();
			this->splitContainer2->Panel2->ResumeLayout(false);
			this->splitContainer2->ResumeLayout(false);
			this->splitContainer3->Panel1->ResumeLayout(false);
			this->splitContainer3->Panel1->PerformLayout();
			this->splitContainer3->Panel2->ResumeLayout(false);
			this->splitContainer3->ResumeLayout(false);
			this->splitContainer4->Panel1->ResumeLayout(false);
			this->splitContainer4->Panel2->ResumeLayout(false);
			this->splitContainer4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		 private: System::Void FindDialog_Load(System::Object^  sender, System::EventArgs^  e)
		 {
			try
			{
				dataAccessClass->FillDataSet( "Student" );
				System::Collections::Generic::List< System::String^ >^tables = dataAccessClass->GetTables();
				for( int i=0 ; i < tables->Count; i++ )
				{
					comboBoxTable->Items->Add( tables[i] );
				}
				comboBoxTable->Text = comboBoxTable->Items[0]->ToString();
			}
			catch( System::Exception^ e )
			{
				using namespace System::Windows::Forms;
				MessageBox::Show( e->Message, "Error", MessageBoxButtons::OK, 
								MessageBoxIcon::Exclamation );
			}
		 }

		 private: System::Void comboBoxTable_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e)
		 {
			try
			{
				LCBCAdminSystem::DataAccessClass^ _dataAccessClass = gcnew LCBCAdminSystem::DataAccessClass();
				_dataAccessClass->FillDataSet( comboBoxTable->Text );
			
				comboBoxColumn->Items->Clear();
				for( int i=0 ; i < _dataAccessClass->dataSet->Tables[comboBoxTable->Text]->Columns->Count; i++ )
			    {
				   comboBoxColumn->Items->Add(	_dataAccessClass->dataSet->Tables[comboBoxTable->Text]->Columns[i]->ColumnName );
				}
				comboBoxColumn->Text = comboBoxColumn->Items[0]->ToString();
			}
			catch( System::Exception^ e )
			{
				using namespace System::Windows::Forms;
				MessageBox::Show( e->Message, "Error", MessageBoxButtons::OK, 
								MessageBoxIcon::Exclamation );
			}
		 }
	     // Searches the database and fills the datagridview with the results
		 private: System::Void buttonFind_Click( System::Object^ sender, System::EventArgs^ e )
		 {
			 Find();
		 }
		 void Find()
		 {
			try
			{
			   bool bNoResults = true;
			   dataGridView->Columns->Clear();
			   dataGridView->Rows->Clear();
			   if( (textBoxSearchString->Text->Length == 0) && (checkBoxShowEntireTable->Checked == false) )
			   {
				  System::Exception^ exception = gcnew System::Exception( "You must specify a search value." );
			      throw exception;
			   }
			   statusStrip->Text = "Searching Please Wait...";
			   dataAccessClass->FillDataSet( comboBoxTable->Text );
			   System::Data::DataRow^ dataRow;
			   int rows    = dataAccessClass->dataSet->Tables[ comboBoxTable->Text ]->Rows->Count;
			   int columns = dataAccessClass->dataSet->Tables[ comboBoxTable->Text ]->Columns->Count;

			   System::Windows::Forms::DataGridViewCell^ cell = gcnew System::Windows::Forms::DataGridViewTextBoxCell();
			   for( int i=0; i<columns ; i++ )
			   {
				  System::Windows::Forms::DataGridViewColumn^ dataGridViewColumn = gcnew System::Windows::Forms::DataGridViewColumn();
			      dataGridViewColumn->Name = dataAccessClass->dataSet->Tables[ comboBoxTable->Text ]->Columns[i]->ColumnName;
				  dataGridViewColumn->CellTemplate = cell;
			      dataGridView->Columns->Add( dataGridViewColumn );
		       }
			   for( int i=0; i<rows ; i++ )
			   {			      
			      dataRow = dataAccessClass->dataSet->Tables[ comboBoxTable->Text ]->Rows[i];
				  if( ( System::String::Compare( dataRow[ comboBoxColumn->Text ]->ToString(), textBoxSearchString->Text, (checkBoxMatchCase->Checked)? false : true ) == 0 ) || checkBoxShowEntireTable->Checked )
			      {
					 System::Windows::Forms::DataGridViewRow^ dataGridViewRow       = gcnew System::Windows::Forms::DataGridViewRow();
					 bNoResults = false;
                     for( int i=0; i<columns ; i++ )
			         {
						System::Windows::Forms::DataGridViewCell^ cell = gcnew System::Windows::Forms::DataGridViewTextBoxCell();
						cell->Value = dataRow[i]->ToString();
						dataGridViewRow->Cells->Add( cell );
			         }
			         dataGridView->Rows->Add( dataGridViewRow );
			      }
   			   }
			   LoadFields( listView, dataAccessClass, comboBoxTable->Text );
			   LoadFieldValues( dataGridView, listView, dataAccessClass, comboBoxTable->Text );
			   statusStrip->Text = "";
			   if( bNoResults )
			   {
				  statusStrip->Text = " No Results Found.";
			   }
			}
			catch( System::Exception^ e )
			{
				using namespace System::Windows::Forms;
				MessageBox::Show( e->Message, "Error", MessageBoxButtons::OK, 
								MessageBoxIcon::Exclamation );
			}
		 }
		 private: System::Void textBoxSearchString_KeyPress( System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^ e )
		 {
			if( e->KeyChar == (wchar_t)System::Windows::Forms::Keys::Enter )
			{
			   Find();
			}
		 }
		 private: System::Void dataGridView_CurrentCellChanged(System::Object^  sender, System::EventArgs^  e)
		 {
	        LoadFieldValues( dataGridView, listView, dataAccessClass, comboBoxTable->Text );
		 }
};
}
