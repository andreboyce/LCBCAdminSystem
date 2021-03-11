#pragma once

#include "DataGridViewPrinter.h"
#include "DataAccessClass.h"
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
	/// Summary for Courses
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Courses : public System::Windows::Forms::Form
	{
	public:
		Courses(void)
		{
			InitializeComponent();
            dataAccessClass     = gcnew LCBCAdminSystem::DataAccessClass();
			dataAccessClass1    = gcnew LCBCAdminSystem::DataAccessClass();
			dataGridViewPrinter = gcnew DataGridViewPrinter( dataGridViewCourses, printDocument, true, true, "Title", this->Font, Color::Black, true );
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Courses()
		{
			if (components)
			{
				delete components;
			}
		}
	public: DataGridViewPrinter^ dataGridViewPrinter;
	private: LCBCAdminSystem::DataAccessClass^ dataAccessClass, ^dataAccessClass1;
	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	protected: 
















	private: System::Windows::Forms::Label^  label42;
	private: System::Windows::Forms::Label^  label43;
	private: System::Windows::Forms::StatusStrip^  statusStrip;




	private: System::Windows::Forms::PictureBox^  pictureBoxLogo;
	private: System::Windows::Forms::SplitContainer^  splitContainer2;
	private: System::Windows::Forms::Label^  label10;

	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownHours;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownTerms;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownCode;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::ComboBox^  comboBoxDepartment;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBoxDescription;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  buttonSubmit;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownNumberOfStudentsEnroled;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownFee;
	private: System::Windows::Forms::TextBox^  textBoxInstructor;
	private: System::Windows::Forms::TextBox^  textBoxName;
	private: System::Windows::Forms::SplitContainer^  splitContainer4;
	private: System::Windows::Forms::DataGridView^  dataGridViewCourses;
	private: System::Windows::Forms::Button^  buttonSave;
	private: System::Windows::Forms::Button^  buttonReload;
	private: System::Windows::Forms::Button^  buttonPrint;
	private: System::Windows::Forms::PrintPreviewDialog^  printPreviewDialog;
	private: System::Drawing::Printing::PrintDocument^  printDocument;













































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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Courses::typeid));
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->pictureBoxLogo = (gcnew System::Windows::Forms::PictureBox());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->splitContainer2 = (gcnew System::Windows::Forms::SplitContainer());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->numericUpDownHours = (gcnew System::Windows::Forms::NumericUpDown());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->numericUpDownTerms = (gcnew System::Windows::Forms::NumericUpDown());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->numericUpDownCode = (gcnew System::Windows::Forms::NumericUpDown());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBoxDepartment = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxDescription = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonSubmit = (gcnew System::Windows::Forms::Button());
			this->numericUpDownNumberOfStudentsEnroled = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownFee = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBoxInstructor = (gcnew System::Windows::Forms::TextBox());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->splitContainer4 = (gcnew System::Windows::Forms::SplitContainer());
			this->dataGridViewCourses = (gcnew System::Windows::Forms::DataGridView());
			this->buttonPrint = (gcnew System::Windows::Forms::Button());
			this->buttonReload = (gcnew System::Windows::Forms::Button());
			this->buttonSave = (gcnew System::Windows::Forms::Button());
			this->statusStrip = (gcnew System::Windows::Forms::StatusStrip());
			this->printPreviewDialog = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->printDocument = (gcnew System::Drawing::Printing::PrintDocument());
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxLogo))->BeginInit();
			this->splitContainer2->Panel1->SuspendLayout();
			this->splitContainer2->Panel2->SuspendLayout();
			this->splitContainer2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDownHours))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDownTerms))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDownCode))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDownNumberOfStudentsEnroled))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDownFee))->BeginInit();
			this->splitContainer4->Panel1->SuspendLayout();
			this->splitContainer4->Panel2->SuspendLayout();
			this->splitContainer4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridViewCourses))->BeginInit();
			this->SuspendLayout();
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
			this->splitContainer1->Panel1->Controls->Add(this->pictureBoxLogo);
			this->splitContainer1->Panel1->Controls->Add(this->label42);
			this->splitContainer1->Panel1->Controls->Add(this->label43);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->splitContainer2);
			this->splitContainer1->Size = System::Drawing::Size(570, 480);
			this->splitContainer1->SplitterDistance = 111;
			this->splitContainer1->SplitterWidth = 10;
			this->splitContainer1->TabIndex = 0;
			// 
			// pictureBoxLogo
			// 
			this->pictureBoxLogo->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBoxLogo.Image")));
			this->pictureBoxLogo->Location = System::Drawing::Point(317, 9);
			this->pictureBoxLogo->Name = L"pictureBoxLogo";
			this->pictureBoxLogo->Size = System::Drawing::Size(86, 96);
			this->pictureBoxLogo->TabIndex = 7;
			this->pictureBoxLogo->TabStop = false;
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label42->Location = System::Drawing::Point(116, 28);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(83, 19);
			this->label42->TabIndex = 2;
			this->label42->Text = L"COURSES";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label43->Location = System::Drawing::Point(11, 9);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(298, 19);
			this->label43->TabIndex = 1;
			this->label43->Text = L"LOWER CARIBBEAN BIBLE COLLEGE";
			// 
			// splitContainer2
			// 
			this->splitContainer2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer2->FixedPanel = System::Windows::Forms::FixedPanel::Panel1;
			this->splitContainer2->IsSplitterFixed = true;
			this->splitContainer2->Location = System::Drawing::Point(0, 0);
			this->splitContainer2->Name = L"splitContainer2";
			this->splitContainer2->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer2.Panel1
			// 
			this->splitContainer2->Panel1->Controls->Add(this->label10);
			this->splitContainer2->Panel1->Controls->Add(this->label9);
			this->splitContainer2->Panel1->Controls->Add(this->numericUpDownHours);
			this->splitContainer2->Panel1->Controls->Add(this->label8);
			this->splitContainer2->Panel1->Controls->Add(this->numericUpDownTerms);
			this->splitContainer2->Panel1->Controls->Add(this->label7);
			this->splitContainer2->Panel1->Controls->Add(this->label5);
			this->splitContainer2->Panel1->Controls->Add(this->numericUpDownCode);
			this->splitContainer2->Panel1->Controls->Add(this->label4);
			this->splitContainer2->Panel1->Controls->Add(this->comboBoxDepartment);
			this->splitContainer2->Panel1->Controls->Add(this->label3);
			this->splitContainer2->Panel1->Controls->Add(this->textBoxDescription);
			this->splitContainer2->Panel1->Controls->Add(this->label2);
			this->splitContainer2->Panel1->Controls->Add(this->label6);
			this->splitContainer2->Panel1->Controls->Add(this->label1);
			this->splitContainer2->Panel1->Controls->Add(this->buttonSubmit);
			this->splitContainer2->Panel1->Controls->Add(this->numericUpDownNumberOfStudentsEnroled);
			this->splitContainer2->Panel1->Controls->Add(this->numericUpDownFee);
			this->splitContainer2->Panel1->Controls->Add(this->textBoxInstructor);
			this->splitContainer2->Panel1->Controls->Add(this->textBoxName);
			// 
			// splitContainer2.Panel2
			// 
			this->splitContainer2->Panel2->Controls->Add(this->splitContainer4);
			this->splitContainer2->Size = System::Drawing::Size(570, 359);
			this->splitContainer2->SplitterDistance = 170;
			this->splitContainer2->SplitterWidth = 10;
			this->splitContainer2->TabIndex = 0;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(12, 144);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(35, 13);
			this->label10->TabIndex = 50;
			this->label10->Text = L"Hours";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(214, 62);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(60, 13);
			this->label9->TabIndex = 48;
			this->label9->Text = L"Description";
			// 
			// numericUpDownHours
			// 
			this->numericUpDownHours->Location = System::Drawing::Point(97, 137);
			this->numericUpDownHours->Name = L"numericUpDownHours";
			this->numericUpDownHours->Size = System::Drawing::Size(55, 20);
			this->numericUpDownHours->TabIndex = 55;
			this->numericUpDownHours->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(212, 35);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(62, 13);
			this->label8->TabIndex = 46;
			this->label8->Text = L"Department";
			// 
			// numericUpDownTerms
			// 
			this->numericUpDownTerms->Location = System::Drawing::Point(97, 60);
			this->numericUpDownTerms->Name = L"numericUpDownTerms";
			this->numericUpDownTerms->Size = System::Drawing::Size(55, 20);
			this->numericUpDownTerms->TabIndex = 54;
			this->numericUpDownTerms->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(12, 9);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(32, 13);
			this->label7->TabIndex = 44;
			this->label7->Text = L"Code";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(214, 14);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(140, 13);
			this->label5->TabIndex = 43;
			this->label5->Text = L"Number of Students Enroled";
			// 
			// numericUpDownCode
			// 
			this->numericUpDownCode->Location = System::Drawing::Point(97, 7);
			this->numericUpDownCode->Name = L"numericUpDownCode";
			this->numericUpDownCode->Size = System::Drawing::Size(55, 20);
			this->numericUpDownCode->TabIndex = 53;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 115);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(25, 13);
			this->label4->TabIndex = 41;
			this->label4->Text = L"Fee";
			// 
			// comboBoxDepartment
			// 
			this->comboBoxDepartment->FormattingEnabled = true;
			this->comboBoxDepartment->Location = System::Drawing::Point(360, 32);
			this->comboBoxDepartment->Name = L"comboBoxDepartment";
			this->comboBoxDepartment->Size = System::Drawing::Size(81, 21);
			this->comboBoxDepartment->TabIndex = 49;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 89);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(51, 13);
			this->label3->TabIndex = 39;
			this->label3->Text = L"Instructor";
			// 
			// textBoxDescription
			// 
			this->textBoxDescription->Location = System::Drawing::Point(359, 59);
			this->textBoxDescription->Multiline = true;
			this->textBoxDescription->Name = L"textBoxDescription";
			this->textBoxDescription->Size = System::Drawing::Size(159, 43);
			this->textBoxDescription->TabIndex = 51;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 61);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(36, 13);
			this->label2->TabIndex = 38;
			this->label2->Text = L"Terms";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(212, 120);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(87, 13);
			this->label6->TabIndex = 36;
			this->label6->Text = L"* Required fields.";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(83, 13);
			this->label1->TabIndex = 37;
			this->label1->Text = L"Name of Course";
			// 
			// buttonSubmit
			// 
			this->buttonSubmit->Location = System::Drawing::Point(305, 115);
			this->buttonSubmit->Name = L"buttonSubmit";
			this->buttonSubmit->Size = System::Drawing::Size(98, 23);
			this->buttonSubmit->TabIndex = 52;
			this->buttonSubmit->Text = L"Add Course";
			this->buttonSubmit->UseVisualStyleBackColor = true;
			// 
			// numericUpDownNumberOfStudentsEnroled
			// 
			this->numericUpDownNumberOfStudentsEnroled->Location = System::Drawing::Point(360, 7);
			this->numericUpDownNumberOfStudentsEnroled->Name = L"numericUpDownNumberOfStudentsEnroled";
			this->numericUpDownNumberOfStudentsEnroled->Size = System::Drawing::Size(81, 20);
			this->numericUpDownNumberOfStudentsEnroled->TabIndex = 47;
			// 
			// numericUpDownFee
			// 
			this->numericUpDownFee->Location = System::Drawing::Point(97, 113);
			this->numericUpDownFee->Name = L"numericUpDownFee";
			this->numericUpDownFee->Size = System::Drawing::Size(55, 20);
			this->numericUpDownFee->TabIndex = 45;
			// 
			// textBoxInstructor
			// 
			this->textBoxInstructor->Location = System::Drawing::Point(97, 86);
			this->textBoxInstructor->Name = L"textBoxInstructor";
			this->textBoxInstructor->Size = System::Drawing::Size(55, 20);
			this->textBoxInstructor->TabIndex = 42;
			// 
			// textBoxName
			// 
			this->textBoxName->Location = System::Drawing::Point(97, 32);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(101, 20);
			this->textBoxName->TabIndex = 40;
			// 
			// splitContainer4
			// 
			this->splitContainer4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer4->FixedPanel = System::Windows::Forms::FixedPanel::Panel2;
			this->splitContainer4->IsSplitterFixed = true;
			this->splitContainer4->Location = System::Drawing::Point(0, 0);
			this->splitContainer4->Name = L"splitContainer4";
			this->splitContainer4->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer4.Panel1
			// 
			this->splitContainer4->Panel1->Controls->Add(this->dataGridViewCourses);
			// 
			// splitContainer4.Panel2
			// 
			this->splitContainer4->Panel2->Controls->Add(this->buttonPrint);
			this->splitContainer4->Panel2->Controls->Add(this->buttonReload);
			this->splitContainer4->Panel2->Controls->Add(this->buttonSave);
			this->splitContainer4->Size = System::Drawing::Size(570, 179);
			this->splitContainer4->SplitterDistance = 94;
			this->splitContainer4->SplitterWidth = 10;
			this->splitContainer4->TabIndex = 0;
			// 
			// dataGridViewCourses
			// 
			this->dataGridViewCourses->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewCourses->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridViewCourses->Location = System::Drawing::Point(0, 0);
			this->dataGridViewCourses->Name = L"dataGridViewCourses";
			this->dataGridViewCourses->Size = System::Drawing::Size(570, 94);
			this->dataGridViewCourses->TabIndex = 11;
			// 
			// buttonPrint
			// 
			this->buttonPrint->Location = System::Drawing::Point(314, 7);
			this->buttonPrint->Name = L"buttonPrint";
			this->buttonPrint->Size = System::Drawing::Size(75, 23);
			this->buttonPrint->TabIndex = 2;
			this->buttonPrint->Text = L"Print";
			this->buttonPrint->UseVisualStyleBackColor = true;
			// 
			// buttonReload
			// 
			this->buttonReload->Location = System::Drawing::Point(476, 7);
			this->buttonReload->Name = L"buttonReload";
			this->buttonReload->Size = System::Drawing::Size(75, 23);
			this->buttonReload->TabIndex = 1;
			this->buttonReload->Text = L"Reload";
			this->buttonReload->UseVisualStyleBackColor = true;
			this->buttonReload->Click += gcnew System::EventHandler(this, &Courses::buttonReload_Click);
			// 
			// buttonSave
			// 
			this->buttonSave->Location = System::Drawing::Point(395, 7);
			this->buttonSave->Name = L"buttonSave";
			this->buttonSave->Size = System::Drawing::Size(75, 23);
			this->buttonSave->TabIndex = 0;
			this->buttonSave->Text = L"Save";
			this->buttonSave->UseVisualStyleBackColor = true;
			this->buttonSave->Click += gcnew System::EventHandler(this, &Courses::buttonSave_Click);
			// 
			// statusStrip
			// 
			this->statusStrip->Location = System::Drawing::Point(0, 458);
			this->statusStrip->Name = L"statusStrip";
			this->statusStrip->Size = System::Drawing::Size(570, 22);
			this->statusStrip->TabIndex = 1;
			this->statusStrip->Text = L"statusStrip1";
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
			this->printDocument->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &Courses::printDocument_PrintPage);
			// 
			// Courses
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(570, 480);
			this->Controls->Add(this->statusStrip);
			this->Controls->Add(this->splitContainer1);
			this->Name = L"Courses";
			this->Text = L"Courses";
			this->Load += gcnew System::EventHandler(this, &Courses::Courses_Load);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel1->PerformLayout();
			this->splitContainer1->Panel2->ResumeLayout(false);
			this->splitContainer1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxLogo))->EndInit();
			this->splitContainer2->Panel1->ResumeLayout(false);
			this->splitContainer2->Panel1->PerformLayout();
			this->splitContainer2->Panel2->ResumeLayout(false);
			this->splitContainer2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDownHours))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDownTerms))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDownCode))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDownNumberOfStudentsEnroled))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDownFee))->EndInit();
			this->splitContainer4->Panel1->ResumeLayout(false);
			this->splitContainer4->Panel2->ResumeLayout(false);
			this->splitContainer4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridViewCourses))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		 private: System::Void Courses_Load(System::Object^  sender, System::EventArgs^  e)
		 {
			 try
			 {
				dataAccessClass->FillDataSet( "Course" );
				dataGridViewCourses->DataSource = dataAccessClass->dataSet->Tables[ "Course" ];

				System::Data::DataRow^ dataRow;
				dataAccessClass1->FillDataSet( "Departments" );
				for( int i=0; i < dataAccessClass1->dataSet->Tables["Departments"]->Rows->Count ; i++ )
				{
					dataRow = dataAccessClass1->GetRow( "Departments", i );
					if( dataRow != nullptr )
					{
						comboBoxDepartment->Items->Add( dataRow->ItemArray[0]->ToString() );
					}
				}
				if( comboBoxDepartment->Items->Count > 0 )
				{
					comboBoxDepartment->Text = comboBoxDepartment->Items[0]->ToString();
				}

			 }
			 catch( System::Exception^ e )
			 {
				 using namespace System::Windows::Forms;
				 MessageBox::Show( e->Message, "Error", MessageBoxButtons::OK, 
						           MessageBoxIcon::Exclamation );
			 }
		 }

		 private: System::Void buttonSubmit_Click(System::Object^  sender, System::EventArgs^  e)
		 {
		    try
			{
				System::Exception^ ex;
				System::Data::DataRow^ dataRow = dataAccessClass->dataSet->Tables[ "Course" ]->NewRow();
				if( textBoxName->Text->Length == 0 )
				{
					ex = gcnew System::Exception( "Name is a required field" );
					throw ex;
				}
				dataRow["Code"]              = dataAccessClass->dataSet->Tables["Course"]->Rows->Count+1;
				dataRow["Name"]              = textBoxName->Text;
				dataRow["Terms"]             = numericUpDownTerms->Value;
				dataRow["Instructor"]        = textBoxInstructor->Text;
				dataRow["Fee"]               = numericUpDownFee->Value;
				dataRow["Students_Enrolled"] = numericUpDownNumberOfStudentsEnroled->Value;
				dataRow["Department"]        = comboBoxDepartment->Text;
				dataRow["Description"]       = textBoxDescription->Text;
				dataRow["Hours"]             = numericUpDownHours->Value;
				dataAccessClass->dataSet->Tables[ "Course" ]->Rows->Add( dataRow );
				dataAccessClass->Update( "Course" );
				dataAccessClass->dataSet->AcceptChanges();
			}
			catch( System::Exception^ e )
			{
				 using namespace System::Windows::Forms;
				 MessageBox::Show( e->Message, "Error", MessageBoxButtons::OK, 
						           MessageBoxIcon::Exclamation );
			}
		 }
		 private: System::Void buttonRemove_Click(System::Object^  sender, System::EventArgs^  e)
		 {
		 }
		 private: System::Void buttonSave_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			try
			{
			   dataAccessClass->Update( "Course" );
			   dataAccessClass->dataSet->AcceptChanges();
			   dataAccessClass->FillDataSet( "Course" );
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
		       dataAccessClass->FillDataSet( "Course" );
		       dataGridViewCourses->DataSource = dataAccessClass->dataSet->Tables[ "Course" ];
			}
			catch( System::Exception^ e )
			{
				using namespace System::Windows::Forms;
				MessageBox::Show( e->Message, "Error: Program Exiting because...", MessageBoxButtons::OK, 
						          MessageBoxIcon::Exclamation );
			}
		 }
		 private: System::Void printDocument_PrintPage(System::Object^  sender, System::Drawing::Printing::PrintPageEventArgs^  e)
		 {
	        bool more = dataGridViewPrinter->DrawDataGridView( e->Graphics );
			if( more == true )
			{
			   e->HasMorePages = true;
			}
		 }
};
}
