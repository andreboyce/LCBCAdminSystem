#pragma once

#include "DataAccessClass.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace LCBCAdminSystem
{

	/// <summary>
	/// Summary for AddStudentDialog
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class AddStudentDialog : public System::Windows::Forms::Form
	{
	public:
		AddStudentDialog(void)
		{
			InitializeComponent();
			dataAccessClass          = gcnew LCBCAdminSystem::DataAccessClass();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddStudentDialog()
		{
			if (components)
			{
				delete components;
			}
		}
    private: LCBCAdminSystem::DataAccessClass^ dataAccessClass;
	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	private: System::Windows::Forms::SplitContainer^  splitContainer2;

	private: System::Windows::Forms::DateTimePicker^  dateTimePicker;
	private: System::Windows::Forms::PictureBox^  pictureBoxLogo;
	private: System::Windows::Forms::Label^  label42;
	private: System::Windows::Forms::Label^  label43;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::GroupBox^  groupBox14;
	private: System::Windows::Forms::TextBox^  textBoxChristianWork;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::GroupBox^  groupBox11;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: System::Windows::Forms::TextBox^  textBoxLastName;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBoxFirstName;
	private: System::Windows::Forms::Label^  label40;
	private: System::Windows::Forms::Label^  label48;
	private: System::Windows::Forms::TextBox^  textBoxMiddleNames;
	private: System::Windows::Forms::DateTimePicker^  dateTimePickerApplicationDate;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBoxAddress;
	private: System::Windows::Forms::ComboBox^  comboBoxSex;
	private: System::Windows::Forms::DateTimePicker^  dateTimePickerDateOfBirth;
	private: System::Windows::Forms::TextBox^  textBoxPlaceOfBirth;
	private: System::Windows::Forms::GroupBox^  groupBox12;
	private: System::Windows::Forms::CheckBox^  checkBoxBaptised;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::DateTimePicker^  dateTimePickerDateOfBaptism;
	private: System::Windows::Forms::Button^  buttonNextPage;
	private: System::Windows::Forms::GroupBox^  groupBox10;
	private: System::Windows::Forms::TextBox^  textBoxEmployer2Name;
	private: System::Windows::Forms::TextBox^  textBoxEmployer2Address;
	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::Label^  label53;
	private: System::Windows::Forms::GroupBox^  groupBox9;
	private: System::Windows::Forms::TextBox^  textBoxElder2Name;
	private: System::Windows::Forms::TextBox^  textBoxElder2Address;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::GroupBox^  groupBox7;
	private: System::Windows::Forms::TextBox^  textBoxEmployer1Name;
	private: System::Windows::Forms::TextBox^  textBoxEmployer1Address;
	private: System::Windows::Forms::Label^  label39;
	private: System::Windows::Forms::Label^  label52;
	private: System::Windows::Forms::GroupBox^  groupBox6;
	private: System::Windows::Forms::TextBox^  textBoxElder1Name;
	private: System::Windows::Forms::TextBox^  textBoxElder1Address;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::TextBox^  textBoxMinisterFirstName;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::TextBox^  textBoxMinisterAddress;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::TextBox^  textBoxChurchAddress;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::TextBox^  textBoxChurchName;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::CheckBox^  checkBoxAttendedHighSchool;
	private: System::Windows::Forms::CheckBox^  checkBoxCompletedHighSchool;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::TextBox^  textBoxAddressOfHighSchool;
	private: System::Windows::Forms::TextBox^  textBoxNameOfHighSchool;
	private: System::Windows::Forms::Label^  label36;
	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownYoungerSiblings;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownOlderSiblings;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  textBoxParentOrGuardianAddress;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::TextBox^  textBoxParentOrGuardiansName;
	private: System::Windows::Forms::TextBox^  textBoxMothersOccupation;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  textBoxFathersOccupation;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::Button^  buttonPrevious;

	private: System::Windows::Forms::TextBox^  textBoxReasonForTransfer;
	private: System::Windows::Forms::CheckBox^  checkBoxTransferStudent;
	private: System::Windows::Forms::Label^  label47;
	private: System::Windows::Forms::TextBox^  textBoxExpectedDurationOfStudy;
	private: System::Windows::Forms::Label^  label46;
	private: System::Windows::Forms::CheckedListBox^  checkedListBoxExpectedQualifications;
	private: System::Windows::Forms::CheckBox^  checkBoxPlanToGraduate;
	private: System::Windows::Forms::Label^  label45;
	private: System::Windows::Forms::Label^  label44;
	private: System::Windows::Forms::Label^  label41;
	private: System::Windows::Forms::TextBox^  textBoxFutuerPlans;
	private: System::Windows::Forms::TextBox^  textBoxReasonForApplication;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::GroupBox^  groupBox8;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::TextBox^  textBoxPastArrestComment;
	private: System::Windows::Forms::CheckBox^  checkBoxPastArrest;
	private: System::Windows::Forms::TextBox^  textBoxIllegalDrugUserComment;
	private: System::Windows::Forms::TextBox^  textBoxSmokerComment;
	private: System::Windows::Forms::CheckBox^  checkBoxUsesIntoxicatingBeverages;
	private: System::Windows::Forms::CheckBox^  checkBoxSmokes;
	private: System::Windows::Forms::CheckBox^  checkBoxUsesIllegalDrugs;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::TextBox^  textBoxUsesIntoxicatingBeveragesComment;
	private: System::Windows::Forms::Label^  label24;
private: System::Windows::Forms::TabPage^  tabPage3;
private: System::Windows::Forms::GroupBox^  groupBox13;

private: System::Windows::Forms::Button^  buttonSubmit;
private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::Button^  buttonPrevious2;
private: System::Windows::Forms::DataGridView^  dataGridView;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  CourseNumber;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  TitleOfCourse;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Grade;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Hours;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Points;




























































































































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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(AddStudentDialog::typeid));
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->dateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->pictureBoxLogo = (gcnew System::Windows::Forms::PictureBox());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->splitContainer2 = (gcnew System::Windows::Forms::SplitContainer());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox14 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxChristianWork = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->groupBox11 = (gcnew System::Windows::Forms::GroupBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBoxLastName = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxFirstName = (gcnew System::Windows::Forms::TextBox());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->textBoxMiddleNames = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePickerApplicationDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBoxAddress = (gcnew System::Windows::Forms::TextBox());
			this->comboBoxSex = (gcnew System::Windows::Forms::ComboBox());
			this->dateTimePickerDateOfBirth = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBoxPlaceOfBirth = (gcnew System::Windows::Forms::TextBox());
			this->groupBox12 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBoxBaptised = (gcnew System::Windows::Forms::CheckBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->dateTimePickerDateOfBaptism = (gcnew System::Windows::Forms::DateTimePicker());
			this->buttonNextPage = (gcnew System::Windows::Forms::Button());
			this->groupBox10 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxEmployer2Name = (gcnew System::Windows::Forms::TextBox());
			this->textBoxEmployer2Address = (gcnew System::Windows::Forms::TextBox());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxElder2Name = (gcnew System::Windows::Forms::TextBox());
			this->textBoxElder2Address = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxEmployer1Name = (gcnew System::Windows::Forms::TextBox());
			this->textBoxEmployer1Address = (gcnew System::Windows::Forms::TextBox());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxElder1Name = (gcnew System::Windows::Forms::TextBox());
			this->textBoxElder1Address = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxMinisterFirstName = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBoxMinisterAddress = (gcnew System::Windows::Forms::TextBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxChurchAddress = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBoxChurchName = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBoxAttendedHighSchool = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxCompletedHighSchool = (gcnew System::Windows::Forms::CheckBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->textBoxAddressOfHighSchool = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNameOfHighSchool = (gcnew System::Windows::Forms::TextBox());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDownYoungerSiblings = (gcnew System::Windows::Forms::NumericUpDown());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->numericUpDownOlderSiblings = (gcnew System::Windows::Forms::NumericUpDown());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxParentOrGuardianAddress = (gcnew System::Windows::Forms::TextBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->textBoxParentOrGuardiansName = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMothersOccupation = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBoxFathersOccupation = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->buttonPrevious = (gcnew System::Windows::Forms::Button());
			this->textBoxReasonForTransfer = (gcnew System::Windows::Forms::TextBox());
			this->checkBoxTransferStudent = (gcnew System::Windows::Forms::CheckBox());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->textBoxExpectedDurationOfStudy = (gcnew System::Windows::Forms::TextBox());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->checkedListBoxExpectedQualifications = (gcnew System::Windows::Forms::CheckedListBox());
			this->checkBoxPlanToGraduate = (gcnew System::Windows::Forms::CheckBox());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->textBoxFutuerPlans = (gcnew System::Windows::Forms::TextBox());
			this->textBoxReasonForApplication = (gcnew System::Windows::Forms::TextBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->textBoxPastArrestComment = (gcnew System::Windows::Forms::TextBox());
			this->checkBoxPastArrest = (gcnew System::Windows::Forms::CheckBox());
			this->textBoxIllegalDrugUserComment = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSmokerComment = (gcnew System::Windows::Forms::TextBox());
			this->checkBoxUsesIntoxicatingBeverages = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxSmokes = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxUsesIllegalDrugs = (gcnew System::Windows::Forms::CheckBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBoxUsesIntoxicatingBeveragesComment = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->buttonPrevious2 = (gcnew System::Windows::Forms::Button());
			this->buttonSubmit = (gcnew System::Windows::Forms::Button());
			this->groupBox13 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->CourseNumber = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TitleOfCourse = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Grade = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Hours = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Points = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxLogo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer2))->BeginInit();
			this->splitContainer2->Panel1->SuspendLayout();
			this->splitContainer2->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBox14->SuspendLayout();
			this->groupBox11->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown2))->BeginInit();
			this->groupBox12->SuspendLayout();
			this->groupBox10->SuspendLayout();
			this->groupBox9->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDownYoungerSiblings))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDownOlderSiblings))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->groupBox13->SuspendLayout();
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
			this->splitContainer1->Panel1->Controls->Add(this->pictureBoxLogo);
			this->splitContainer1->Panel1->Controls->Add(this->label42);
			this->splitContainer1->Panel1->Controls->Add(this->label43);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->splitContainer2);
			this->splitContainer1->Size = System::Drawing::Size(697, 628);
			this->splitContainer1->SplitterDistance = 112;
			this->splitContainer1->SplitterWidth = 10;
			this->splitContainer1->TabIndex = 0;
			this->splitContainer1->TabStop = false;
			// 
			// dateTimePicker
			// 
			this->dateTimePicker->Enabled = false;
			this->dateTimePicker->Location = System::Drawing::Point(8, 13);
			this->dateTimePicker->Name = L"dateTimePicker";
			this->dateTimePicker->Size = System::Drawing::Size(193, 20);
			this->dateTimePicker->TabIndex = 16;
			// 
			// pictureBoxLogo
			// 
			this->pictureBoxLogo->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBoxLogo.Image")));
			this->pictureBoxLogo->Location = System::Drawing::Point(514, 12);
			this->pictureBoxLogo->Name = L"pictureBoxLogo";
			this->pictureBoxLogo->Size = System::Drawing::Size(84, 98);
			this->pictureBoxLogo->TabIndex = 15;
			this->pictureBoxLogo->TabStop = false;
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label42->Location = System::Drawing::Point(258, 35);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(175, 19);
			this->label42->TabIndex = 13;
			this->label42->Text = L"ADD STUDENT FORM";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label43->Location = System::Drawing::Point(210, 13);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(298, 19);
			this->label43->TabIndex = 14;
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
			this->splitContainer2->Panel1->Controls->Add(this->tabControl1);
			this->splitContainer2->Size = System::Drawing::Size(697, 506);
			this->splitContainer2->SplitterDistance = 395;
			this->splitContainer2->SplitterWidth = 10;
			this->splitContainer2->TabIndex = 0;
			this->splitContainer2->TabStop = false;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(697, 395);
			this->tabControl1->TabIndex = 3;
			this->tabControl1->TabStop = false;
			// 
			// tabPage1
			// 
			this->tabPage1->AutoScroll = true;
			this->tabPage1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->tabPage1->Controls->Add(this->groupBox14);
			this->tabPage1->Controls->Add(this->groupBox11);
			this->tabPage1->Controls->Add(this->groupBox12);
			this->tabPage1->Controls->Add(this->buttonNextPage);
			this->tabPage1->Controls->Add(this->groupBox10);
			this->tabPage1->Controls->Add(this->groupBox9);
			this->tabPage1->Controls->Add(this->groupBox7);
			this->tabPage1->Controls->Add(this->groupBox6);
			this->tabPage1->Controls->Add(this->groupBox5);
			this->tabPage1->Controls->Add(this->groupBox4);
			this->tabPage1->Controls->Add(this->groupBox3);
			this->tabPage1->Controls->Add(this->label34);
			this->tabPage1->Controls->Add(this->groupBox2);
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(689, 369);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Page1";
			// 
			// groupBox14
			// 
			this->groupBox14->Controls->Add(this->textBoxChristianWork);
			this->groupBox14->Controls->Add(this->label18);
			this->groupBox14->Location = System::Drawing::Point(348, 515);
			this->groupBox14->Name = L"groupBox14";
			this->groupBox14->Size = System::Drawing::Size(287, 67);
			this->groupBox14->TabIndex = 7;
			this->groupBox14->TabStop = false;
			this->groupBox14->Text = L"Christian Eork";
			// 
			// textBoxChristianWork
			// 
			this->textBoxChristianWork->Location = System::Drawing::Point(85, 30);
			this->textBoxChristianWork->Name = L"textBoxChristianWork";
			this->textBoxChristianWork->Size = System::Drawing::Size(185, 20);
			this->textBoxChristianWork->TabIndex = 23;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(6, 30);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(73, 13);
			this->label18->TabIndex = 0;
			this->label18->Text = L"Christian work";
			// 
			// groupBox11
			// 
			this->groupBox11->Controls->Add(this->label26);
			this->groupBox11->Controls->Add(this->label27);
			this->groupBox11->Controls->Add(this->comboBox2);
			this->groupBox11->Controls->Add(this->numericUpDown2);
			this->groupBox11->Controls->Add(this->textBoxLastName);
			this->groupBox11->Controls->Add(this->label1);
			this->groupBox11->Controls->Add(this->textBoxFirstName);
			this->groupBox11->Controls->Add(this->label40);
			this->groupBox11->Controls->Add(this->label48);
			this->groupBox11->Controls->Add(this->textBoxMiddleNames);
			this->groupBox11->Controls->Add(this->dateTimePickerApplicationDate);
			this->groupBox11->Controls->Add(this->label2);
			this->groupBox11->Controls->Add(this->label3);
			this->groupBox11->Controls->Add(this->label4);
			this->groupBox11->Controls->Add(this->label5);
			this->groupBox11->Controls->Add(this->label6);
			this->groupBox11->Controls->Add(this->textBoxAddress);
			this->groupBox11->Controls->Add(this->comboBoxSex);
			this->groupBox11->Controls->Add(this->dateTimePickerDateOfBirth);
			this->groupBox11->Controls->Add(this->textBoxPlaceOfBirth);
			this->groupBox11->Location = System::Drawing::Point(11, 6);
			this->groupBox11->Name = L"groupBox11";
			this->groupBox11->Size = System::Drawing::Size(625, 184);
			this->groupBox11->TabIndex = 0;
			this->groupBox11->TabStop = false;
			this->groupBox11->Text = L"Name";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(497, 90);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(77, 13);
			this->label26->TabIndex = 87;
			this->label26->Text = L"No. of Children";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(9, 90);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(71, 13);
			this->label27->TabIndex = 86;
			this->label27->Text = L"Marital Status";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Single", L"Maried", L"Divorced", L"Separated"});
			this->comboBox2->Location = System::Drawing::Point(98, 87);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(62, 21);
			this->comboBox2->TabIndex = 6;
			this->comboBox2->Text = L"Single";
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(580, 88);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(37, 20);
			this->numericUpDown2->TabIndex = 8;
			// 
			// textBoxLastName
			// 
			this->textBoxLastName->Location = System::Drawing::Point(471, 13);
			this->textBoxLastName->Name = L"textBoxLastName";
			this->textBoxLastName->Size = System::Drawing::Size(146, 20);
			this->textBoxLastName->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(2, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(61, 13);
			this->label1->TabIndex = 62;
			this->label1->Text = L"*First Name";
			// 
			// textBoxFirstName
			// 
			this->textBoxFirstName->Location = System::Drawing::Point(65, 13);
			this->textBoxFirstName->Name = L"textBoxFirstName";
			this->textBoxFirstName->Size = System::Drawing::Size(105, 20);
			this->textBoxFirstName->TabIndex = 1;
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(171, 16);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(74, 13);
			this->label40->TabIndex = 82;
			this->label40->Text = L"Middle Names";
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Location = System::Drawing::Point(401, 16);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(62, 13);
			this->label48->TabIndex = 85;
			this->label48->Text = L"*Last Name";
			// 
			// textBoxMiddleNames
			// 
			this->textBoxMiddleNames->Location = System::Drawing::Point(245, 13);
			this->textBoxMiddleNames->Name = L"textBoxMiddleNames";
			this->textBoxMiddleNames->Size = System::Drawing::Size(155, 20);
			this->textBoxMiddleNames->TabIndex = 2;
			// 
			// dateTimePickerApplicationDate
			// 
			this->dateTimePickerApplicationDate->Location = System::Drawing::Point(203, 132);
			this->dateTimePickerApplicationDate->Name = L"dateTimePickerApplicationDate";
			this->dateTimePickerApplicationDate->Size = System::Drawing::Size(197, 20);
			this->dateTimePickerApplicationDate->TabIndex = 10;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(9, 53);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 13);
			this->label2->TabIndex = 63;
			this->label2->Text = L"Address";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(320, 53);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 13);
			this->label3->TabIndex = 64;
			this->label3->Text = L"Place of Birth";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(11, 136);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(25, 13);
			this->label4->TabIndex = 65;
			this->label4->Text = L"Sex";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(112, 133);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(85, 13);
			this->label5->TabIndex = 66;
			this->label5->Text = L"Application Date";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(194, 91);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(66, 13);
			this->label6->TabIndex = 67;
			this->label6->Text = L"Date of Birth";
			// 
			// textBoxAddress
			// 
			this->textBoxAddress->Location = System::Drawing::Point(57, 50);
			this->textBoxAddress->Name = L"textBoxAddress";
			this->textBoxAddress->Size = System::Drawing::Size(242, 20);
			this->textBoxAddress->TabIndex = 4;
			// 
			// comboBoxSex
			// 
			this->comboBoxSex->FormattingEnabled = true;
			this->comboBoxSex->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Male", L"Female"});
			this->comboBoxSex->Location = System::Drawing::Point(42, 133);
			this->comboBoxSex->Name = L"comboBoxSex";
			this->comboBoxSex->Size = System::Drawing::Size(54, 21);
			this->comboBoxSex->TabIndex = 9;
			this->comboBoxSex->Text = L"Male";
			// 
			// dateTimePickerDateOfBirth
			// 
			this->dateTimePickerDateOfBirth->Location = System::Drawing::Point(285, 88);
			this->dateTimePickerDateOfBirth->Name = L"dateTimePickerDateOfBirth";
			this->dateTimePickerDateOfBirth->Size = System::Drawing::Size(200, 20);
			this->dateTimePickerDateOfBirth->TabIndex = 7;
			// 
			// textBoxPlaceOfBirth
			// 
			this->textBoxPlaceOfBirth->Location = System::Drawing::Point(395, 50);
			this->textBoxPlaceOfBirth->Name = L"textBoxPlaceOfBirth";
			this->textBoxPlaceOfBirth->Size = System::Drawing::Size(222, 20);
			this->textBoxPlaceOfBirth->TabIndex = 5;
			// 
			// groupBox12
			// 
			this->groupBox12->Controls->Add(this->checkBoxBaptised);
			this->groupBox12->Controls->Add(this->label13);
			this->groupBox12->Controls->Add(this->dateTimePickerDateOfBaptism);
			this->groupBox12->Location = System::Drawing::Point(11, 412);
			this->groupBox12->Name = L"groupBox12";
			this->groupBox12->Size = System::Drawing::Size(625, 41);
			this->groupBox12->TabIndex = 4;
			this->groupBox12->TabStop = false;
			this->groupBox12->Text = L"Baptised";
			// 
			// checkBoxBaptised
			// 
			this->checkBoxBaptised->AutoSize = true;
			this->checkBoxBaptised->Location = System::Drawing::Point(10, 18);
			this->checkBoxBaptised->Name = L"checkBoxBaptised";
			this->checkBoxBaptised->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->checkBoxBaptised->Size = System::Drawing::Size(181, 17);
			this->checkBoxBaptised->TabIndex = 19;
			this->checkBoxBaptised->Text = L"Immersed believer in Jesus Christ";
			this->checkBoxBaptised->UseVisualStyleBackColor = true;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(325, 21);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(82, 13);
			this->label13->TabIndex = 75;
			this->label13->Text = L"Date of Baptism";
			// 
			// dateTimePickerDateOfBaptism
			// 
			this->dateTimePickerDateOfBaptism->Enabled = false;
			this->dateTimePickerDateOfBaptism->Location = System::Drawing::Point(413, 15);
			this->dateTimePickerDateOfBaptism->Name = L"dateTimePickerDateOfBaptism";
			this->dateTimePickerDateOfBaptism->Size = System::Drawing::Size(204, 20);
			this->dateTimePickerDateOfBaptism->TabIndex = 20;
			// 
			// buttonNextPage
			// 
			this->buttonNextPage->Location = System::Drawing::Point(560, 794);
			this->buttonNextPage->Name = L"buttonNextPage";
			this->buttonNextPage->Size = System::Drawing::Size(75, 23);
			this->buttonNextPage->TabIndex = 12;
			this->buttonNextPage->Text = L"Next Page";
			this->buttonNextPage->UseVisualStyleBackColor = true;
			this->buttonNextPage->Click += gcnew System::EventHandler(this, &AddStudentDialog::buttonNextPage_Click);
			// 
			// groupBox10
			// 
			this->groupBox10->Controls->Add(this->textBoxEmployer2Name);
			this->groupBox10->Controls->Add(this->textBoxEmployer2Address);
			this->groupBox10->Controls->Add(this->label37);
			this->groupBox10->Controls->Add(this->label53);
			this->groupBox10->Location = System::Drawing::Point(317, 702);
			this->groupBox10->Name = L"groupBox10";
			this->groupBox10->Size = System::Drawing::Size(318, 86);
			this->groupBox10->TabIndex = 11;
			this->groupBox10->TabStop = false;
			this->groupBox10->Text = L"Employer Info 2";
			// 
			// textBoxEmployer2Name
			// 
			this->textBoxEmployer2Name->Location = System::Drawing::Point(53, 27);
			this->textBoxEmployer2Name->Name = L"textBoxEmployer2Name";
			this->textBoxEmployer2Name->Size = System::Drawing::Size(260, 20);
			this->textBoxEmployer2Name->TabIndex = 32;
			// 
			// textBoxEmployer2Address
			// 
			this->textBoxEmployer2Address->Location = System::Drawing::Point(53, 53);
			this->textBoxEmployer2Address->Name = L"textBoxEmployer2Address";
			this->textBoxEmployer2Address->Size = System::Drawing::Size(260, 20);
			this->textBoxEmployer2Address->TabIndex = 33;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(8, 30);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(35, 13);
			this->label37->TabIndex = 34;
			this->label37->Text = L"Name";
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Location = System::Drawing::Point(8, 56);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(45, 13);
			this->label53->TabIndex = 35;
			this->label53->Text = L"Address";
			// 
			// groupBox9
			// 
			this->groupBox9->Controls->Add(this->textBoxElder2Name);
			this->groupBox9->Controls->Add(this->textBoxElder2Address);
			this->groupBox9->Controls->Add(this->label21);
			this->groupBox9->Controls->Add(this->label22);
			this->groupBox9->Location = System::Drawing::Point(8, 702);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Size = System::Drawing::Size(303, 90);
			this->groupBox9->TabIndex = 10;
			this->groupBox9->TabStop = false;
			this->groupBox9->Text = L"Elder/Deacon/Church Comittee Member 2";
			// 
			// textBoxElder2Name
			// 
			this->textBoxElder2Name->Location = System::Drawing::Point(38, 27);
			this->textBoxElder2Name->Name = L"textBoxElder2Name";
			this->textBoxElder2Name->Size = System::Drawing::Size(261, 20);
			this->textBoxElder2Name->TabIndex = 28;
			// 
			// textBoxElder2Address
			// 
			this->textBoxElder2Address->Location = System::Drawing::Point(38, 53);
			this->textBoxElder2Address->Name = L"textBoxElder2Address";
			this->textBoxElder2Address->Size = System::Drawing::Size(261, 20);
			this->textBoxElder2Address->TabIndex = 29;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(1, 30);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(35, 13);
			this->label21->TabIndex = 28;
			this->label21->Text = L"Name";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(1, 56);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(45, 13);
			this->label22->TabIndex = 29;
			this->label22->Text = L"Address";
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->textBoxEmployer1Name);
			this->groupBox7->Controls->Add(this->textBoxEmployer1Address);
			this->groupBox7->Controls->Add(this->label39);
			this->groupBox7->Controls->Add(this->label52);
			this->groupBox7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox7->Location = System::Drawing::Point(317, 604);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(319, 86);
			this->groupBox7->TabIndex = 9;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Employer Info 1";
			// 
			// textBoxEmployer1Name
			// 
			this->textBoxEmployer1Name->Location = System::Drawing::Point(53, 33);
			this->textBoxEmployer1Name->Name = L"textBoxEmployer1Name";
			this->textBoxEmployer1Name->Size = System::Drawing::Size(260, 20);
			this->textBoxEmployer1Name->TabIndex = 30;
			// 
			// textBoxEmployer1Address
			// 
			this->textBoxEmployer1Address->Location = System::Drawing::Point(53, 59);
			this->textBoxEmployer1Address->Name = L"textBoxEmployer1Address";
			this->textBoxEmployer1Address->Size = System::Drawing::Size(260, 20);
			this->textBoxEmployer1Address->TabIndex = 31;
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(8, 36);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(35, 13);
			this->label39->TabIndex = 34;
			this->label39->Text = L"Name";
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->Location = System::Drawing::Point(8, 62);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(45, 13);
			this->label52->TabIndex = 35;
			this->label52->Text = L"Address";
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->textBoxElder1Name);
			this->groupBox6->Controls->Add(this->textBoxElder1Address);
			this->groupBox6->Controls->Add(this->label19);
			this->groupBox6->Controls->Add(this->label20);
			this->groupBox6->Location = System::Drawing::Point(8, 604);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(303, 86);
			this->groupBox6->TabIndex = 8;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Elder/Deacon/Church Comittee Member Info 1";
			// 
			// textBoxElder1Name
			// 
			this->textBoxElder1Name->Location = System::Drawing::Point(53, 30);
			this->textBoxElder1Name->Name = L"textBoxElder1Name";
			this->textBoxElder1Name->Size = System::Drawing::Size(246, 20);
			this->textBoxElder1Name->TabIndex = 26;
			// 
			// textBoxElder1Address
			// 
			this->textBoxElder1Address->Location = System::Drawing::Point(53, 56);
			this->textBoxElder1Address->Name = L"textBoxElder1Address";
			this->textBoxElder1Address->Size = System::Drawing::Size(246, 20);
			this->textBoxElder1Address->TabIndex = 27;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(8, 33);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(35, 13);
			this->label19->TabIndex = 0;
			this->label19->Text = L"Name";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(8, 59);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(45, 13);
			this->label20->TabIndex = 0;
			this->label20->Text = L"Address";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->textBoxMinisterFirstName);
			this->groupBox5->Controls->Add(this->label16);
			this->groupBox5->Controls->Add(this->label17);
			this->groupBox5->Controls->Add(this->textBoxMinisterAddress);
			this->groupBox5->Location = System::Drawing::Point(8, 515);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(329, 83);
			this->groupBox5->TabIndex = 6;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Minister";
			// 
			// textBoxMinisterFirstName
			// 
			this->textBoxMinisterFirstName->Location = System::Drawing::Point(64, 19);
			this->textBoxMinisterFirstName->Name = L"textBoxMinisterFirstName";
			this->textBoxMinisterFirstName->Size = System::Drawing::Size(259, 20);
			this->textBoxMinisterFirstName->TabIndex = 21;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(7, 22);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(35, 13);
			this->label16->TabIndex = 0;
			this->label16->Text = L"Name";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(7, 54);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(45, 13);
			this->label17->TabIndex = 0;
			this->label17->Text = L"Address";
			// 
			// textBoxMinisterAddress
			// 
			this->textBoxMinisterAddress->Location = System::Drawing::Point(64, 51);
			this->textBoxMinisterAddress->Name = L"textBoxMinisterAddress";
			this->textBoxMinisterAddress->Size = System::Drawing::Size(259, 20);
			this->textBoxMinisterAddress->TabIndex = 22;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->textBoxChurchAddress);
			this->groupBox4->Controls->Add(this->label15);
			this->groupBox4->Controls->Add(this->textBoxChurchName);
			this->groupBox4->Controls->Add(this->label14);
			this->groupBox4->Location = System::Drawing::Point(8, 459);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(628, 50);
			this->groupBox4->TabIndex = 5;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Church";
			// 
			// textBoxChurchAddress
			// 
			this->textBoxChurchAddress->Location = System::Drawing::Point(307, 19);
			this->textBoxChurchAddress->Name = L"textBoxChurchAddress";
			this->textBoxChurchAddress->Size = System::Drawing::Size(301, 20);
			this->textBoxChurchAddress->TabIndex = 20;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(253, 22);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(45, 13);
			this->label15->TabIndex = 0;
			this->label15->Text = L"Address";
			// 
			// textBoxChurchName
			// 
			this->textBoxChurchName->Location = System::Drawing::Point(45, 19);
			this->textBoxChurchName->Name = L"textBoxChurchName";
			this->textBoxChurchName->Size = System::Drawing::Size(205, 20);
			this->textBoxChurchName->TabIndex = 19;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(4, 22);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(35, 13);
			this->label14->TabIndex = 0;
			this->label14->Text = L"Name";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->checkBoxAttendedHighSchool);
			this->groupBox3->Controls->Add(this->checkBoxCompletedHighSchool);
			this->groupBox3->Controls->Add(this->label33);
			this->groupBox3->Controls->Add(this->textBoxAddressOfHighSchool);
			this->groupBox3->Controls->Add(this->textBoxNameOfHighSchool);
			this->groupBox3->Controls->Add(this->label36);
			this->groupBox3->Controls->Add(this->label35);
			this->groupBox3->Location = System::Drawing::Point(11, 331);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(625, 75);
			this->groupBox3->TabIndex = 3;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"High School";
			// 
			// checkBoxAttendedHighSchool
			// 
			this->checkBoxAttendedHighSchool->AutoSize = true;
			this->checkBoxAttendedHighSchool->Location = System::Drawing::Point(10, 19);
			this->checkBoxAttendedHighSchool->Name = L"checkBoxAttendedHighSchool";
			this->checkBoxAttendedHighSchool->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->checkBoxAttendedHighSchool->Size = System::Drawing::Size(130, 17);
			this->checkBoxAttendedHighSchool->TabIndex = 15;
			this->checkBoxAttendedHighSchool->Text = L"Attended High School";
			this->checkBoxAttendedHighSchool->UseVisualStyleBackColor = true;
			// 
			// checkBoxCompletedHighSchool
			// 
			this->checkBoxCompletedHighSchool->AutoSize = true;
			this->checkBoxCompletedHighSchool->Enabled = false;
			this->checkBoxCompletedHighSchool->Location = System::Drawing::Point(4, 50);
			this->checkBoxCompletedHighSchool->Name = L"checkBoxCompletedHighSchool";
			this->checkBoxCompletedHighSchool->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->checkBoxCompletedHighSchool->Size = System::Drawing::Size(137, 17);
			this->checkBoxCompletedHighSchool->TabIndex = 16;
			this->checkBoxCompletedHighSchool->Text = L"Completed High School";
			this->checkBoxCompletedHighSchool->UseVisualStyleBackColor = true;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(25, 34);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(0, 13);
			this->label33->TabIndex = 63;
			// 
			// textBoxAddressOfHighSchool
			// 
			this->textBoxAddressOfHighSchool->Enabled = false;
			this->textBoxAddressOfHighSchool->Location = System::Drawing::Point(285, 49);
			this->textBoxAddressOfHighSchool->Name = L"textBoxAddressOfHighSchool";
			this->textBoxAddressOfHighSchool->Size = System::Drawing::Size(332, 20);
			this->textBoxAddressOfHighSchool->TabIndex = 18;
			// 
			// textBoxNameOfHighSchool
			// 
			this->textBoxNameOfHighSchool->Enabled = false;
			this->textBoxNameOfHighSchool->Location = System::Drawing::Point(285, 17);
			this->textBoxNameOfHighSchool->Name = L"textBoxNameOfHighSchool";
			this->textBoxNameOfHighSchool->Size = System::Drawing::Size(332, 20);
			this->textBoxNameOfHighSchool->TabIndex = 17;
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(158, 51);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(118, 13);
			this->label36->TabIndex = 0;
			this->label36->Text = L"Address of High School";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(168, 20);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(108, 13);
			this->label35->TabIndex = 0;
			this->label35->Text = L"Name of High School";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(361, 320);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(0, 13);
			this->label34->TabIndex = 80;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->numericUpDownYoungerSiblings);
			this->groupBox2->Controls->Add(this->label32);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->numericUpDownOlderSiblings);
			this->groupBox2->Location = System::Drawing::Point(451, 196);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(184, 52);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Number of children in family";
			// 
			// numericUpDownYoungerSiblings
			// 
			this->numericUpDownYoungerSiblings->Location = System::Drawing::Point(130, 19);
			this->numericUpDownYoungerSiblings->Name = L"numericUpDownYoungerSiblings";
			this->numericUpDownYoungerSiblings->Size = System::Drawing::Size(35, 20);
			this->numericUpDownYoungerSiblings->TabIndex = 14;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(85, 21);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(47, 13);
			this->label32->TabIndex = 0;
			this->label32->Text = L"Younger";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(10, 21);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(32, 13);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Older";
			// 
			// numericUpDownOlderSiblings
			// 
			this->numericUpDownOlderSiblings->Location = System::Drawing::Point(44, 19);
			this->numericUpDownOlderSiblings->Name = L"numericUpDownOlderSiblings";
			this->numericUpDownOlderSiblings->Size = System::Drawing::Size(35, 20);
			this->numericUpDownOlderSiblings->TabIndex = 13;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBoxParentOrGuardianAddress);
			this->groupBox1->Controls->Add(this->label31);
			this->groupBox1->Controls->Add(this->label30);
			this->groupBox1->Controls->Add(this->textBoxParentOrGuardiansName);
			this->groupBox1->Controls->Add(this->textBoxMothersOccupation);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->textBoxFathersOccupation);
			this->groupBox1->Location = System::Drawing::Point(11, 196);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(434, 129);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Parents (or guardians) Info";
			// 
			// textBoxParentOrGuardianAddress
			// 
			this->textBoxParentOrGuardianAddress->Location = System::Drawing::Point(155, 45);
			this->textBoxParentOrGuardianAddress->Name = L"textBoxParentOrGuardianAddress";
			this->textBoxParentOrGuardianAddress->Size = System::Drawing::Size(273, 20);
			this->textBoxParentOrGuardianAddress->TabIndex = 10;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(8, 48);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(139, 13);
			this->label31->TabIndex = 24;
			this->label31->Text = L"Address of Parent/Guardian";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(7, 22);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(129, 13);
			this->label30->TabIndex = 23;
			this->label30->Text = L"Name of Parent/Guardian";
			// 
			// textBoxParentOrGuardiansName
			// 
			this->textBoxParentOrGuardiansName->Location = System::Drawing::Point(155, 19);
			this->textBoxParentOrGuardiansName->Name = L"textBoxParentOrGuardiansName";
			this->textBoxParentOrGuardiansName->Size = System::Drawing::Size(273, 20);
			this->textBoxParentOrGuardiansName->TabIndex = 9;
			// 
			// textBoxMothersOccupation
			// 
			this->textBoxMothersOccupation->Location = System::Drawing::Point(155, 103);
			this->textBoxMothersOccupation->Name = L"textBoxMothersOccupation";
			this->textBoxMothersOccupation->Size = System::Drawing::Size(273, 20);
			this->textBoxMothersOccupation->TabIndex = 12;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(8, 74);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(100, 13);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Father\'s occupation";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(9, 106);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(105, 13);
			this->label10->TabIndex = 9;
			this->label10->Text = L"Mother\'s Occupation";
			// 
			// textBoxFathersOccupation
			// 
			this->textBoxFathersOccupation->Location = System::Drawing::Point(155, 71);
			this->textBoxFathersOccupation->Name = L"textBoxFathersOccupation";
			this->textBoxFathersOccupation->Size = System::Drawing::Size(273, 20);
			this->textBoxFathersOccupation->TabIndex = 11;
			// 
			// tabPage2
			// 
			this->tabPage2->AutoScroll = true;
			this->tabPage2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->tabPage2->Controls->Add(this->button1);
			this->tabPage2->Controls->Add(this->buttonPrevious);
			this->tabPage2->Controls->Add(this->textBoxReasonForTransfer);
			this->tabPage2->Controls->Add(this->checkBoxTransferStudent);
			this->tabPage2->Controls->Add(this->label47);
			this->tabPage2->Controls->Add(this->textBoxExpectedDurationOfStudy);
			this->tabPage2->Controls->Add(this->label46);
			this->tabPage2->Controls->Add(this->checkedListBoxExpectedQualifications);
			this->tabPage2->Controls->Add(this->checkBoxPlanToGraduate);
			this->tabPage2->Controls->Add(this->label45);
			this->tabPage2->Controls->Add(this->label44);
			this->tabPage2->Controls->Add(this->label41);
			this->tabPage2->Controls->Add(this->textBoxFutuerPlans);
			this->tabPage2->Controls->Add(this->textBoxReasonForApplication);
			this->tabPage2->Controls->Add(this->label29);
			this->tabPage2->Controls->Add(this->groupBox8);
			this->tabPage2->Controls->Add(this->label24);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(689, 375);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Page2";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(434, 563);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 77;
			this->button1->Text = L"Next Page";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AddStudentDialog::button1_Click);
			// 
			// buttonPrevious
			// 
			this->buttonPrevious->Location = System::Drawing::Point(357, 563);
			this->buttonPrevious->Name = L"buttonPrevious";
			this->buttonPrevious->Size = System::Drawing::Size(75, 23);
			this->buttonPrevious->TabIndex = 8;
			this->buttonPrevious->Text = L"Previous";
			this->buttonPrevious->UseVisualStyleBackColor = true;
			this->buttonPrevious->Click += gcnew System::EventHandler(this, &AddStudentDialog::buttonPrevious_Click);
			// 
			// textBoxReasonForTransfer
			// 
			this->textBoxReasonForTransfer->Enabled = false;
			this->textBoxReasonForTransfer->Location = System::Drawing::Point(11, 434);
			this->textBoxReasonForTransfer->Name = L"textBoxReasonForTransfer";
			this->textBoxReasonForTransfer->Size = System::Drawing::Size(498, 20);
			this->textBoxReasonForTransfer->TabIndex = 6;
			// 
			// checkBoxTransferStudent
			// 
			this->checkBoxTransferStudent->AutoSize = true;
			this->checkBoxTransferStudent->Location = System::Drawing::Point(11, 381);
			this->checkBoxTransferStudent->Name = L"checkBoxTransferStudent";
			this->checkBoxTransferStudent->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->checkBoxTransferStudent->Size = System::Drawing::Size(105, 17);
			this->checkBoxTransferStudent->TabIndex = 5;
			this->checkBoxTransferStudent->Text = L"Transfer Student";
			this->checkBoxTransferStudent->UseVisualStyleBackColor = true;
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Location = System::Drawing::Point(8, 418);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(107, 13);
			this->label47->TabIndex = 0;
			this->label47->Text = L"Reason For Transfer ";
			// 
			// textBoxExpectedDurationOfStudy
			// 
			this->textBoxExpectedDurationOfStudy->Enabled = false;
			this->textBoxExpectedDurationOfStudy->Location = System::Drawing::Point(274, 260);
			this->textBoxExpectedDurationOfStudy->Name = L"textBoxExpectedDurationOfStudy";
			this->textBoxExpectedDurationOfStudy->Size = System::Drawing::Size(100, 20);
			this->textBoxExpectedDurationOfStudy->TabIndex = 3;
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Location = System::Drawing::Point(131, 263);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(137, 13);
			this->label46->TabIndex = 0;
			this->label46->Text = L"Expected Duration of Study";
			// 
			// checkedListBoxExpectedQualifications
			// 
			this->checkedListBoxExpectedQualifications->FormattingEnabled = true;
			this->checkedListBoxExpectedQualifications->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Associate of Science", 
				L"Bachelor of Biblical Literature", L"Eldership or Deaconship", L"Sunday School Teacher"});
			this->checkedListBoxExpectedQualifications->Location = System::Drawing::Point(130, 305);
			this->checkedListBoxExpectedQualifications->Name = L"checkedListBoxExpectedQualifications";
			this->checkedListBoxExpectedQualifications->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->checkedListBoxExpectedQualifications->Size = System::Drawing::Size(170, 64);
			this->checkedListBoxExpectedQualifications->Sorted = true;
			this->checkedListBoxExpectedQualifications->TabIndex = 4;
			// 
			// checkBoxPlanToGraduate
			// 
			this->checkBoxPlanToGraduate->AutoSize = true;
			this->checkBoxPlanToGraduate->Location = System::Drawing::Point(11, 263);
			this->checkBoxPlanToGraduate->Name = L"checkBoxPlanToGraduate";
			this->checkBoxPlanToGraduate->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->checkBoxPlanToGraduate->Size = System::Drawing::Size(104, 17);
			this->checkBoxPlanToGraduate->TabIndex = 2;
			this->checkBoxPlanToGraduate->Text = L"Plan to graduate";
			this->checkBoxPlanToGraduate->UseVisualStyleBackColor = true;
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Location = System::Drawing::Point(17, 208);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(0, 13);
			this->label45->TabIndex = 76;
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Location = System::Drawing::Point(8, 305);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(118, 13);
			this->label44->TabIndex = 0;
			this->label44->Text = L"Expected Qualifications";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Location = System::Drawing::Point(8, 475);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(66, 13);
			this->label41->TabIndex = 0;
			this->label41->Text = L"Futuer Plans";
			// 
			// textBoxFutuerPlans
			// 
			this->textBoxFutuerPlans->Location = System::Drawing::Point(12, 491);
			this->textBoxFutuerPlans->Multiline = true;
			this->textBoxFutuerPlans->Name = L"textBoxFutuerPlans";
			this->textBoxFutuerPlans->Size = System::Drawing::Size(497, 51);
			this->textBoxFutuerPlans->TabIndex = 7;
			// 
			// textBoxReasonForApplication
			// 
			this->textBoxReasonForApplication->Location = System::Drawing::Point(132, 205);
			this->textBoxReasonForApplication->Multiline = true;
			this->textBoxReasonForApplication->Name = L"textBoxReasonForApplication";
			this->textBoxReasonForApplication->Size = System::Drawing::Size(377, 38);
			this->textBoxReasonForApplication->TabIndex = 1;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(9, 208);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(117, 13);
			this->label29->TabIndex = 0;
			this->label29->Text = L"Reason For Application";
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->label28);
			this->groupBox8->Controls->Add(this->textBoxPastArrestComment);
			this->groupBox8->Controls->Add(this->checkBoxPastArrest);
			this->groupBox8->Controls->Add(this->textBoxIllegalDrugUserComment);
			this->groupBox8->Controls->Add(this->textBoxSmokerComment);
			this->groupBox8->Controls->Add(this->checkBoxUsesIntoxicatingBeverages);
			this->groupBox8->Controls->Add(this->checkBoxSmokes);
			this->groupBox8->Controls->Add(this->checkBoxUsesIllegalDrugs);
			this->groupBox8->Controls->Add(this->label25);
			this->groupBox8->Controls->Add(this->label23);
			this->groupBox8->Controls->Add(this->textBoxUsesIntoxicatingBeveragesComment);
			this->groupBox8->Location = System::Drawing::Point(11, 17);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(510, 160);
			this->groupBox8->TabIndex = 0;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"Behavior";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(262, 16);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(51, 13);
			this->label28->TabIndex = 69;
			this->label28->Text = L"Comment";
			// 
			// textBoxPastArrestComment
			// 
			this->textBoxPastArrestComment->Enabled = false;
			this->textBoxPastArrestComment->Location = System::Drawing::Point(265, 121);
			this->textBoxPastArrestComment->Name = L"textBoxPastArrestComment";
			this->textBoxPastArrestComment->Size = System::Drawing::Size(233, 20);
			this->textBoxPastArrestComment->TabIndex = 8;
			// 
			// checkBoxPastArrest
			// 
			this->checkBoxPastArrest->AutoSize = true;
			this->checkBoxPastArrest->Location = System::Drawing::Point(117, 123);
			this->checkBoxPastArrest->Name = L"checkBoxPastArrest";
			this->checkBoxPastArrest->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->checkBoxPastArrest->Size = System::Drawing::Size(77, 17);
			this->checkBoxPastArrest->TabIndex = 7;
			this->checkBoxPastArrest->Text = L"Past Arrest";
			this->checkBoxPastArrest->UseVisualStyleBackColor = true;
			// 
			// textBoxIllegalDrugUserComment
			// 
			this->textBoxIllegalDrugUserComment->Enabled = false;
			this->textBoxIllegalDrugUserComment->Location = System::Drawing::Point(265, 95);
			this->textBoxIllegalDrugUserComment->Name = L"textBoxIllegalDrugUserComment";
			this->textBoxIllegalDrugUserComment->Size = System::Drawing::Size(233, 20);
			this->textBoxIllegalDrugUserComment->TabIndex = 6;
			// 
			// textBoxSmokerComment
			// 
			this->textBoxSmokerComment->Enabled = false;
			this->textBoxSmokerComment->Location = System::Drawing::Point(265, 69);
			this->textBoxSmokerComment->Name = L"textBoxSmokerComment";
			this->textBoxSmokerComment->Size = System::Drawing::Size(233, 20);
			this->textBoxSmokerComment->TabIndex = 4;
			// 
			// checkBoxUsesIntoxicatingBeverages
			// 
			this->checkBoxUsesIntoxicatingBeverages->AutoSize = true;
			this->checkBoxUsesIntoxicatingBeverages->Location = System::Drawing::Point(6, 45);
			this->checkBoxUsesIntoxicatingBeverages->Name = L"checkBoxUsesIntoxicatingBeverages";
			this->checkBoxUsesIntoxicatingBeverages->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->checkBoxUsesIntoxicatingBeverages->Size = System::Drawing::Size(189, 17);
			this->checkBoxUsesIntoxicatingBeverages->TabIndex = 1;
			this->checkBoxUsesIntoxicatingBeverages->Text = L"Do you use intoxicating beverages";
			this->checkBoxUsesIntoxicatingBeverages->UseVisualStyleBackColor = true;
			// 
			// checkBoxSmokes
			// 
			this->checkBoxSmokes->AutoSize = true;
			this->checkBoxSmokes->Location = System::Drawing::Point(133, 71);
			this->checkBoxSmokes->Name = L"checkBoxSmokes";
			this->checkBoxSmokes->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->checkBoxSmokes->Size = System::Drawing::Size(62, 17);
			this->checkBoxSmokes->TabIndex = 3;
			this->checkBoxSmokes->Text = L"Smoker";
			this->checkBoxSmokes->UseVisualStyleBackColor = true;
			// 
			// checkBoxUsesIllegalDrugs
			// 
			this->checkBoxUsesIllegalDrugs->AutoSize = true;
			this->checkBoxUsesIllegalDrugs->Location = System::Drawing::Point(94, 97);
			this->checkBoxUsesIllegalDrugs->Name = L"checkBoxUsesIllegalDrugs";
			this->checkBoxUsesIllegalDrugs->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->checkBoxUsesIllegalDrugs->Size = System::Drawing::Size(100, 17);
			this->checkBoxUsesIllegalDrugs->TabIndex = 5;
			this->checkBoxUsesIllegalDrugs->Text = L"Illegal drug user";
			this->checkBoxUsesIllegalDrugs->UseVisualStyleBackColor = true;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(10, 59);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(0, 13);
			this->label25->TabIndex = 68;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(10, 19);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(0, 13);
			this->label23->TabIndex = 67;
			// 
			// textBoxUsesIntoxicatingBeveragesComment
			// 
			this->textBoxUsesIntoxicatingBeveragesComment->Enabled = false;
			this->textBoxUsesIntoxicatingBeveragesComment->Location = System::Drawing::Point(265, 43);
			this->textBoxUsesIntoxicatingBeveragesComment->Name = L"textBoxUsesIntoxicatingBeveragesComment";
			this->textBoxUsesIntoxicatingBeveragesComment->Size = System::Drawing::Size(233, 20);
			this->textBoxUsesIntoxicatingBeveragesComment->TabIndex = 2;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(237, 58);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(0, 13);
			this->label24->TabIndex = 69;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->buttonPrevious2);
			this->tabPage3->Controls->Add(this->buttonSubmit);
			this->tabPage3->Controls->Add(this->groupBox13);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(689, 375);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Page 3";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// buttonPrevious2
			// 
			this->buttonPrevious2->Location = System::Drawing::Point(522, 214);
			this->buttonPrevious2->Name = L"buttonPrevious2";
			this->buttonPrevious2->Size = System::Drawing::Size(75, 23);
			this->buttonPrevious2->TabIndex = 11;
			this->buttonPrevious2->Text = L"Previous";
			this->buttonPrevious2->UseVisualStyleBackColor = true;
			this->buttonPrevious2->Click += gcnew System::EventHandler(this, &AddStudentDialog::buttonPrevious2_Click);
			// 
			// buttonSubmit
			// 
			this->buttonSubmit->Location = System::Drawing::Point(603, 214);
			this->buttonSubmit->Name = L"buttonSubmit";
			this->buttonSubmit->Size = System::Drawing::Size(75, 23);
			this->buttonSubmit->TabIndex = 10;
			this->buttonSubmit->Text = L"Submit";
			this->buttonSubmit->UseVisualStyleBackColor = true;
			this->buttonSubmit->Click += gcnew System::EventHandler(this, &AddStudentDialog::buttonSubmit_Click);
			// 
			// groupBox13
			// 
			this->groupBox13->Controls->Add(this->dataGridView);
			this->groupBox13->Location = System::Drawing::Point(8, 20);
			this->groupBox13->Name = L"groupBox13";
			this->groupBox13->Size = System::Drawing::Size(673, 188);
			this->groupBox13->TabIndex = 0;
			this->groupBox13->TabStop = false;
			this->groupBox13->Text = L"Transcript";
			// 
			// dataGridView
			// 
			this->dataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {this->CourseNumber, 
				this->TitleOfCourse, this->Grade, this->Hours, this->Points});
			this->dataGridView->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView->Location = System::Drawing::Point(3, 16);
			this->dataGridView->Name = L"dataGridView";
			this->dataGridView->Size = System::Drawing::Size(667, 169);
			this->dataGridView->TabIndex = 5;
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
			this->TitleOfCourse->Width = 340;
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
			// AddStudentDialog
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(697, 628);
			this->Controls->Add(this->splitContainer1);
			this->Name = L"AddStudentDialog";
			this->Text = L"AddStudentDialog";
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel1->PerformLayout();
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxLogo))->EndInit();
			this->splitContainer2->Panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer2))->EndInit();
			this->splitContainer2->ResumeLayout(false);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->groupBox14->ResumeLayout(false);
			this->groupBox14->PerformLayout();
			this->groupBox11->ResumeLayout(false);
			this->groupBox11->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown2))->EndInit();
			this->groupBox12->ResumeLayout(false);
			this->groupBox12->PerformLayout();
			this->groupBox10->ResumeLayout(false);
			this->groupBox10->PerformLayout();
			this->groupBox9->ResumeLayout(false);
			this->groupBox9->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDownYoungerSiblings))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDownOlderSiblings))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->groupBox13->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void buttonPrevious2_Click(System::Object^  sender, System::EventArgs^  e)
	{
       tabControl1->SelectTab(1);
	}
	private: System::Void buttonNextPage_Click(System::Object^  sender, System::EventArgs^  e)
	{
		tabControl1->SelectTab(1);
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		tabControl1->SelectTab(2);
	}
	private: System::Void buttonPrevious_Click(System::Object^  sender, System::EventArgs^  e)
	{
		tabControl1->SelectTab(0);
	}
		 void Clear()
		 {
		    textBoxFirstName->Clear();
			textBoxLastName->Clear();
			textBoxMiddleNames->Clear();
			textBoxAddress->Clear();
			//comboBoxSex->Clear();
			//dateTimePickerApplicationDate;
			//dateTimePickerDateOfBirth;
			textBoxPlaceOfBirth->Clear();
			textBoxParentOrGuardiansName->Clear();
			textBoxParentOrGuardianAddress->Clear();
			textBoxMothersOccupation->Clear();
			textBoxFathersOccupation->Clear();
			numericUpDownOlderSiblings->Value = 0;
			numericUpDownYoungerSiblings->Value = 0;
			checkBoxBaptised->Checked = false;
			//dateTimePickerDateOfBaptism;
			checkBoxAttendedHighSchool->Checked = false;
			textBoxNameOfHighSchool->Clear();
			textBoxAddressOfHighSchool->Clear();
			checkBoxCompletedHighSchool->Checked = false;
			textBoxMinisterFirstName->Clear();
			textBoxMinisterAddress->Clear();
			textBoxChristianWork->Clear();
			textBoxChurchName->Clear();
			textBoxChurchAddress->Clear();
			textBoxElder1Name->Clear();
			textBoxElder1Address->Clear();
			textBoxElder2Name->Clear();
			textBoxElder2Address->Clear();
			textBoxEmployer1Name->Clear();
			textBoxEmployer1Address->Clear();
			textBoxEmployer2Name->Clear();
			textBoxEmployer2Address->Clear();
			checkBoxUsesIntoxicatingBeverages->Checked = false;
			checkBoxSmokes->Checked = false;
			checkBoxUsesIllegalDrugs->Checked = false;
			checkBoxPastArrest->Checked = false;
			checkBoxPlanToGraduate->Checked = false;
		    textBoxExpectedDurationOfStudy->Clear();
			checkedListBoxExpectedQualifications->ClearSelected();
			checkBoxTransferStudent->Checked = false;
			textBoxReasonForTransfer->Clear();
		    textBoxFutuerPlans->Clear();
		 }
	private: System::Void buttonSubmit_Click(System::Object^  sender, System::EventArgs^  e)
	{
			 try
			 {
				dataAccessClass->FillDataSet( "Student" );
				System::Data::DataRow^ dataRow = dataAccessClass->dataSet->Tables[ "Student" ]->NewRow();
				dataRow["ID"]                        = dataAccessClass->dataSet->Tables[ "Student" ]->Rows->Count;
				if( textBoxFirstName->Text->Length == 0 )
				{
					System::Exception^ ex = gcnew System::Exception("First_Name is a required field.");
					dataRow["First_Name"]                = textBoxFirstName->Text;
					throw ex;
				}
				else
				{
					dataRow["First_Name"]                = textBoxFirstName->Text;
				}
				dataRow["Last_Name"]                 = textBoxLastName->Text;
				dataRow["Middle_Names"]              = textBoxMiddleNames->Text;
				dataRow["Address"]                   = textBoxAddress->Text;
				dataRow["Sex"]                       = comboBoxSex->Text;
				dataRow["Application_Date"]          = dateTimePickerApplicationDate->Text;
				dataRow["Date_of_Birth"]             = dateTimePickerDateOfBirth->Text;
				dataRow["Place_of_Birth"]            = textBoxPlaceOfBirth->Text;
				dataRow["GuardiansName"]             = textBoxParentOrGuardiansName->Text;
				dataRow["GuardiansAddress"]          = textBoxParentOrGuardianAddress->Text;
				dataRow["MothersOccupation"]         = textBoxMothersOccupation->Text;
				dataRow["FathersOccupation"]         = textBoxFathersOccupation->Text;
				dataRow["Older_Siblings"]            = numericUpDownOlderSiblings->Value;
				dataRow["Younger_Siblings"]          = numericUpDownYoungerSiblings->Value;
				dataRow["Baptised"]                  = checkBoxBaptised->Checked;
				dataRow["Date_of_Baptism"]           = dateTimePickerDateOfBaptism->Text;
				dataRow["Attended_High_School"]      = checkBoxAttendedHighSchool->Checked;

				if( checkBoxAttendedHighSchool->Checked == true )
				{
					dataRow["Name_of_High_School"]   = textBoxNameOfHighSchool->Text;
					dataRow["Address_of_High_School"]= textBoxAddressOfHighSchool->Text;
					dataRow["Completed_High_School"] = checkBoxCompletedHighSchool->Checked;
				}
				else
				{
					dataRow["Name_of_High_School"]   = gcnew System::String("");
					dataRow["Address_of_High_School"]= gcnew System::String("");
					dataRow["Completed_High_School"] = gcnew System::Boolean( false );
				}
				dataRow["Ministers_Name"]            = textBoxMinisterFirstName->Text;
				dataRow["Ministers_Address"]         = textBoxMinisterAddress->Text;
				dataRow["Christian_Work_Performed"]  = textBoxChristianWork->Text;
				dataRow["Church_Name"]               = textBoxChurchName->Text;
				dataRow["Church_Address"]            = textBoxChurchAddress->Text;
				dataRow["Elder_1_Name"]              = textBoxElder1Name->Text;
				dataRow["Elder_1_Address"]           = textBoxElder1Address->Text;
				dataRow["Elder_2_Name"]              = textBoxElder2Name->Text;
				dataRow["Elder_2_Address"]           = textBoxElder2Address->Text;
				dataRow["Employer_1_Name"]           = textBoxEmployer1Name->Text;
				dataRow["Employer_1_Address"]        = textBoxEmployer1Address->Text;
				dataRow["Employer_2_Name"]           = textBoxEmployer2Name->Text;
				dataRow["Employer_2_Address"]        = textBoxEmployer2Address->Text;
				dataRow["UsesIntoxicatingBeverages"] = checkBoxUsesIntoxicatingBeverages->Checked;
				dataRow["Smoker"]                    = checkBoxSmokes->Checked;
				dataRow["IllegalDrugUser"]           = checkBoxUsesIllegalDrugs->Checked;
				dataRow["PastArrest"]                = checkBoxPastArrest->Checked;
				dataRow["Plan_to_Graduate"]          = checkBoxPlanToGraduate->Checked;
				dataRow["ExpectedDurationOfStudy"]   = textBoxExpectedDurationOfStudy->Text;
				dataRow["ExpectedQualifications"]    = checkedListBoxExpectedQualifications->Items[0];//checkedListBoxExpectedQualifications->CheckedItems[0];
				dataRow["TransferStudent"]           = checkBoxTransferStudent->Checked;
				dataRow["ReasonForTransfer"]         = textBoxReasonForTransfer->Text;
				dataRow["FutuerPlans"]               = textBoxFutuerPlans->Text;
				
				
				dataAccessClass->dataSet->Tables[ "Student" ]->Rows->Add( dataRow );
				dataAccessClass->Update( "Student" );
				dataAccessClass->dataSet->AcceptChanges();
				dataAccessClass->FillDataSet( "Student" );

				using namespace System::Windows::Forms;
				System::Windows::Forms::DialogResult result;
				result = MessageBox::Show( "Add another?", "Record Successfully Added!", MessageBoxButtons::YesNo, 
					                       MessageBoxIcon::Question );
				if ( result == ::DialogResult::No )
                {
                   this->Close();
                }
				else
				{
				   this->Clear();
				}
			 }
			 catch( System::Exception^ e )
			 {
				 using namespace System::Windows::Forms;
				 MessageBox::Show( e->Message, "Error", MessageBoxButtons::OK, 
						           MessageBoxIcon::Exclamation );
			 }
	}
};
}
