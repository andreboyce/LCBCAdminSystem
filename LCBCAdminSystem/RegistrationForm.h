#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace LCBCAdminSystem {

	/// <summary>
	/// Summary for RegistrationForm
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class RegistrationForm : public System::Windows::Forms::Form
	{
	public:
		RegistrationForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~RegistrationForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::StatusStrip^  statusStrip;
	protected: 
	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	private: System::Windows::Forms::SplitContainer^  splitContainer2;
	private: System::Windows::Forms::SplitContainer^  splitContainer3;
	private: System::Windows::Forms::PictureBox^  pictureBoxLogo;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker2;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
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
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::DataGridView^  dataGridView;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  CourseNumber;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  TitleOfCourse;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Grade;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Hours;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Points;
	private: System::Windows::Forms::Button^  buttonPrint;
	private: System::Windows::Forms::Button^  buttonSave;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(RegistrationForm::typeid));
			this->statusStrip = (gcnew System::Windows::Forms::StatusStrip());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->splitContainer2 = (gcnew System::Windows::Forms::SplitContainer());
			this->splitContainer3 = (gcnew System::Windows::Forms::SplitContainer());
			this->buttonPrint = (gcnew System::Windows::Forms::Button());
			this->buttonSave = (gcnew System::Windows::Forms::Button());
			this->pictureBoxLogo = (gcnew System::Windows::Forms::PictureBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->CourseNumber = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TitleOfCourse = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Grade = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Hours = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Points = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->splitContainer2->Panel1->SuspendLayout();
			this->splitContainer2->Panel2->SuspendLayout();
			this->splitContainer2->SuspendLayout();
			this->splitContainer3->Panel1->SuspendLayout();
			this->splitContainer3->Panel2->SuspendLayout();
			this->splitContainer3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxLogo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// statusStrip
			// 
			this->statusStrip->Location = System::Drawing::Point(0, 603);
			this->statusStrip->Name = L"statusStrip";
			this->statusStrip->Size = System::Drawing::Size(592, 22);
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
			this->splitContainer1->Panel1->Controls->Add(this->label1);
			this->splitContainer1->Panel1->Controls->Add(this->label2);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->splitContainer2);
			this->splitContainer1->Size = System::Drawing::Size(592, 603);
			this->splitContainer1->SplitterDistance = 40;
			this->splitContainer1->SplitterWidth = 6;
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
			this->splitContainer2->Panel1->Controls->Add(this->splitContainer3);
			// 
			// splitContainer2.Panel2
			// 
			this->splitContainer2->Panel2->Controls->Add(this->buttonPrint);
			this->splitContainer2->Panel2->Controls->Add(this->buttonSave);
			this->splitContainer2->Size = System::Drawing::Size(592, 557);
			this->splitContainer2->SplitterDistance = 518;
			this->splitContainer2->SplitterWidth = 6;
			this->splitContainer2->TabIndex = 0;
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
			this->splitContainer3->Panel1->Controls->Add(this->pictureBoxLogo);
			this->splitContainer3->Panel1->Controls->Add(this->textBox14);
			this->splitContainer3->Panel1->Controls->Add(this->textBox13);
			this->splitContainer3->Panel1->Controls->Add(this->textBox12);
			this->splitContainer3->Panel1->Controls->Add(this->label18);
			this->splitContainer3->Panel1->Controls->Add(this->textBox11);
			this->splitContainer3->Panel1->Controls->Add(this->textBox10);
			this->splitContainer3->Panel1->Controls->Add(this->label17);
			this->splitContainer3->Panel1->Controls->Add(this->label16);
			this->splitContainer3->Panel1->Controls->Add(this->dateTimePicker2);
			this->splitContainer3->Panel1->Controls->Add(this->textBox9);
			this->splitContainer3->Panel1->Controls->Add(this->textBox8);
			this->splitContainer3->Panel1->Controls->Add(this->textBox7);
			this->splitContainer3->Panel1->Controls->Add(this->textBox6);
			this->splitContainer3->Panel1->Controls->Add(this->textBox5);
			this->splitContainer3->Panel1->Controls->Add(this->textBox4);
			this->splitContainer3->Panel1->Controls->Add(this->textBox3);
			this->splitContainer3->Panel1->Controls->Add(this->textBox2);
			this->splitContainer3->Panel1->Controls->Add(this->label15);
			this->splitContainer3->Panel1->Controls->Add(this->label14);
			this->splitContainer3->Panel1->Controls->Add(this->label13);
			this->splitContainer3->Panel1->Controls->Add(this->label12);
			this->splitContainer3->Panel1->Controls->Add(this->label11);
			this->splitContainer3->Panel1->Controls->Add(this->label10);
			this->splitContainer3->Panel1->Controls->Add(this->label9);
			this->splitContainer3->Panel1->Controls->Add(this->label8);
			this->splitContainer3->Panel1->Controls->Add(this->label7);
			this->splitContainer3->Panel1->Controls->Add(this->label6);
			this->splitContainer3->Panel1->Controls->Add(this->label5);
			this->splitContainer3->Panel1->Controls->Add(this->label4);
			this->splitContainer3->Panel1->Controls->Add(this->label3);
			this->splitContainer3->Panel1->Controls->Add(this->textBox1);
			this->splitContainer3->Panel1->Controls->Add(this->checkBox3);
			this->splitContainer3->Panel1->Controls->Add(this->checkBox2);
			this->splitContainer3->Panel1->Controls->Add(this->checkBox1);
			this->splitContainer3->Panel1->Controls->Add(this->dateTimePicker1);
			this->splitContainer3->Panel1->Controls->Add(this->label23);
			// 
			// splitContainer3.Panel2
			// 
			this->splitContainer3->Panel2->Controls->Add(this->dataGridView);
			this->splitContainer3->Size = System::Drawing::Size(592, 518);
			this->splitContainer3->SplitterDistance = 365;
			this->splitContainer3->SplitterWidth = 6;
			this->splitContainer3->TabIndex = 0;
			// 
			// buttonPrint
			// 
			this->buttonPrint->Location = System::Drawing::Point(514, 3);
			this->buttonPrint->Name = L"buttonPrint";
			this->buttonPrint->Size = System::Drawing::Size(75, 23);
			this->buttonPrint->TabIndex = 173;
			this->buttonPrint->Text = L"Print";
			this->buttonPrint->UseVisualStyleBackColor = true;
			// 
			// buttonSave
			// 
			this->buttonSave->Location = System::Drawing::Point(433, 3);
			this->buttonSave->Name = L"buttonSave";
			this->buttonSave->Size = System::Drawing::Size(75, 23);
			this->buttonSave->TabIndex = 172;
			this->buttonSave->Text = L"Save";
			this->buttonSave->UseVisualStyleBackColor = true;
			// 
			// pictureBoxLogo
			// 
			this->pictureBoxLogo->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBoxLogo.Image")));
			this->pictureBoxLogo->Location = System::Drawing::Point(466, 96);
			this->pictureBoxLogo->Name = L"pictureBoxLogo";
			this->pictureBoxLogo->Size = System::Drawing::Size(109, 131);
			this->pictureBoxLogo->TabIndex = 170;
			this->pictureBoxLogo->TabStop = false;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(346, 89);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(100, 20);
			this->textBox14->TabIndex = 169;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(266, 183);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(100, 20);
			this->textBox13->TabIndex = 168;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(145, 226);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(221, 20);
			this->textBox12->TabIndex = 167;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(422, 275);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(45, 13);
			this->label18->TabIndex = 166;
			this->label18->Text = L"Tel. No.";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(495, 271);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(66, 20);
			this->textBox11->TabIndex = 165;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(495, 309);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(66, 20);
			this->textBox10->TabIndex = 164;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(242, 92);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(45, 13);
			this->label17->TabIndex = 163;
			this->label17->Text = L"Tel. No.";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(242, 61);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(66, 13);
			this->label16->TabIndex = 162;
			this->label16->Text = L"Date of Birth";
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point(313, 57);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker2->TabIndex = 161;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(313, 307);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 20);
			this->textBox9->TabIndex = 160;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(313, 272);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 20);
			this->textBox8->TabIndex = 159;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(112, 272);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 158;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(72, 307);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 157;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(346, 121);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 156;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(99, 154);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 155;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(85, 125);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(114, 20);
			this->textBox3->TabIndex = 154;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(58, 89);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(141, 20);
			this->textBox2->TabIndex = 153;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(228, 342);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(102, 13);
			this->label15->TabIndex = 152;
			this->label15->Text = L"CLASS SCHEDULE";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(422, 312);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(67, 13);
			this->label14->TabIndex = 151;
			this->label14->Text = L"Work Phone";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(228, 310);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(78, 13);
			this->label13->TabIndex = 150;
			this->label13->Text = L"Working Hours";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(4, 310);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(50, 13);
			this->label12->TabIndex = 149;
			this->label12->Text = L"Employer";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(224, 274);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(65, 13);
			this->label11->TabIndex = 148;
			this->label11->Text = L"Relationship";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(7, 275);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(102, 13);
			this->label10->TabIndex = 147;
			this->label10->Text = L"In Emergency Notify";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(7, 229);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(139, 13);
			this->label9->TabIndex = 146;
			this->label9->Text = L"Address of Parent/Guardian";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(7, 186);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(263, 13);
			this->label8->TabIndex = 145;
			this->label8->Text = L"Name of Parent/Guardian (If single and living at home)";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(7, 157);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(89, 13);
			this->label7->TabIndex = 144;
			this->label7->Text = L"Ministers Address";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(242, 125);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(81, 13);
			this->label6->TabIndex = 143;
			this->label6->Text = L"Minister\'s Name";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(7, 128);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(72, 13);
			this->label5->TabIndex = 142;
			this->label5->Text = L"Home Church";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(7, 96);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(45, 13);
			this->label4->TabIndex = 141;
			this->label4->Text = L"Address";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(7, 63);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 140;
			this->label3->Text = L"Name";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(59, 60);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(140, 20);
			this->textBox1->TabIndex = 139;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->checkBox3->Location = System::Drawing::Point(137, 18);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(75, 17);
			this->checkBox3->TabIndex = 138;
			this->checkBox3->Text = L"ShortTerm";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->checkBox2->Location = System::Drawing::Point(72, 18);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(59, 17);
			this->checkBox2->TabIndex = 137;
			this->checkBox2->Text = L"Term 2";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->CheckAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->checkBox1->Location = System::Drawing::Point(7, 18);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(59, 17);
			this->checkBox1->TabIndex = 136;
			this->checkBox1->Text = L"Term 1";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(251, 15);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(186, 20);
			this->dateTimePicker1->TabIndex = 135;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(215, 20);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(30, 13);
			this->label23->TabIndex = 134;
			this->label23->Text = L"Date";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(151, 22);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(139, 13);
			this->label2->TabIndex = 133;
			this->label2->Text = L"REGISTRATION FORM";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(117, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(225, 13);
			this->label1->TabIndex = 132;
			this->label1->Text = L"LOWER CARIBBEAN BIBLE COLLEGE";
			// 
			// dataGridView
			// 
			this->dataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {this->CourseNumber, 
				this->TitleOfCourse, this->Grade, this->Hours, this->Points});
			this->dataGridView->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView->Location = System::Drawing::Point(0, 0);
			this->dataGridView->Name = L"dataGridView";
			this->dataGridView->Size = System::Drawing::Size(592, 147);
			this->dataGridView->TabIndex = 172;
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
			// RegistrationForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(592, 625);
			this->Controls->Add(this->splitContainer1);
			this->Controls->Add(this->statusStrip);
			this->MinimumSize = System::Drawing::Size(600, 659);
			this->Name = L"RegistrationForm";
			this->Text = L"RegistrationForm";
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel1->PerformLayout();
			this->splitContainer1->Panel2->ResumeLayout(false);
			this->splitContainer1->ResumeLayout(false);
			this->splitContainer2->Panel1->ResumeLayout(false);
			this->splitContainer2->Panel2->ResumeLayout(false);
			this->splitContainer2->ResumeLayout(false);
			this->splitContainer3->Panel1->ResumeLayout(false);
			this->splitContainer3->Panel1->PerformLayout();
			this->splitContainer3->Panel2->ResumeLayout(false);
			this->splitContainer3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxLogo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
