#pragma once

#include "DataGridViewPrinter.h"
#include "ApplicaionForm.h"
#include "DataAccessClass.h"
#include "LoadPanel.h"
#include "print.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace LCBCAdminSystem
{

	/// <summary>
	/// Summary for Applicants
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Applicants : public System::Windows::Forms::Form
	{
	public:
		Applicants(void)
		{
			InitializeComponent();
			dataAccessClass = gcnew LCBCAdminSystem::DataAccessClass();
			dataGridViewPrinter = gcnew DataGridViewPrinter( dataGridView, printDocument, true, true, "Title", this->Font, Color::Black, true );
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Applicants()
		{
			if (components)
			{
				delete components;
			}
		}
	public: DataGridViewPrinter^ dataGridViewPrinter;
	private: LCBCAdminSystem::DataAccessClass^ dataAccessClass;
	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	private: System::Windows::Forms::SplitContainer^  splitContainer2;
	private: System::Windows::Forms::SplitContainer^  splitContainer3;
	private: System::Windows::Forms::Label^  label42;
	private: System::Windows::Forms::Label^  label43;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::ListView^  listView;
	private: System::Windows::Forms::ColumnHeader^  Field;
	private: System::Windows::Forms::ColumnHeader^  Value;
	private: System::Windows::Forms::DataGridView^  dataGridView;
	private: System::Windows::Forms::StatusStrip^  statusStrip;
	private: System::Windows::Forms::Button^  buttonApprove;
	private: System::Windows::Forms::Button^  buttonPrint;
	private: System::Drawing::Printing::PrintDocument^  printDocument;
	private: System::Windows::Forms::PrintPreviewDialog^  printPreviewDialog;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker;
	private: System::Windows::Forms::Button^  buttonAdd;
	private: System::Windows::Forms::Button^  buttonSave;
	private: System::Windows::Forms::Button^  buttonReload;


	protected: 

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Applicants::typeid));
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->dateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->splitContainer2 = (gcnew System::Windows::Forms::SplitContainer());
			this->splitContainer3 = (gcnew System::Windows::Forms::SplitContainer());
			this->listView = (gcnew System::Windows::Forms::ListView());
			this->Field = (gcnew System::Windows::Forms::ColumnHeader());
			this->Value = (gcnew System::Windows::Forms::ColumnHeader());
			this->dataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->buttonSave = (gcnew System::Windows::Forms::Button());
			this->buttonAdd = (gcnew System::Windows::Forms::Button());
			this->buttonApprove = (gcnew System::Windows::Forms::Button());
			this->buttonPrint = (gcnew System::Windows::Forms::Button());
			this->statusStrip = (gcnew System::Windows::Forms::StatusStrip());
			this->printDocument = (gcnew System::Drawing::Printing::PrintDocument());
			this->printPreviewDialog = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->buttonReload = (gcnew System::Windows::Forms::Button());
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->splitContainer2->Panel1->SuspendLayout();
			this->splitContainer2->Panel2->SuspendLayout();
			this->splitContainer2->SuspendLayout();
			this->splitContainer3->Panel1->SuspendLayout();
			this->splitContainer3->Panel2->SuspendLayout();
			this->splitContainer3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->FixedPanel = System::Windows::Forms::FixedPanel::Panel1;
			this->splitContainer1->Location = System::Drawing::Point(0, 0);
			this->splitContainer1->Name = L"splitContainer1";
			this->splitContainer1->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->dateTimePicker);
			this->splitContainer1->Panel1->Controls->Add(this->pictureBox1);
			this->splitContainer1->Panel1->Controls->Add(this->label42);
			this->splitContainer1->Panel1->Controls->Add(this->label43);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->splitContainer2);
			this->splitContainer1->Size = System::Drawing::Size(797, 434);
			this->splitContainer1->SplitterDistance = 107;
			this->splitContainer1->SplitterWidth = 10;
			this->splitContainer1->TabIndex = 0;
			this->splitContainer1->TabStop = false;
			// 
			// dateTimePicker
			// 
			this->dateTimePicker->Enabled = false;
			this->dateTimePicker->Location = System::Drawing::Point(12, 61);
			this->dateTimePicker->Name = L"dateTimePicker";
			this->dateTimePicker->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker->TabIndex = 9;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(316, 9);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(84, 96);
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label42->Location = System::Drawing::Point(110, 39);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(107, 19);
			this->label42->TabIndex = 7;
			this->label42->Text = L"APPLICANTS";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label43->Location = System::Drawing::Point(12, 9);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(298, 19);
			this->label43->TabIndex = 6;
			this->label43->Text = L"LOWER CARIBBEAN BIBLE COLLEGE";
			// 
			// splitContainer2
			// 
			this->splitContainer2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer2->FixedPanel = System::Windows::Forms::FixedPanel::Panel2;
			this->splitContainer2->Location = System::Drawing::Point(0, 0);
			this->splitContainer2->Name = L"splitContainer2";
			this->splitContainer2->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer2.Panel1
			// 
			this->splitContainer2->Panel1->Controls->Add(this->splitContainer3);
			// 
			// splitContainer2.Panel2
			// 
			this->splitContainer2->Panel2->Controls->Add(this->buttonReload);
			this->splitContainer2->Panel2->Controls->Add(this->buttonSave);
			this->splitContainer2->Panel2->Controls->Add(this->buttonAdd);
			this->splitContainer2->Panel2->Controls->Add(this->buttonApprove);
			this->splitContainer2->Panel2->Controls->Add(this->buttonPrint);
			this->splitContainer2->Size = System::Drawing::Size(797, 317);
			this->splitContainer2->SplitterDistance = 227;
			this->splitContainer2->SplitterWidth = 10;
			this->splitContainer2->TabIndex = 0;
			this->splitContainer2->TabStop = false;
			// 
			// splitContainer3
			// 
			this->splitContainer3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer3->FixedPanel = System::Windows::Forms::FixedPanel::Panel1;
			this->splitContainer3->Location = System::Drawing::Point(0, 0);
			this->splitContainer3->Name = L"splitContainer3";
			// 
			// splitContainer3.Panel1
			// 
			this->splitContainer3->Panel1->Controls->Add(this->listView);
			// 
			// splitContainer3.Panel2
			// 
			this->splitContainer3->Panel2->Controls->Add(this->dataGridView);
			this->splitContainer3->Size = System::Drawing::Size(797, 227);
			this->splitContainer3->SplitterDistance = 183;
			this->splitContainer3->SplitterWidth = 10;
			this->splitContainer3->TabIndex = 0;
			this->splitContainer3->TabStop = false;
			// 
			// listView
			// 
			this->listView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) {this->Field, this->Value});
			this->listView->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listView->GridLines = true;
			this->listView->Location = System::Drawing::Point(0, 0);
			this->listView->Name = L"listView";
			this->listView->Size = System::Drawing::Size(183, 227);
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
			this->dataGridView->Size = System::Drawing::Size(604, 227);
			this->dataGridView->TabIndex = 1;
			this->dataGridView->CurrentCellChanged += gcnew System::EventHandler(this, &Applicants::dataGridView_CurrentCellChanged);
			// 
			// buttonSave
			// 
			this->buttonSave->Location = System::Drawing::Point(270, 3);
			this->buttonSave->Name = L"buttonSave";
			this->buttonSave->Size = System::Drawing::Size(75, 23);
			this->buttonSave->TabIndex = 3;
			this->buttonSave->Text = L"Save";
			this->buttonSave->UseVisualStyleBackColor = true;
			this->buttonSave->Click += gcnew System::EventHandler(this, &Applicants::buttonSave_Click);
			// 
			// buttonAdd
			// 
			this->buttonAdd->Location = System::Drawing::Point(27, 3);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(75, 23);
			this->buttonAdd->TabIndex = 2;
			this->buttonAdd->Text = L"Add";
			this->buttonAdd->UseVisualStyleBackColor = true;
			this->buttonAdd->Click += gcnew System::EventHandler(this, &Applicants::buttonAdd_Click);
			// 
			// buttonApprove
			// 
			this->buttonApprove->Location = System::Drawing::Point(108, 3);
			this->buttonApprove->Name = L"buttonApprove";
			this->buttonApprove->Size = System::Drawing::Size(75, 23);
			this->buttonApprove->TabIndex = 1;
			this->buttonApprove->Text = L"Approve";
			this->buttonApprove->UseVisualStyleBackColor = true;
			this->buttonApprove->Click += gcnew System::EventHandler(this, &Applicants::buttonApprove_Click);
			// 
			// buttonPrint
			// 
			this->buttonPrint->Location = System::Drawing::Point(189, 3);
			this->buttonPrint->Name = L"buttonPrint";
			this->buttonPrint->Size = System::Drawing::Size(75, 23);
			this->buttonPrint->TabIndex = 0;
			this->buttonPrint->Text = L"Print";
			this->buttonPrint->UseVisualStyleBackColor = true;
			this->buttonPrint->Click += gcnew System::EventHandler(this, &Applicants::buttonPrint_Click);
			// 
			// statusStrip
			// 
			this->statusStrip->Location = System::Drawing::Point(0, 412);
			this->statusStrip->Name = L"statusStrip";
			this->statusStrip->Size = System::Drawing::Size(797, 22);
			this->statusStrip->TabIndex = 1;
			this->statusStrip->Text = L"statusStrip1";
			// 
			// printDocument
			// 
			this->printDocument->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &Applicants::printDocument_PrintPage);
			// 
			// printPreviewDialog
			// 
			this->printPreviewDialog->AutoScrollMargin = System::Drawing::Size(0, 0);
			this->printPreviewDialog->AutoScrollMinSize = System::Drawing::Size(0, 0);
			this->printPreviewDialog->ClientSize = System::Drawing::Size(400, 300);
			this->printPreviewDialog->Document = this->printDocument;
			this->printPreviewDialog->Enabled = true;
			this->printPreviewDialog->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"printPreviewDialog.Icon")));
			this->printPreviewDialog->Name = L"printPreviewDialog";
			this->printPreviewDialog->Visible = false;
			// 
			// buttonReload
			// 
			this->buttonReload->Location = System::Drawing::Point(351, 3);
			this->buttonReload->Name = L"buttonReload";
			this->buttonReload->Size = System::Drawing::Size(75, 23);
			this->buttonReload->TabIndex = 4;
			this->buttonReload->Text = L"Reload";
			this->buttonReload->UseVisualStyleBackColor = true;
			this->buttonReload->Click += gcnew System::EventHandler(this, &Applicants::buttonReload_Click);
			// 
			// Applicants
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(797, 434);
			this->Controls->Add(this->statusStrip);
			this->Controls->Add(this->splitContainer1);
			this->MinimumSize = System::Drawing::Size(526, 468);
			this->Name = L"Applicants";
			this->Text = L"Applicants";
			this->Load += gcnew System::EventHandler(this, &Applicants::Applicants_Load);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel1->PerformLayout();
			this->splitContainer1->Panel2->ResumeLayout(false);
			this->splitContainer1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->splitContainer2->Panel1->ResumeLayout(false);
			this->splitContainer2->Panel2->ResumeLayout(false);
			this->splitContainer2->ResumeLayout(false);
			this->splitContainer3->Panel1->ResumeLayout(false);
			this->splitContainer3->Panel2->ResumeLayout(false);
			this->splitContainer3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Applicants_Load(System::Object^  sender, System::EventArgs^  e)
	{
	   try
	   {
          bool return_value = LoadPanel( dataAccessClass,   dataGridView,   "Applicant",   listView );
		  if( return_value == false )
		  {
			 this->Close();
		  }
       }
	   catch( System::Exception^ e )
	   {
		  using namespace System::Windows::Forms;
		  MessageBox::Show( e->Message, "Error", MessageBoxButtons::OK, 
				            MessageBoxIcon::Exclamation );
		  this->Close();
       }
	}
	private: System::Void dataGridView_CurrentCellChanged(System::Object^  sender, System::EventArgs^  e)
	{
	   LoadFieldValues( dataGridView, listView, dataAccessClass,  "Applicant" );
	}
	private: System::Void buttonPrint_Click(System::Object^  sender, System::EventArgs^  e)
	{
		printPreviewDialog->ShowDialog();
	}
	private: System::Void printDocument_PrintPage(System::Object^  sender, System::Drawing::Printing::PrintPageEventArgs^  e)
	{
		//System::Drawing::Font^         font = gcnew System::Drawing::Font( this->Font, System::Drawing::FontStyle::Regular );
        //System::Drawing::Graphics^ graphics = e->Graphics;
		//DrawDataGridView( System::Drawing::PointF(), dateTimePicker, font, graphics, dataGridView, dataAccessClass );
        bool more = dataGridViewPrinter->DrawDataGridView( e->Graphics );
		if( more == true )
		{
		   e->HasMorePages = true;
		}
	}
	private: System::Void buttonAdd_Click(System::Object^  sender, System::EventArgs^  e)
	{
		ApplicaionForm^ af = gcnew ApplicaionForm();
		af->ShowDialog();
		try
		{
	       dataAccessClass->ClearDataSet();
	       dataAccessClass->FillDataSet( "Applicant" );
	       dataGridView->DataSource = dataAccessClass->dataSet->Tables[ "Approve" ];
		}
		catch( System::Exception^ e )
		{
			using namespace System::Windows::Forms;
			MessageBox::Show( e->Message, "Error: Program Exiting because...", MessageBoxButtons::OK, 
					          MessageBoxIcon::Exclamation );
		}
	}
	private: System::Void buttonApprove_Click(System::Object^  sender, System::EventArgs^  e)
	{
		Approve();
	}
	void Approve( )
	{

		//int Row = dataGridView->CurrentRow->Index;
		try
		{
			LCBCAdminSystem::DataAccessClass^ studentDataAccessClass = gcnew LCBCAdminSystem::DataAccessClass();
		
			studentDataAccessClass->FillDataSet( "Student" );
			System::Data::DataRow^ dataRow = studentDataAccessClass->dataSet->Tables[ "Student" ]->NewRow();
			dataRow["ID"]                        = studentDataAccessClass->dataSet->Tables[ "Student" ]->Rows->Count;
			dataRow["First_Name"]                = dataGridView->CurrentRow->Cells["First_Name"]->Value->ToString();
			dataRow["Last_Name"]                 = dataGridView->CurrentRow->Cells["Last_Name"]->Value->ToString();;
			dataRow["Middle_Names"]              = dataGridView->CurrentRow->Cells["Middle_Names"]->Value->ToString();
			dataRow["Address"]                   = dataGridView->CurrentRow->Cells["Address"]->Value->ToString();
			dataRow["Sex"]                       = dataGridView->CurrentRow->Cells["Sex"]->Value->ToString();			
			dataRow["Application_Date"]          = dataGridView->CurrentRow->Cells["Application_Date"]->Value->ToString();
			dataRow["Date_of_Birth"]             = dataGridView->CurrentRow->Cells["Date_of_Birth"]->Value->ToString();
			dataRow["Place_of_Birth"]            = dataGridView->CurrentRow->Cells["Place_of_Birth"]->Value->ToString();
			dataRow["GuardiansName"]             = dataGridView->CurrentRow->Cells["GuardiansName"]->Value->ToString();
			dataRow["GuardiansAddress"]          = dataGridView->CurrentRow->Cells["GuardiansAddress"]->Value->ToString();
			dataRow["MothersOccupation"]         = dataGridView->CurrentRow->Cells["MothersOccupation"]->Value->ToString();
			dataRow["FathersOccupation"]         = dataGridView->CurrentRow->Cells["FathersOccupation"]->Value->ToString();
			dataRow["Older_Siblings"]            = dataGridView->CurrentRow->Cells["Older_Siblings"]->Value->ToString();
			dataRow["Younger_Siblings"]          = dataGridView->CurrentRow->Cells["Younger_Siblings"]->Value->ToString();
			dataRow["Baptised"]                  = dataGridView->CurrentRow->Cells["Baptised"]->Value->ToString();
			if( dataGridView->CurrentRow->Cells["Date_of_Baptism"]->Value->ToString()->Length != 0 )
			{
				dataRow["Date_of_Baptism"]           = dataGridView->CurrentRow->Cells["Date_of_Baptism"]->Value->ToString();
			}
			dataRow["Attended_High_School"]      = dataGridView->CurrentRow->Cells["Attended_High_School"]->Value->ToString();
			dataRow["Name_of_High_School"]       = dataGridView->CurrentRow->Cells["Name_of_High_School"]->Value->ToString();
			dataRow["Address_of_High_School"]    = dataGridView->CurrentRow->Cells["Address_of_High_School"]->Value->ToString();
			dataRow["Completed_High_School"]     = dataGridView->CurrentRow->Cells["Completed_High_School"]->Value->ToString();
			dataRow["Ministers_Name"]            = dataGridView->CurrentRow->Cells["Ministers_Name"]->Value->ToString();
			dataRow["Ministers_Address"]         = dataGridView->CurrentRow->Cells["Ministers_Address"]->Value->ToString();
			dataRow["Christian_Work_Performed"]  = dataGridView->CurrentRow->Cells["Christian_Work_Performed"]->Value->ToString();
			dataRow["Church_Name"]               = dataGridView->CurrentRow->Cells["Church_Name"]->Value->ToString();
			dataRow["Church_Address"]            = dataGridView->CurrentRow->Cells["Church_Address"]->Value->ToString();
			dataRow["Elder_1_Name"]              = dataGridView->CurrentRow->Cells["Elder_1_Name"]->Value->ToString();
			dataRow["Elder_1_Address"]           = dataGridView->CurrentRow->Cells["Elder_1_Address"]->Value->ToString();
			dataRow["Elder_2_Name"]              = dataGridView->CurrentRow->Cells["Elder_2_Name"]->Value->ToString();
			dataRow["Elder_2_Address"]           = dataGridView->CurrentRow->Cells["Elder_2_Address"]->Value->ToString();
			dataRow["Employer_1_Name"]           = dataGridView->CurrentRow->Cells["Employer_1_Name"]->Value->ToString();
			dataRow["Employer_1_Address"]        = dataGridView->CurrentRow->Cells["Employer_1_Address"]->Value->ToString();
			dataRow["Employer_2_Name"]           = dataGridView->CurrentRow->Cells["Employer_2_Name"]->Value->ToString();
			dataRow["Employer_2_Address"]        = dataGridView->CurrentRow->Cells["Employer_2_Address"]->Value->ToString();
			dataRow["UsesIntoxicatingBeverages"] = dataGridView->CurrentRow->Cells["UsesIntoxicatingBeverages"]->Value->ToString();
			dataRow["Smoker"]                    = dataGridView->CurrentRow->Cells["Smoker"]->Value->ToString();
			dataRow["IllegalDrugUser"]           = dataGridView->CurrentRow->Cells["IllegalDrugUser"]->Value->ToString();
			dataRow["PastArrest"]                = dataGridView->CurrentRow->Cells["PastArrest"]->Value->ToString();
			dataRow["Plan_to_Graduate"]          = dataGridView->CurrentRow->Cells["Plan_to_Graduate"]->Value->ToString();
			dataRow["ExpectedDurationOfStudy"]   = dataGridView->CurrentRow->Cells["ExpectedDurationOfStudy"]->Value->ToString();
			dataRow["ExpectedQualifications"]    = dataGridView->CurrentRow->Cells["ExpectedQualifications"]->Value->ToString();
			dataRow["TransferStudent"]           = dataGridView->CurrentRow->Cells["TransferStudent"]->Value->ToString();
			dataRow["ReasonForTransfer"]         = dataGridView->CurrentRow->Cells["ReasonForTransfer"]->Value->ToString();
			dataRow["FutuerPlans"]               = dataGridView->CurrentRow->Cells["FutuerPlans"]->Value->ToString();
			System::String^ message = gcnew System::String( "" );
			message = "The applicant " + dataGridView->CurrentRow->Cells["First_Name"]->Value->ToString() + " " + dataGridView->CurrentRow->Cells["Last_Name"]->Value->ToString() + " was approved\n\nAnd can be found in the Students section. " ;
			studentDataAccessClass->dataSet->Tables[ "Student" ]->Rows->Add( dataRow );
			studentDataAccessClass->Update( "Student" );
			int index = dataGridView->CurrentRow->Index;
			//dataGridView->CurrentRow->FieldGetter
			dataGridView->Rows->RemoveAt( dataGridView->CurrentRow->Index );
			//dataAccessClass->dataSet->Tables["Applicant"]->Rows[index]->RowState = DataRowState::Deleted;
			//dataAccessClass->dataSet->Tables["Applicant"]->Rows->RemoveAt( dataGridView->CurrentRow->Index );
			dataAccessClass->Update( "Applicant" );
			studentDataAccessClass->dataSet->AcceptChanges();
			dataAccessClass->FillDataSet( "Applicant" );
			MessageBox::Show( message, "Applicant Approved", MessageBoxButtons::OK, 
					          MessageBoxIcon::Exclamation );
		}
		catch( System::Exception^ e )
		{
			using namespace System::Windows::Forms;
			MessageBox::Show( e->Message, "Error: Program Exiting because...", MessageBoxButtons::OK, 
					          MessageBoxIcon::Exclamation );
		}
	}
	private: System::Void buttonSave_Click(System::Object^  sender, System::EventArgs^  e)
	{
		try
		{
		   dataAccessClass->Update( "Applicant" );
		   dataAccessClass->dataSet->AcceptChanges();
		   dataAccessClass->FillDataSet( "Applicant" );
		   MessageBox::Show( "Data updated." );
		}
		catch( System::Exception^ e )
		{
			using namespace System::Windows::Forms;
			MessageBox::Show( e->Message, "Error: Program Exiting because...", MessageBoxButtons::OK, 
					          MessageBoxIcon::Exclamation );
		}
	}
	private: System::Void buttonReload_Click(System::Object^  sender, System::EventArgs^  e)
	{
		try
		{
	       dataAccessClass->ClearDataSet();
	       dataAccessClass->FillDataSet( "Applicant" );
	       dataGridView->DataSource = dataAccessClass->dataSet->Tables[ "Applicant" ];
		}
		catch( System::Exception^ e )
		{
			using namespace System::Windows::Forms;
			MessageBox::Show( e->Message, "Error: Program Exiting because...", MessageBoxButtons::OK, 
					          MessageBoxIcon::Exclamation );
		}
	}
};
}
