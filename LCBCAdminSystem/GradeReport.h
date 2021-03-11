#pragma once

#include "ComboBoxUtility.h"
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
	/// Summary for GradeReport
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class GradeReport : public System::Windows::Forms::Form
	{
	public:
		GradeReport(void)
		{
		   InitializeComponent();
           dataAccessClass  = gcnew LCBCAdminSystem::DataAccessClass();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~GradeReport()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Collections::Generic::List<System::String^>^ firstNameList, ^lastNameList;
	private: LCBCAdminSystem::DataAccessClass^ dataAccessClass;
	private: System::Windows::Forms::StatusStrip^  statusStrip;
	protected: 
	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	private: System::Windows::Forms::SplitContainer^  splitContainer2;























	private: System::Windows::Forms::PictureBox^  pictureBoxLogo;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::SplitContainer^  splitContainer3;
	private: System::Windows::Forms::SplitContainer^  splitContainer4;











	private: System::Windows::Forms::DataGridView^  dataGridView;





	private: System::Windows::Forms::ComboBox^  comboBoxName;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownYearEnd;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownYearStart;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBoxGradePoints;
	private: System::Windows::Forms::TextBox^  textBoxGradeAverage;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Button^  buttonPrint;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  CourseNumber;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  TitleOfCourse;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Grade;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Hours;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Points;
	private: System::Drawing::Printing::PrintDocument^  printDocument;
	private: System::Windows::Forms::PrintPreviewDialog^  printPreviewDialog;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker;












































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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(GradeReport::typeid));
			this->statusStrip = (gcnew System::Windows::Forms::StatusStrip());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBoxLogo = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->splitContainer2 = (gcnew System::Windows::Forms::SplitContainer());
			this->splitContainer3 = (gcnew System::Windows::Forms::SplitContainer());
			this->splitContainer4 = (gcnew System::Windows::Forms::SplitContainer());
			this->comboBoxName = (gcnew System::Windows::Forms::ComboBox());
			this->numericUpDownYearEnd = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownYearStart = (gcnew System::Windows::Forms::NumericUpDown());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->CourseNumber = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TitleOfCourse = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Grade = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Hours = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Points = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBoxGradePoints = (gcnew System::Windows::Forms::TextBox());
			this->textBoxGradeAverage = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->buttonPrint = (gcnew System::Windows::Forms::Button());
			this->printDocument = (gcnew System::Drawing::Printing::PrintDocument());
			this->printPreviewDialog = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxLogo))->BeginInit();
			this->splitContainer2->Panel1->SuspendLayout();
			this->splitContainer2->Panel2->SuspendLayout();
			this->splitContainer2->SuspendLayout();
			this->splitContainer3->Panel1->SuspendLayout();
			this->splitContainer3->Panel2->SuspendLayout();
			this->splitContainer3->SuspendLayout();
			this->splitContainer4->Panel1->SuspendLayout();
			this->splitContainer4->Panel2->SuspendLayout();
			this->splitContainer4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDownYearEnd))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDownYearStart))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// statusStrip
			// 
			this->statusStrip->Location = System::Drawing::Point(0, 706);
			this->statusStrip->Name = L"statusStrip";
			this->statusStrip->Padding = System::Windows::Forms::Padding(1, 0, 16, 0);
			this->statusStrip->Size = System::Drawing::Size(832, 22);
			this->statusStrip->TabIndex = 20;
			this->statusStrip->Text = L"statusStrip";
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
			this->splitContainer1->Panel1->Controls->Add(this->label1);
			this->splitContainer1->Panel1->Controls->Add(this->pictureBoxLogo);
			this->splitContainer1->Panel1->Controls->Add(this->label2);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->splitContainer2);
			this->splitContainer1->Size = System::Drawing::Size(832, 706);
			this->splitContainer1->SplitterDistance = 104;
			this->splitContainer1->SplitterWidth = 12;
			this->splitContainer1->TabIndex = 21;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(15, 10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(232, 15);
			this->label1->TabIndex = 20;
			this->label1->Text = L"LOWER CARIBBEAN BIBLE COLLEGE";
			// 
			// pictureBoxLogo
			// 
			this->pictureBoxLogo->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBoxLogo.Image")));
			this->pictureBoxLogo->Location = System::Drawing::Point(283, 0);
			this->pictureBoxLogo->Name = L"pictureBoxLogo";
			this->pictureBoxLogo->Size = System::Drawing::Size(82, 101);
			this->pictureBoxLogo->TabIndex = 38;
			this->pictureBoxLogo->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(75, 37);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(104, 15);
			this->label2->TabIndex = 21;
			this->label2->Text = L"GRADE REPORT";
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
			this->splitContainer2->Panel2->Controls->Add(this->dateTimePicker);
			this->splitContainer2->Panel2->Controls->Add(this->buttonPrint);
			this->splitContainer2->Size = System::Drawing::Size(832, 590);
			this->splitContainer2->SplitterDistance = 511;
			this->splitContainer2->SplitterWidth = 12;
			this->splitContainer2->TabIndex = 0;
			// 
			// splitContainer3
			// 
			this->splitContainer3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer3->FixedPanel = System::Windows::Forms::FixedPanel::Panel2;
			this->splitContainer3->Location = System::Drawing::Point(0, 0);
			this->splitContainer3->Name = L"splitContainer3";
			this->splitContainer3->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer3.Panel1
			// 
			this->splitContainer3->Panel1->Controls->Add(this->splitContainer4);
			// 
			// splitContainer3.Panel2
			// 
			this->splitContainer3->Panel2->Controls->Add(this->label12);
			this->splitContainer3->Panel2->Controls->Add(this->label5);
			this->splitContainer3->Panel2->Controls->Add(this->textBoxGradePoints);
			this->splitContainer3->Panel2->Controls->Add(this->textBoxGradeAverage);
			this->splitContainer3->Panel2->Controls->Add(this->label11);
			this->splitContainer3->Panel2->Controls->Add(this->label10);
			this->splitContainer3->Panel2->Controls->Add(this->label9);
			this->splitContainer3->Panel2->Controls->Add(this->label8);
			this->splitContainer3->Size = System::Drawing::Size(832, 511);
			this->splitContainer3->SplitterDistance = 352;
			this->splitContainer3->SplitterWidth = 7;
			this->splitContainer3->TabIndex = 0;
			// 
			// splitContainer4
			// 
			this->splitContainer4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer4->FixedPanel = System::Windows::Forms::FixedPanel::Panel1;
			this->splitContainer4->Location = System::Drawing::Point(0, 0);
			this->splitContainer4->Name = L"splitContainer4";
			this->splitContainer4->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer4.Panel1
			// 
			this->splitContainer4->Panel1->Controls->Add(this->comboBoxName);
			this->splitContainer4->Panel1->Controls->Add(this->numericUpDownYearEnd);
			this->splitContainer4->Panel1->Controls->Add(this->numericUpDownYearStart);
			this->splitContainer4->Panel1->Controls->Add(this->label7);
			this->splitContainer4->Panel1->Controls->Add(this->label6);
			this->splitContainer4->Panel1->Controls->Add(this->label4);
			this->splitContainer4->Panel1->Controls->Add(this->label3);
			// 
			// splitContainer4.Panel2
			// 
			this->splitContainer4->Panel2->Controls->Add(this->dataGridView);
			this->splitContainer4->Size = System::Drawing::Size(832, 352);
			this->splitContainer4->SplitterDistance = 76;
			this->splitContainer4->SplitterWidth = 7;
			this->splitContainer4->TabIndex = 0;
			// 
			// comboBoxName
			// 
			this->comboBoxName->FormattingEnabled = true;
			this->comboBoxName->Location = System::Drawing::Point(139, 15);
			this->comboBoxName->Name = L"comboBoxName";
			this->comboBoxName->Size = System::Drawing::Size(203, 23);
			this->comboBoxName->TabIndex = 1;
			this->comboBoxName->SelectedIndexChanged += gcnew System::EventHandler(this, &GradeReport::comboBoxName_SelectedIndexChanged);
			// 
			// numericUpDownYearEnd
			// 
			this->numericUpDownYearEnd->Location = System::Drawing::Point(149, 53);
			this->numericUpDownYearEnd->Name = L"numericUpDownYearEnd";
			this->numericUpDownYearEnd->Size = System::Drawing::Size(89, 22);
			this->numericUpDownYearEnd->TabIndex = 3;
			// 
			// numericUpDownYearStart
			// 
			this->numericUpDownYearStart->Location = System::Drawing::Point(23, 53);
			this->numericUpDownYearStart->Name = L"numericUpDownYearStart";
			this->numericUpDownYearStart->Size = System::Drawing::Size(83, 22);
			this->numericUpDownYearStart->TabIndex = 2;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(251, 55);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(282, 15);
			this->label7->TabIndex = 59;
			this->label7->Text = L"in the Lower Caribbean Bible College are as follows:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(124, 55);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(18, 15);
			this->label6->TabIndex = 58;
			this->label6->Text = L"to";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(374, 18);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(159, 15);
			this->label4->TabIndex = 57;
			this->label4->Text = L"that your grades for the year";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(20, 18);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(95, 15);
			this->label3->TabIndex = 56;
			this->label3->Text = L"This is to Inform";
			// 
			// dataGridView
			// 
			this->dataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {this->CourseNumber, 
				this->TitleOfCourse, this->Grade, this->Hours, this->Points});
			this->dataGridView->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView->Location = System::Drawing::Point(0, 0);
			this->dataGridView->Name = L"dataGridView";
			this->dataGridView->Size = System::Drawing::Size(832, 269);
			this->dataGridView->TabIndex = 4;
			// 
			// CourseNumber
			// 
			this->CourseNumber->HeaderText = L"Course Number";
			this->CourseNumber->Name = L"CourseNumber";
			// 
			// TitleOfCourse
			// 
			this->TitleOfCourse->HeaderText = L"Title Of Course";
			this->TitleOfCourse->Name = L"TitleOfCourse";
			this->TitleOfCourse->Width = 400;
			// 
			// Grade
			// 
			this->Grade->HeaderText = L"Grade";
			this->Grade->Name = L"Grade";
			this->Grade->Width = 60;
			// 
			// Hours
			// 
			this->Hours->HeaderText = L"Hours";
			this->Hours->Name = L"Hours";
			this->Hours->Width = 60;
			// 
			// Points
			// 
			this->Points->HeaderText = L"Points";
			this->Points->Name = L"Points";
			this->Points->Width = 60;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(14, 96);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(792, 15);
			this->label12->TabIndex = 62;
			this->label12->Text = L"If you are a full time student and your cumulative grade average is below C- or 4" 
				L" quality points you should consider yourself on probation this year.";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(687, 121);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(55, 15);
			this->label5->TabIndex = 61;
			this->label5->Text = L"Registrar";
			// 
			// textBoxGradePoints
			// 
			this->textBoxGradePoints->Location = System::Drawing::Point(346, 14);
			this->textBoxGradePoints->Name = L"textBoxGradePoints";
			this->textBoxGradePoints->Size = System::Drawing::Size(116, 22);
			this->textBoxGradePoints->TabIndex = 6;
			// 
			// textBoxGradeAverage
			// 
			this->textBoxGradeAverage->Location = System::Drawing::Point(251, 14);
			this->textBoxGradeAverage->Name = L"textBoxGradeAverage";
			this->textBoxGradeAverage->Size = System::Drawing::Size(74, 22);
			this->textBoxGradeAverage->TabIndex = 5;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(612, 61);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(137, 15);
			this->label11->TabIndex = 58;
			this->label11->Text = L"X - Absence from Exam. ";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(14, 61);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(569, 15);
			this->label10->TabIndex = 57;
			this->label10->Text = L"GRADING SYSTEM: A B C D - Passing Grades, E - Conditional, F - Failure, I - Incom" 
				L"plete, W - Withdrawn";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(483, 17);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(24, 15);
			this->label9->TabIndex = 56;
			this->label9->Text = L"Pts";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(14, 22);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(209, 15);
			this->label8->TabIndex = 55;
			this->label8->Text = L"Cumulative grade average for the year";
			// 
			// dateTimePicker
			// 
			this->dateTimePicker->Location = System::Drawing::Point(3, 14);
			this->dateTimePicker->Name = L"dateTimePicker";
			this->dateTimePicker->Size = System::Drawing::Size(200, 22);
			this->dateTimePicker->TabIndex = 7;
			// 
			// buttonPrint
			// 
			this->buttonPrint->Location = System::Drawing::Point(616, 3);
			this->buttonPrint->Name = L"buttonPrint";
			this->buttonPrint->Size = System::Drawing::Size(87, 33);
			this->buttonPrint->TabIndex = 8;
			this->buttonPrint->Text = L"Print";
			this->buttonPrint->UseVisualStyleBackColor = true;
			this->buttonPrint->Click += gcnew System::EventHandler(this, &GradeReport::buttonPrint_Click);
			// 
			// printDocument
			// 
			this->printDocument->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &GradeReport::printDocument_PrintPage);
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
			// GradeReport
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(832, 728);
			this->Controls->Add(this->splitContainer1);
			this->Controls->Add(this->statusStrip);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Name = L"GradeReport";
			this->Text = L"GradeReport";
			this->Load += gcnew System::EventHandler(this, &GradeReport::GradeReport_Load);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel1->PerformLayout();
			this->splitContainer1->Panel2->ResumeLayout(false);
			this->splitContainer1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxLogo))->EndInit();
			this->splitContainer2->Panel1->ResumeLayout(false);
			this->splitContainer2->Panel2->ResumeLayout(false);
			this->splitContainer2->ResumeLayout(false);
			this->splitContainer3->Panel1->ResumeLayout(false);
			this->splitContainer3->Panel2->ResumeLayout(false);
			this->splitContainer3->Panel2->PerformLayout();
			this->splitContainer3->ResumeLayout(false);
			this->splitContainer4->Panel1->ResumeLayout(false);
			this->splitContainer4->Panel1->PerformLayout();
			this->splitContainer4->Panel2->ResumeLayout(false);
			this->splitContainer4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDownYearEnd))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDownYearStart))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void GradeReport_Load(System::Object^  sender, System::EventArgs^  e)
    {
	   try
	   {
          dataAccessClass->FillDataSet( "Student" );
          this->firstNameList = dataAccessClass->GetColumnValues( "First_Name" );
          this->lastNameList  = dataAccessClass->GetColumnValues( "Last_Name" );
          // lastNameList and firstNameList should have the same size
          System::Collections::Generic::List<System::String^>^ list = gcnew System::Collections::Generic::List<System::String^>();
          for( int i=0; i<lastNameList->Count ; i++ )
          {
             list->Add( firstNameList[i] + " " + lastNameList[i] );
          }
          FillComboBox( comboBoxName, list, true );
	   }
	   catch( System::Exception^ e )
	   {
		  using namespace System::Windows::Forms;
          MessageBox::Show( e->Message, "Error", MessageBoxButtons::OK, 
		                    MessageBoxIcon::Exclamation );
	   }
    }
	private: System::Void comboBoxName_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e)
	{
	}
	void GetGrades()
	{
	}
	private: System::Void buttonPrint_Click(System::Object^  sender, System::EventArgs^  e)
	{
	   printPreviewDialog->ShowDialog();
	}
	private: System::Void printDocument_PrintPage(System::Object^  sender, System::Drawing::Printing::PrintPageEventArgs^  e)
	{
		System::Drawing::Font^         font = gcnew System::Drawing::Font( this->Font, System::Drawing::FontStyle::Regular );
        System::Drawing::Graphics^ graphics = e->Graphics;
		//DrawDataGridView( System::Drawing::PointF(), font, graphics, dataGridView );
	}
};
}
