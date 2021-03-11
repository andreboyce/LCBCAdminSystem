#pragma once

#include "DataGridViewPrinter.h"
#include "AddStudentDialog.h"
#include "ClassGradeReport.h"
#include "GradeReport.h"
#include "RegistrationForm.h"
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
	/// Summary for Students
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Students : public System::Windows::Forms::Form
	{
	public:
		Students(void)
		{
			InitializeComponent();
			dataAccessClass     = gcnew LCBCAdminSystem::DataAccessClass();
			dataGridViewPrinter = gcnew DataGridViewPrinter( dataGridView, printDocument, true, true, "Title", this->Font, Color::Black, true );
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Students()
		{
			if (components)
			{
				delete components;
			}
		}
	public: DataGridViewPrinter^ dataGridViewPrinter;
	public: LCBCAdminSystem::DataAccessClass^ dataAccessClass;
	private: System::Windows::Forms::StatusStrip^  statusStrip;
	public: 

	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	private: System::Windows::Forms::SplitContainer^  splitContainer2;
	private: System::Windows::Forms::SplitContainer^  splitContainer3;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label42;
	private: System::Windows::Forms::Label^  label43;
	private: System::Windows::Forms::ListView^  listView;
	private: System::Windows::Forms::ColumnHeader^  Field;
	private: System::Windows::Forms::ColumnHeader^  Value;


	private: System::Windows::Forms::DataGridView^  dataGridView;
	private: System::Windows::Forms::Button^  buttonPrint;
	private: System::Windows::Forms::PrintPreviewDialog^  printPreviewDialog;
	private: System::Drawing::Printing::PrintDocument^  printDocument;
	private: System::Windows::Forms::Button^  buttonStudentClassGrades;
	private: System::Windows::Forms::Button^  buttonStudentGrades;
	private: System::Windows::Forms::Button^  buttonRegisterStudents;
	private: System::Windows::Forms::Button^  buttonAddStudents;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Students::typeid));
			this->statusStrip = (gcnew System::Windows::Forms::StatusStrip());
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
			this->buttonReload = (gcnew System::Windows::Forms::Button());
			this->buttonSave = (gcnew System::Windows::Forms::Button());
			this->buttonAddStudents = (gcnew System::Windows::Forms::Button());
			this->buttonStudentClassGrades = (gcnew System::Windows::Forms::Button());
			this->buttonPrint = (gcnew System::Windows::Forms::Button());
			this->buttonStudentGrades = (gcnew System::Windows::Forms::Button());
			this->buttonRegisterStudents = (gcnew System::Windows::Forms::Button());
			this->printPreviewDialog = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->printDocument = (gcnew System::Drawing::Printing::PrintDocument());
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
			// statusStrip
			// 
			this->statusStrip->Location = System::Drawing::Point(0, 437);
			this->statusStrip->Name = L"statusStrip";
			this->statusStrip->Size = System::Drawing::Size(738, 22);
			this->statusStrip->TabIndex = 0;
			this->statusStrip->Text = L"statusStrip1";
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->FixedPanel = System::Windows::Forms::FixedPanel::Panel1;
			this->splitContainer1->IsSplitterFixed = true;
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
			this->splitContainer1->Size = System::Drawing::Size(738, 437);
			this->splitContainer1->SplitterDistance = 107;
			this->splitContainer1->SplitterWidth = 10;
			this->splitContainer1->TabIndex = 0;
			this->splitContainer1->TabStop = false;
			// 
			// dateTimePicker
			// 
			this->dateTimePicker->Enabled = false;
			this->dateTimePicker->Location = System::Drawing::Point(3, 61);
			this->dateTimePicker->Name = L"dateTimePicker";
			this->dateTimePicker->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker->TabIndex = 13;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(307, 9);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(84, 96);
			this->pictureBox1->TabIndex = 12;
			this->pictureBox1->TabStop = false;
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label42->Location = System::Drawing::Point(101, 39);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(92, 19);
			this->label42->TabIndex = 11;
			this->label42->Text = L"STUDENTS";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label43->Location = System::Drawing::Point(3, 9);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(298, 19);
			this->label43->TabIndex = 10;
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
			this->splitContainer2->Panel2->Controls->Add(this->buttonAddStudents);
			this->splitContainer2->Panel2->Controls->Add(this->buttonStudentClassGrades);
			this->splitContainer2->Panel2->Controls->Add(this->buttonPrint);
			this->splitContainer2->Panel2->Controls->Add(this->buttonStudentGrades);
			this->splitContainer2->Panel2->Controls->Add(this->buttonRegisterStudents);
			this->splitContainer2->Size = System::Drawing::Size(738, 320);
			this->splitContainer2->SplitterDistance = 234;
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
			this->splitContainer3->Size = System::Drawing::Size(738, 234);
			this->splitContainer3->SplitterDistance = 183;
			this->splitContainer3->SplitterWidth = 10;
			this->splitContainer3->TabIndex = 0;
			this->splitContainer3->TabStop = false;
			// 
			// listView
			// 
			this->listView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) {this->Field, this->Value});
			this->listView->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listView->FullRowSelect = true;
			this->listView->GridLines = true;
			this->listView->Location = System::Drawing::Point(0, 0);
			this->listView->Name = L"listView";
			this->listView->Size = System::Drawing::Size(183, 234);
			this->listView->TabIndex = 1;
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
			this->dataGridView->Size = System::Drawing::Size(545, 234);
			this->dataGridView->TabIndex = 1;
			this->dataGridView->CurrentCellChanged += gcnew System::EventHandler(this, &Students::dataGridView_CurrentCellChanged);
			// 
			// buttonReload
			// 
			this->buttonReload->Location = System::Drawing::Point(629, 5);
			this->buttonReload->Name = L"buttonReload";
			this->buttonReload->Size = System::Drawing::Size(81, 28);
			this->buttonReload->TabIndex = 19;
			this->buttonReload->Text = L"Reolad";
			this->buttonReload->UseVisualStyleBackColor = true;
			this->buttonReload->Click += gcnew System::EventHandler(this, &Students::buttonReload_Click);
			// 
			// buttonSave
			// 
			this->buttonSave->Location = System::Drawing::Point(528, 4);
			this->buttonSave->Name = L"buttonSave";
			this->buttonSave->Size = System::Drawing::Size(95, 29);
			this->buttonSave->TabIndex = 18;
			this->buttonSave->Text = L"Save";
			this->buttonSave->UseVisualStyleBackColor = true;
			this->buttonSave->Click += gcnew System::EventHandler(this, &Students::buttonSave_Click);
			// 
			// buttonAddStudents
			// 
			this->buttonAddStudents->Location = System::Drawing::Point(324, 5);
			this->buttonAddStudents->Margin = System::Windows::Forms::Padding(4);
			this->buttonAddStudents->Name = L"buttonAddStudents";
			this->buttonAddStudents->Size = System::Drawing::Size(100, 28);
			this->buttonAddStudents->TabIndex = 17;
			this->buttonAddStudents->Text = L"Add";
			this->buttonAddStudents->UseVisualStyleBackColor = true;
			this->buttonAddStudents->Click += gcnew System::EventHandler(this, &Students::buttonAddStudents_Click);
			// 
			// buttonStudentClassGrades
			// 
			this->buttonStudentClassGrades->Location = System::Drawing::Point(219, 4);
			this->buttonStudentClassGrades->Margin = System::Windows::Forms::Padding(4);
			this->buttonStudentClassGrades->Name = L"buttonStudentClassGrades";
			this->buttonStudentClassGrades->Size = System::Drawing::Size(100, 28);
			this->buttonStudentClassGrades->TabIndex = 16;
			this->buttonStudentClassGrades->Text = L"Class Grade";
			this->buttonStudentClassGrades->UseVisualStyleBackColor = true;
			this->buttonStudentClassGrades->Click += gcnew System::EventHandler(this, &Students::buttonStudentClassGrades_Click);
			// 
			// buttonPrint
			// 
			this->buttonPrint->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->buttonPrint->Location = System::Drawing::Point(431, 5);
			this->buttonPrint->Name = L"buttonPrint";
			this->buttonPrint->Size = System::Drawing::Size(95, 27);
			this->buttonPrint->TabIndex = 0;
			this->buttonPrint->Text = L"Print";
			this->buttonPrint->UseVisualStyleBackColor = true;
			this->buttonPrint->Click += gcnew System::EventHandler(this, &Students::buttonPrint_Click);
			// 
			// buttonStudentGrades
			// 
			this->buttonStudentGrades->Location = System::Drawing::Point(111, 4);
			this->buttonStudentGrades->Margin = System::Windows::Forms::Padding(4);
			this->buttonStudentGrades->Name = L"buttonStudentGrades";
			this->buttonStudentGrades->Size = System::Drawing::Size(100, 28);
			this->buttonStudentGrades->TabIndex = 14;
			this->buttonStudentGrades->Text = L"Grades";
			this->buttonStudentGrades->UseVisualStyleBackColor = true;
			this->buttonStudentGrades->Click += gcnew System::EventHandler(this, &Students::buttonStudentGrades_Click);
			// 
			// buttonRegisterStudents
			// 
			this->buttonRegisterStudents->Location = System::Drawing::Point(3, 4);
			this->buttonRegisterStudents->Margin = System::Windows::Forms::Padding(4);
			this->buttonRegisterStudents->Name = L"buttonRegisterStudents";
			this->buttonRegisterStudents->Size = System::Drawing::Size(100, 28);
			this->buttonRegisterStudents->TabIndex = 15;
			this->buttonRegisterStudents->Text = L"Register";
			this->buttonRegisterStudents->UseVisualStyleBackColor = true;
			this->buttonRegisterStudents->Click += gcnew System::EventHandler(this, &Students::buttonRegisterStudents_Click);
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
			// printDocument
			// 
			this->printDocument->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &Students::printDocument_PrintPage);
			// 
			// Students
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(738, 459);
			this->Controls->Add(this->splitContainer1);
			this->Controls->Add(this->statusStrip);
			this->Name = L"Students";
			this->Text = L"Students";
			this->Load += gcnew System::EventHandler(this, &Students::Students_Load);
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
	private: System::Void printDocument_PrintPage( System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e )
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
	private: System::Void Students_Load(System::Object^  sender, System::EventArgs^  e)
	{
		LoadPanel( dataAccessClass,   dataGridView,   "Student",   listView );
	}
	private: System::Void dataGridView_CurrentCellChanged(System::Object^  sender, System::EventArgs^  e)
	{
		LoadFieldValues( dataGridView, listView, dataAccessClass, "Student" );
	}
	private: System::Void buttonPrint_Click(System::Object^  sender, System::EventArgs^  e)
	{
		printPreviewDialog->ShowDialog();
	}
	private: System::Void buttonRegisterStudents_Click(System::Object^  sender, System::EventArgs^  e)
	{
 	   RegistrationForm ^rf = gcnew RegistrationForm();
	   rf->ShowDialog();
	}
	private: System::Void buttonStudentGrades_Click(System::Object^  sender, System::EventArgs^  e)
	{
	   GradeReport ^gr = gcnew GradeReport();
	   gr->ShowDialog();
	}
	private: System::Void buttonStudentClassGrades_Click(System::Object^  sender, System::EventArgs^  e)
	{
	   ClassGradeReport ^cgr = gcnew ClassGradeReport();
	   cgr->ShowDialog();
	}
	private: System::Void buttonAddStudents_Click(System::Object^  sender, System::EventArgs^  e)
	{
		AddStudentDialog^ asd = gcnew AddStudentDialog();
		asd->ShowDialog();
		try
		{
	       dataAccessClass->ClearDataSet();
	       dataAccessClass->FillDataSet( "Student" );
	       dataGridView->DataSource = dataAccessClass->dataSet->Tables[ "Student" ];
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
		   dataAccessClass->Update( "Student" );
		   dataAccessClass->dataSet->AcceptChanges();
		   dataAccessClass->FillDataSet( "Student" );
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
	       dataAccessClass->FillDataSet( "Student" );
	       dataGridView->DataSource = dataAccessClass->dataSet->Tables[ "Student" ];
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
