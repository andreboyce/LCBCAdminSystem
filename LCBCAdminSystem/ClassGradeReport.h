#pragma once

#include "print.h"
#include "ComboBoxUtility.h"
#include "DataAccessClass.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace LCBCAdminSystem {

	/// <summary>
	/// Summary for ClassGradeReport
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class ClassGradeReport : public System::Windows::Forms::Form
	{
	public:
		ClassGradeReport(void)
		{
			InitializeComponent();
            dataAccessClass  = gcnew LCBCAdminSystem::DataAccessClass();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ClassGradeReport()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Collections::Generic::List<System::String^>^ firstNameList, ^lastNameList;
	private: LCBCAdminSystem::DataAccessClass^ dataAccessClass;
	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	protected: 
	private: System::Windows::Forms::PictureBox^  pictureBoxLogo;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::SplitContainer^  splitContainer2;
	private: System::Windows::Forms::CheckBox^  checkBoxShortTerm;

	private: System::Windows::Forms::CheckBox^  checkBoxTerm2;

	private: System::Windows::Forms::CheckBox^  checkBoxTerm1;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker;


	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::TextBox^  textBoxParentOrGuardianAddress;
	private: System::Windows::Forms::TextBox^  textBoxTeachersComment;
	private: System::Windows::Forms::TextBox^  textBoxGradePoints;



	private: System::Windows::Forms::TextBox^  textBoxGrade;
	private: System::Windows::Forms::TextBox^  textBoxSemesterHours;


	private: System::Windows::Forms::TextBox^  textBoxParentOrGuardianName;
	private: System::Windows::Forms::TextBox^  textBoxAudit;


	private: System::Windows::Forms::TextBox^  textBoxCredit;

	private: System::Windows::Forms::TextBox^  textBoxAdvisorName;
	private: System::Windows::Forms::TextBox^  textBoxTitleOfCourse;


	private: System::Windows::Forms::TextBox^  textBoxTeachersName;

	private: System::Windows::Forms::TextBox^  textBoxAddress;



	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::ComboBox^  comboBoxName;
	private: System::Windows::Forms::ComboBox^  comboBoxCourse;


	private: System::Windows::Forms::Button^  buttonPrint;
	private: System::Drawing::Printing::PrintDocument^  printDocument;

	private: System::Windows::Forms::PrintPreviewDialog^  printPreviewDialog;
	private: System::Windows::Forms::Button^  buttonSave;
	private: System::Windows::Forms::StatusStrip^  statusStrip;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ClassGradeReport::typeid));
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->pictureBoxLogo = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->splitContainer2 = (gcnew System::Windows::Forms::SplitContainer());
			this->comboBoxCourse = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxName = (gcnew System::Windows::Forms::ComboBox());
			this->checkBoxShortTerm = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxTerm2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxTerm1 = (gcnew System::Windows::Forms::CheckBox());
			this->dateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBoxParentOrGuardianAddress = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTeachersComment = (gcnew System::Windows::Forms::TextBox());
			this->textBoxGradePoints = (gcnew System::Windows::Forms::TextBox());
			this->textBoxGrade = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSemesterHours = (gcnew System::Windows::Forms::TextBox());
			this->textBoxParentOrGuardianName = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAudit = (gcnew System::Windows::Forms::TextBox());
			this->textBoxCredit = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAdvisorName = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTitleOfCourse = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTeachersName = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAddress = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->buttonSave = (gcnew System::Windows::Forms::Button());
			this->buttonPrint = (gcnew System::Windows::Forms::Button());
			this->printDocument = (gcnew System::Drawing::Printing::PrintDocument());
			this->printPreviewDialog = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->statusStrip = (gcnew System::Windows::Forms::StatusStrip());
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxLogo))->BeginInit();
			this->splitContainer2->Panel1->SuspendLayout();
			this->splitContainer2->Panel2->SuspendLayout();
			this->splitContainer2->SuspendLayout();
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
			this->splitContainer1->Panel1->Controls->Add(this->label1);
			this->splitContainer1->Panel1->Controls->Add(this->label2);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->splitContainer2);
			this->splitContainer1->Size = System::Drawing::Size(684, 539);
			this->splitContainer1->SplitterDistance = 107;
			this->splitContainer1->SplitterWidth = 12;
			this->splitContainer1->TabIndex = 0;
			// 
			// pictureBoxLogo
			// 
			this->pictureBoxLogo->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBoxLogo.Image")));
			this->pictureBoxLogo->Location = System::Drawing::Point(247, 6);
			this->pictureBoxLogo->Name = L"pictureBoxLogo";
			this->pictureBoxLogo->Size = System::Drawing::Size(86, 98);
			this->pictureBoxLogo->TabIndex = 98;
			this->pictureBoxLogo->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(219, 15);
			this->label1->TabIndex = 60;
			this->label1->Text = L"LOWER CARIBBEAN BIBLE COLLEGE";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(51, 39);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(141, 15);
			this->label2->TabIndex = 61;
			this->label2->Text = L"CLASS GRADE REPORT";
			// 
			// splitContainer2
			// 
			this->splitContainer2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer2->FixedPanel = System::Windows::Forms::FixedPanel::Panel2;
			this->splitContainer2->IsSplitterFixed = true;
			this->splitContainer2->Location = System::Drawing::Point(0, 0);
			this->splitContainer2->Name = L"splitContainer2";
			this->splitContainer2->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer2.Panel1
			// 
			this->splitContainer2->Panel1->Controls->Add(this->comboBoxCourse);
			this->splitContainer2->Panel1->Controls->Add(this->comboBoxName);
			this->splitContainer2->Panel1->Controls->Add(this->checkBoxShortTerm);
			this->splitContainer2->Panel1->Controls->Add(this->checkBoxTerm2);
			this->splitContainer2->Panel1->Controls->Add(this->checkBoxTerm1);
			this->splitContainer2->Panel1->Controls->Add(this->dateTimePicker);
			this->splitContainer2->Panel1->Controls->Add(this->label23);
			this->splitContainer2->Panel1->Controls->Add(this->textBoxParentOrGuardianAddress);
			this->splitContainer2->Panel1->Controls->Add(this->textBoxTeachersComment);
			this->splitContainer2->Panel1->Controls->Add(this->textBoxGradePoints);
			this->splitContainer2->Panel1->Controls->Add(this->textBoxGrade);
			this->splitContainer2->Panel1->Controls->Add(this->textBoxSemesterHours);
			this->splitContainer2->Panel1->Controls->Add(this->textBoxParentOrGuardianName);
			this->splitContainer2->Panel1->Controls->Add(this->textBoxAudit);
			this->splitContainer2->Panel1->Controls->Add(this->textBoxCredit);
			this->splitContainer2->Panel1->Controls->Add(this->textBoxAdvisorName);
			this->splitContainer2->Panel1->Controls->Add(this->textBoxTitleOfCourse);
			this->splitContainer2->Panel1->Controls->Add(this->textBoxTeachersName);
			this->splitContainer2->Panel1->Controls->Add(this->textBoxAddress);
			this->splitContainer2->Panel1->Controls->Add(this->label19);
			this->splitContainer2->Panel1->Controls->Add(this->label18);
			this->splitContainer2->Panel1->Controls->Add(this->label17);
			this->splitContainer2->Panel1->Controls->Add(this->label16);
			this->splitContainer2->Panel1->Controls->Add(this->label15);
			this->splitContainer2->Panel1->Controls->Add(this->label14);
			this->splitContainer2->Panel1->Controls->Add(this->label13);
			this->splitContainer2->Panel1->Controls->Add(this->label12);
			this->splitContainer2->Panel1->Controls->Add(this->label11);
			this->splitContainer2->Panel1->Controls->Add(this->label10);
			this->splitContainer2->Panel1->Controls->Add(this->label9);
			this->splitContainer2->Panel1->Controls->Add(this->label8);
			this->splitContainer2->Panel1->Controls->Add(this->label7);
			this->splitContainer2->Panel1->Controls->Add(this->label6);
			this->splitContainer2->Panel1->Controls->Add(this->label5);
			this->splitContainer2->Panel1->Controls->Add(this->label4);
			this->splitContainer2->Panel1->Controls->Add(this->label3);
			// 
			// splitContainer2.Panel2
			// 
			this->splitContainer2->Panel2->Controls->Add(this->buttonSave);
			this->splitContainer2->Panel2->Controls->Add(this->buttonPrint);
			this->splitContainer2->Size = System::Drawing::Size(684, 420);
			this->splitContainer2->SplitterDistance = 352;
			this->splitContainer2->SplitterWidth = 12;
			this->splitContainer2->TabIndex = 0;
			// 
			// comboBoxCourse
			// 
			this->comboBoxCourse->FormattingEnabled = true;
			this->comboBoxCourse->Location = System::Drawing::Point(502, 8);
			this->comboBoxCourse->Name = L"comboBoxCourse";
			this->comboBoxCourse->Size = System::Drawing::Size(119, 23);
			this->comboBoxCourse->TabIndex = 99;
			// 
			// comboBoxName
			// 
			this->comboBoxName->FormattingEnabled = true;
			this->comboBoxName->Location = System::Drawing::Point(133, 8);
			this->comboBoxName->Name = L"comboBoxName";
			this->comboBoxName->Size = System::Drawing::Size(178, 23);
			this->comboBoxName->TabIndex = 98;
			this->comboBoxName->SelectedIndexChanged += gcnew System::EventHandler(this, &ClassGradeReport::comboBoxName_SelectedIndexChanged);
			// 
			// checkBoxShortTerm
			// 
			this->checkBoxShortTerm->AutoSize = true;
			this->checkBoxShortTerm->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->checkBoxShortTerm->Location = System::Drawing::Point(158, 324);
			this->checkBoxShortTerm->Name = L"checkBoxShortTerm";
			this->checkBoxShortTerm->Size = System::Drawing::Size(82, 19);
			this->checkBoxShortTerm->TabIndex = 97;
			this->checkBoxShortTerm->Text = L"ShortTerm";
			this->checkBoxShortTerm->UseVisualStyleBackColor = true;
			// 
			// checkBoxTerm2
			// 
			this->checkBoxTerm2->AutoSize = true;
			this->checkBoxTerm2->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->checkBoxTerm2->Location = System::Drawing::Point(82, 324);
			this->checkBoxTerm2->Name = L"checkBoxTerm2";
			this->checkBoxTerm2->Size = System::Drawing::Size(62, 19);
			this->checkBoxTerm2->TabIndex = 96;
			this->checkBoxTerm2->Text = L"Term 2";
			this->checkBoxTerm2->UseVisualStyleBackColor = true;
			// 
			// checkBoxTerm1
			// 
			this->checkBoxTerm1->AutoSize = true;
			this->checkBoxTerm1->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->checkBoxTerm1->Location = System::Drawing::Point(5, 324);
			this->checkBoxTerm1->Name = L"checkBoxTerm1";
			this->checkBoxTerm1->Size = System::Drawing::Size(62, 19);
			this->checkBoxTerm1->TabIndex = 95;
			this->checkBoxTerm1->Text = L"Term 1";
			this->checkBoxTerm1->UseVisualStyleBackColor = true;
			// 
			// dateTimePicker
			// 
			this->dateTimePicker->Location = System::Drawing::Point(290, 320);
			this->dateTimePicker->Name = L"dateTimePicker";
			this->dateTimePicker->Size = System::Drawing::Size(216, 22);
			this->dateTimePicker->TabIndex = 94;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(248, 326);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(32, 15);
			this->label23->TabIndex = 93;
			this->label23->Text = L"Date";
			// 
			// textBoxParentOrGuardianAddress
			// 
			this->textBoxParentOrGuardianAddress->Location = System::Drawing::Point(16, 175);
			this->textBoxParentOrGuardianAddress->Multiline = true;
			this->textBoxParentOrGuardianAddress->Name = L"textBoxParentOrGuardianAddress";
			this->textBoxParentOrGuardianAddress->Size = System::Drawing::Size(295, 44);
			this->textBoxParentOrGuardianAddress->TabIndex = 92;
			// 
			// textBoxTeachersComment
			// 
			this->textBoxTeachersComment->Location = System::Drawing::Point(502, 248);
			this->textBoxTeachersComment->Multiline = true;
			this->textBoxTeachersComment->Name = L"textBoxTeachersComment";
			this->textBoxTeachersComment->Size = System::Drawing::Size(166, 39);
			this->textBoxTeachersComment->TabIndex = 91;
			// 
			// textBoxGradePoints
			// 
			this->textBoxGradePoints->Location = System::Drawing::Point(640, 125);
			this->textBoxGradePoints->Name = L"textBoxGradePoints";
			this->textBoxGradePoints->Size = System::Drawing::Size(30, 22);
			this->textBoxGradePoints->TabIndex = 90;
			// 
			// textBoxGrade
			// 
			this->textBoxGrade->Location = System::Drawing::Point(536, 125);
			this->textBoxGrade->Name = L"textBoxGrade";
			this->textBoxGrade->Size = System::Drawing::Size(30, 22);
			this->textBoxGrade->TabIndex = 89;
			// 
			// textBoxSemesterHours
			// 
			this->textBoxSemesterHours->Location = System::Drawing::Point(438, 125);
			this->textBoxSemesterHours->Name = L"textBoxSemesterHours";
			this->textBoxSemesterHours->Size = System::Drawing::Size(43, 22);
			this->textBoxSemesterHours->TabIndex = 88;
			// 
			// textBoxParentOrGuardianName
			// 
			this->textBoxParentOrGuardianName->Location = System::Drawing::Point(16, 142);
			this->textBoxParentOrGuardianName->Multiline = true;
			this->textBoxParentOrGuardianName->Name = L"textBoxParentOrGuardianName";
			this->textBoxParentOrGuardianName->Size = System::Drawing::Size(295, 22);
			this->textBoxParentOrGuardianName->TabIndex = 87;
			// 
			// textBoxAudit
			// 
			this->textBoxAudit->Location = System::Drawing::Point(541, 294);
			this->textBoxAudit->Name = L"textBoxAudit";
			this->textBoxAudit->Size = System::Drawing::Size(127, 22);
			this->textBoxAudit->TabIndex = 86;
			// 
			// textBoxCredit
			// 
			this->textBoxCredit->Location = System::Drawing::Point(394, 294);
			this->textBoxCredit->Name = L"textBoxCredit";
			this->textBoxCredit->Size = System::Drawing::Size(58, 22);
			this->textBoxCredit->TabIndex = 85;
			// 
			// textBoxAdvisorName
			// 
			this->textBoxAdvisorName->Location = System::Drawing::Point(133, 235);
			this->textBoxAdvisorName->Name = L"textBoxAdvisorName";
			this->textBoxAdvisorName->Size = System::Drawing::Size(178, 22);
			this->textBoxAdvisorName->TabIndex = 84;
			// 
			// textBoxTitleOfCourse
			// 
			this->textBoxTitleOfCourse->Location = System::Drawing::Point(502, 90);
			this->textBoxTitleOfCourse->Name = L"textBoxTitleOfCourse";
			this->textBoxTitleOfCourse->Size = System::Drawing::Size(170, 22);
			this->textBoxTitleOfCourse->TabIndex = 83;
			// 
			// textBoxTeachersName
			// 
			this->textBoxTeachersName->Location = System::Drawing::Point(502, 44);
			this->textBoxTeachersName->Name = L"textBoxTeachersName";
			this->textBoxTeachersName->Size = System::Drawing::Size(170, 22);
			this->textBoxTeachersName->TabIndex = 82;
			// 
			// textBoxAddress
			// 
			this->textBoxAddress->Location = System::Drawing::Point(133, 44);
			this->textBoxAddress->Name = L"textBoxAddress";
			this->textBoxAddress->Size = System::Drawing::Size(178, 22);
			this->textBoxAddress->TabIndex = 80;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(498, 298);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(38, 15);
			this->label19->TabIndex = 78;
			this->label19->Text = L"Audit";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(337, 298);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(39, 15);
			this->label18->TabIndex = 77;
			this->label18->Text = L"Credit";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(340, 249);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(118, 15);
			this->label17->TabIndex = 76;
			this->label17->Text = L"Teachers Comments:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(12, 239);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(89, 15);
			this->label16->TabIndex = 75;
			this->label16->Text = L"Advisers Name";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(12, 107);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(162, 15);
			this->label15->TabIndex = 74;
			this->label15->Text = L"( If single and living at home)";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(12, 92);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(228, 15);
			this->label14->TabIndex = 73;
			this->label14->Text = L"Name and Address of Parent or Guardian ";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(340, 210);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(210, 15);
			this->label13->TabIndex = 72;
			this->label13->Text = L"W - Withdrawn X Absence from Exam";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(340, 195);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(227, 15);
			this->label12->TabIndex = 71;
			this->label12->Text = L" E - Conditional, F - Failure, I - Incomplete";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(340, 170);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(257, 15);
			this->label11->TabIndex = 70;
			this->label11->Text = L"GRADING SYSTEM: A B C D - Passing Grades";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(573, 128);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(58, 15);
			this->label10->TabIndex = 69;
			this->label10->Text = L"Grade Pts";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(493, 128);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(38, 15);
			this->label9->TabIndex = 68;
			this->label9->Text = L"Grade";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(340, 128);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(91, 15);
			this->label8->TabIndex = 67;
			this->label8->Text = L"Semester Hours";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(344, 98);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(86, 15);
			this->label7->TabIndex = 66;
			this->label7->Text = L"Title of Course";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(340, 47);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(89, 15);
			this->label6->TabIndex = 65;
			this->label6->Text = L"Teachers Name";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(337, 12);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(132, 15);
			this->label5->TabIndex = 64;
			this->label5->Text = L"Department Course No.";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 47);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(53, 15);
			this->label4->TabIndex = 63;
			this->label4->Text = L"Address";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 12);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(90, 15);
			this->label3->TabIndex = 62;
			this->label3->Text = L"Student\'s Name";
			// 
			// buttonSave
			// 
			this->buttonSave->Enabled = false;
			this->buttonSave->Location = System::Drawing::Point(499, 3);
			this->buttonSave->Name = L"buttonSave";
			this->buttonSave->Size = System::Drawing::Size(87, 27);
			this->buttonSave->TabIndex = 1;
			this->buttonSave->Text = L"Save";
			this->buttonSave->UseVisualStyleBackColor = true;
			this->buttonSave->Click += gcnew System::EventHandler(this, &ClassGradeReport::buttonSave_Click);
			// 
			// buttonPrint
			// 
			this->buttonPrint->Location = System::Drawing::Point(594, 3);
			this->buttonPrint->Name = L"buttonPrint";
			this->buttonPrint->Size = System::Drawing::Size(87, 27);
			this->buttonPrint->TabIndex = 0;
			this->buttonPrint->Text = L"Print";
			this->buttonPrint->UseVisualStyleBackColor = true;
			this->buttonPrint->Click += gcnew System::EventHandler(this, &ClassGradeReport::buttonPrint_Click);
			// 
			// printDocument
			// 
			this->printDocument->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &ClassGradeReport::printDocument_PrintPage);
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
			// statusStrip
			// 
			this->statusStrip->Location = System::Drawing::Point(0, 517);
			this->statusStrip->Name = L"statusStrip";
			this->statusStrip->Size = System::Drawing::Size(684, 22);
			this->statusStrip->TabIndex = 1;
			this->statusStrip->Text = L"statusStrip1";
			// 
			// ClassGradeReport
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(684, 539);
			this->Controls->Add(this->statusStrip);
			this->Controls->Add(this->splitContainer1);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Name = L"ClassGradeReport";
			this->Text = L"ClassGradeReport";
			this->Load += gcnew System::EventHandler(this, &ClassGradeReport::ClassGradeReport_Load);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel1->PerformLayout();
			this->splitContainer1->Panel2->ResumeLayout(false);
			this->splitContainer1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxLogo))->EndInit();
			this->splitContainer2->Panel1->ResumeLayout(false);
			this->splitContainer2->Panel1->PerformLayout();
			this->splitContainer2->Panel2->ResumeLayout(false);
			this->splitContainer2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonPrint_Click(System::Object^  sender, System::EventArgs^  e)
    {
		printPreviewDialog->ShowDialog();
	}
	private: System::Void ClassGradeReport_Load(System::Object^  sender, System::EventArgs^  e)
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
	   try
	   {
	      System::Data::DataRow^ datarow = dataAccessClass->GetRow( "Student", comboBoxName->SelectedIndex );
	      textBoxAddress->Text     = datarow[ "Address" ]->ToString();
	      textBoxAdvisorName->Text = datarow[ "Advisor" ]->ToString();
		  textBoxParentOrGuardianName->Text    = datarow[ "GuardiansName" ]->ToString();
		  textBoxParentOrGuardianAddress->Text = datarow[ "GuardiansAddress" ]->ToString();		  
	   }
	   catch( System::Exception^ e )
	   {
		  using namespace System::Windows::Forms;
          MessageBox::Show( e->Message, "Error", MessageBoxButtons::OK, 
		                    MessageBoxIcon::Exclamation );
	   }
	}
	private: System::Void buttonSave_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	private: System::Void printDocument_PrintPage( System::Object^  sender, System::Drawing::Printing::PrintPageEventArgs^  e )
	{
		//printPreviewDialog
		float starting_y_position = printHeader( e->Graphics, this->Font );
		printBody( e->Graphics, starting_y_position );
	}
	// Print the body of the class grade report
	void printBody( System::Drawing::Graphics^ graphics, float starting_y_position )
	{
		float height = starting_y_position;
		graphics->MeasureString( "Students Name:", this->Font );
		System::Drawing::SizeF^ stringSize = gcnew System::Drawing::SizeF();
		stringSize = graphics->MeasureString( "Students Name:", this->Font );
		graphics->DrawString( "Students Name:",   this->Font, System::Drawing::Brushes::Black, System::Drawing::PointF( (float)0, starting_y_position ) );
		graphics->DrawString( comboBoxName->Text, this->Font, System::Drawing::Brushes::Black, System::Drawing::PointF( (float)stringSize->Width+1, starting_y_position ) );

		stringSize = graphics->MeasureString( "Students Address:", this->Font );
		height = starting_y_position + stringSize->Height;
		graphics->DrawString( "Students Address:", this->Font, System::Drawing::Brushes::Black, System::Drawing::PointF( (float)0, height ) );
		graphics->DrawString( textBoxAddress->Text, this->Font, System::Drawing::Brushes::Black, System::Drawing::PointF( (float)stringSize->Width+1, height ) );
		
		stringSize = graphics->MeasureString( "Parent/Guardians Name:", this->Font );
		height += stringSize->Height;
		graphics->DrawString( "Parent/Guardians Name:", this->Font, System::Drawing::Brushes::Black, System::Drawing::PointF( (float)0, height ) );
		graphics->DrawString( textBoxParentOrGuardianName->Text, this->Font, System::Drawing::Brushes::Black, System::Drawing::PointF( (float)stringSize->Width+1, height ) );

		stringSize = graphics->MeasureString( "Parent/Guardians Address:", this->Font );
		height += stringSize->Height;
		graphics->DrawString( "Parent/Guardians Address:", this->Font, System::Drawing::Brushes::Black, System::Drawing::PointF( (float)0, height ) );
		graphics->DrawString( textBoxParentOrGuardianAddress->Text, this->Font, System::Drawing::Brushes::Black, System::Drawing::PointF( (float)stringSize->Width+1, height ) );

		stringSize = graphics->MeasureString( "Advisors Name:", this->Font );
		height += stringSize->Height;
		graphics->DrawString( "Advisors Name:", this->Font, System::Drawing::Brushes::Black, System::Drawing::PointF( (float)0, height ) );
		graphics->DrawString( textBoxAdvisorName->Text, this->Font, System::Drawing::Brushes::Black, System::Drawing::PointF( (float)stringSize->Width+1, height ) );

		stringSize = graphics->MeasureString( "Department Course No.:", this->Font );
		height += stringSize->Height;
		graphics->DrawString( "Department Course No.:", this->Font, System::Drawing::Brushes::Black, System::Drawing::PointF( (float)0, height ) );
		graphics->DrawString( comboBoxCourse->Text, this->Font, System::Drawing::Brushes::Black, System::Drawing::PointF( (float)stringSize->Width+1, height ) );

		stringSize = graphics->MeasureString( "Teachers Name:", this->Font );
		height += stringSize->Height;
		graphics->DrawString( "Teachers Name:", this->Font, System::Drawing::Brushes::Black, System::Drawing::PointF( (float)0, height ) );
		graphics->DrawString( comboBoxCourse->Text, this->Font, System::Drawing::Brushes::Black, System::Drawing::PointF( (float)stringSize->Width+1, height ) );

		stringSize = graphics->MeasureString( "Teachers Comments:", this->Font );
		height += stringSize->Height;
		graphics->DrawString( "Teachers Comments:", this->Font, System::Drawing::Brushes::Black, System::Drawing::PointF( (float)0, height ) );
		graphics->DrawString( textBoxTeachersComment->Text, this->Font, System::Drawing::Brushes::Black, System::Drawing::PointF( (float)stringSize->Width+1, height ) );

		stringSize = graphics->MeasureString( "Title of Course:", this->Font );
		height += stringSize->Height;
		graphics->DrawString( "Title of Course:", this->Font, System::Drawing::Brushes::Black, System::Drawing::PointF( (float)0, height ) );
		graphics->DrawString( textBoxTeachersComment->Text, this->Font, System::Drawing::Brushes::Black, System::Drawing::PointF( (float)stringSize->Width+1, height ) );

		stringSize = graphics->MeasureString( "Semester Hours:", this->Font );
		height += stringSize->Height;
		graphics->DrawString( "Semester Hours:", this->Font, System::Drawing::Brushes::Black, System::Drawing::PointF( (float)0, height ) );
		graphics->DrawString( textBoxSemesterHours->Text, this->Font, System::Drawing::Brushes::Black, System::Drawing::PointF( (float)stringSize->Width+1, height ) );

		stringSize = graphics->MeasureString( "Grade:", this->Font );
		height += stringSize->Height;
		graphics->DrawString( "Grade:", this->Font, System::Drawing::Brushes::Black, System::Drawing::PointF( (float)0, height ) );
		graphics->DrawString( textBoxGrade->Text, this->Font, System::Drawing::Brushes::Black, System::Drawing::PointF( (float)stringSize->Width+1, height ) );

		stringSize = graphics->MeasureString( "Grade Points:", this->Font );
		height += stringSize->Height;
		graphics->DrawString( "Grade Points:", this->Font, System::Drawing::Brushes::Black, System::Drawing::PointF( (float)0, height ) );
		graphics->DrawString( textBoxGradePoints->Text, this->Font, System::Drawing::Brushes::Black, System::Drawing::PointF( (float)stringSize->Width+1, height ) );

		stringSize = graphics->MeasureString( "Credit:", this->Font );
		height += stringSize->Height;
		graphics->DrawString( "Credit:", this->Font, System::Drawing::Brushes::Black, System::Drawing::PointF( (float)0, height ) );
		graphics->DrawString( textBoxCredit->Text, this->Font, System::Drawing::Brushes::Black, System::Drawing::PointF( (float)stringSize->Width+1, height ) );

		stringSize = graphics->MeasureString( "Audit:", this->Font );
		height += stringSize->Height;
		graphics->DrawString( "Audit:", this->Font, System::Drawing::Brushes::Black, System::Drawing::PointF( (float)0, height ) );
		graphics->DrawString( textBoxCredit->Text, this->Font, System::Drawing::Brushes::Black, System::Drawing::PointF( (float)stringSize->Width+1, height ) );

		stringSize = graphics->MeasureString( "Term 1:", this->Font );
		height += stringSize->Height;
		graphics->DrawString( "Term 1:", this->Font, System::Drawing::Brushes::Black, System::Drawing::PointF( (float)0, height ) );
		graphics->DrawString( checkBoxTerm1->Text, this->Font, System::Drawing::Brushes::Black, System::Drawing::PointF( (float)stringSize->Width+1, height ) );

		stringSize = graphics->MeasureString( "Term 2:", this->Font );
		height += stringSize->Height;
		graphics->DrawString( "Term 2:", this->Font, System::Drawing::Brushes::Black, System::Drawing::PointF( (float)0, height ) );
		graphics->DrawString( checkBoxTerm1->Text, this->Font, System::Drawing::Brushes::Black, System::Drawing::PointF( (float)stringSize->Width+1, height ) );

		stringSize = graphics->MeasureString( "Short Term:", this->Font );
		height += stringSize->Height;
		graphics->DrawString( "Short Term:", this->Font, System::Drawing::Brushes::Black, System::Drawing::PointF( (float)0, height ) );
		graphics->DrawString( checkBoxShortTerm->Text, this->Font, System::Drawing::Brushes::Black, System::Drawing::PointF( (float)stringSize->Width+1, height ) );

		stringSize = graphics->MeasureString( "Short Term:", this->Font );
		height += stringSize->Height;
		graphics->DrawString( "Short Term:", this->Font, System::Drawing::Brushes::Black, System::Drawing::PointF( (float)0, height ) );
		graphics->DrawString( checkBoxShortTerm->Text, this->Font, System::Drawing::Brushes::Black, System::Drawing::PointF( (float)stringSize->Width+1, height ) );

		stringSize = graphics->MeasureString( "Date:", this->Font );
		height += stringSize->Height;
		graphics->DrawString( "Date:", this->Font, System::Drawing::Brushes::Black, System::Drawing::PointF( (float)0, height ) );
		graphics->DrawString( dateTimePicker->Text, this->Font, System::Drawing::Brushes::Black, System::Drawing::PointF( (float)stringSize->Width+1, height ) );
	}
};
}
