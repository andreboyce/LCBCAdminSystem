#pragma once

#include "UsersAndGroupsDialog.h"
#include "UserNameAndPassword.h"
#include "LoginDialog.h"
#include "AddStudentDialog.h"
#include "BackupDialog.h"
#include "Reciepts.h"
#include "Students.h"
#include "Applicants.h"
#include "ItemsPurchaseable.h"
#include "print.h"
#include "GradePointForm.h"
#include "PaymentForm.h"
#include "LoadPanel.h"
#include "DataAccessClass.h"
#include "configclass.h"
#include "AboutDialog.h"
#include "ApplicaionForm.h"
#include "Find Dialog.h"
#include "Courses.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace LCBCAdminSystem
{

	/// <summary>
	/// Summary for StartOptionsDialog
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class StartOptionsDialog : public System::Windows::Forms::Form
	{
	public:
		StartOptionsDialog(void)
		{
			InitializeComponent();
			configClass = gcnew LCBCAdminSystem::ConfigClass();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StartOptionsDialog()
		{
			if (components)
			{
				delete components;
			}
		}
	private: LCBCAdminSystem::ConfigClass^ configClass;


	protected: 






















	private: System::Windows::Forms::MenuStrip^  menuStrip;

	private: System::Windows::Forms::StatusStrip^  statusStrip;

	private: System::Windows::Forms::ToolStrip^  toolStrip;

	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;











	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  contentsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;



	private: System::Windows::Forms::ToolStripDropDownButton^  toolStripDropDownButtonApplicants;

	private: System::Windows::Forms::ToolStripMenuItem^  viewToolStripMenuItem;


	private: System::Windows::Forms::ToolStripDropDownButton^  toolStripDropDownButtonStudents;

	private: System::Windows::Forms::ToolStripMenuItem^  viewToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  addToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripDropDownButton^  toolStripDropDownButtonReciepts;

	private: System::Windows::Forms::ToolStripMenuItem^  newToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  viewToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  itemsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripButton^  toolStripButtonBackup;
	private: System::Windows::Forms::ToolStripButton^  toolStripButtonGradePoint;
	private: System::Windows::Forms::ToolStripButton^  toolStripButtonCourses;
	private: System::Windows::Forms::ToolStripMenuItem^  addToolStripMenuItem;


	private: System::Windows::Forms::ToolStripButton^  toolStripButtonSearch;
	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	private: System::Windows::Forms::SplitContainer^  splitContainer2;
	private: System::Windows::Forms::SplitContainer^  splitContainer3;
	private: System::Windows::Forms::SplitContainer^  splitContainer4;
	private: System::Windows::Forms::GroupBox^  groupBox8;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::GroupBox^  groupBox7;
	private: System::Windows::Forms::Button^  buttonSearch;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  groupBox6;
	private: System::Windows::Forms::Button^  buttonViewGradePoint;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::Button^  buttonManageBackup;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::Button^  buttonItems;
	private: System::Windows::Forms::Button^  buttonNewReciept;
	private: System::Windows::Forms::Button^  buttonViewReciepts;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Button^  buttonAddStudents;
	private: System::Windows::Forms::Button^  buttonViewStudents;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  buttonManageCourses;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  buttonAddApplicants;
	private: System::Windows::Forms::Button^  buttonViewApplicants;









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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(StartOptionsDialog::typeid));
			this->menuStrip = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contentsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->statusStrip = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStrip = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripDropDownButtonApplicants = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->viewToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripDropDownButtonStudents = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->viewToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripDropDownButtonReciepts = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->newToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->viewToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->itemsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripButtonBackup = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButtonGradePoint = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButtonCourses = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButtonSearch = (gcnew System::Windows::Forms::ToolStripButton());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->splitContainer2 = (gcnew System::Windows::Forms::SplitContainer());
			this->splitContainer3 = (gcnew System::Windows::Forms::SplitContainer());
			this->splitContainer4 = (gcnew System::Windows::Forms::SplitContainer());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->buttonSearch = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->buttonViewGradePoint = (gcnew System::Windows::Forms::Button());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->buttonManageBackup = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->buttonItems = (gcnew System::Windows::Forms::Button());
			this->buttonNewReciept = (gcnew System::Windows::Forms::Button());
			this->buttonViewReciepts = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->buttonAddStudents = (gcnew System::Windows::Forms::Button());
			this->buttonViewStudents = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->buttonManageCourses = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->buttonAddApplicants = (gcnew System::Windows::Forms::Button());
			this->buttonViewApplicants = (gcnew System::Windows::Forms::Button());
			this->menuStrip->SuspendLayout();
			this->toolStrip->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->splitContainer2->Panel1->SuspendLayout();
			this->splitContainer2->SuspendLayout();
			this->splitContainer3->Panel2->SuspendLayout();
			this->splitContainer3->SuspendLayout();
			this->splitContainer4->Panel1->SuspendLayout();
			this->splitContainer4->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->groupBox4->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip
			// 
			this->menuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->fileToolStripMenuItem, 
				this->helpToolStripMenuItem});
			this->menuStrip->Location = System::Drawing::Point(0, 0);
			this->menuStrip->Name = L"menuStrip";
			this->menuStrip->Padding = System::Windows::Forms::Padding(8, 2, 0, 2);
			this->menuStrip->Size = System::Drawing::Size(737, 26);
			this->menuStrip->TabIndex = 4;
			this->menuStrip->Text = L"menuStrip";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->exitToolStripMenuItem});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(40, 22);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(114, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &StartOptionsDialog::exitToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->contentsToolStripMenuItem, 
				this->aboutToolStripMenuItem});
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(48, 22);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// contentsToolStripMenuItem
			// 
			this->contentsToolStripMenuItem->Name = L"contentsToolStripMenuItem";
			this->contentsToolStripMenuItem->Size = System::Drawing::Size(149, 22);
			this->contentsToolStripMenuItem->Text = L"Contents";
			this->contentsToolStripMenuItem->Click += gcnew System::EventHandler(this, &StartOptionsDialog::contentsToolStripMenuItem_Click);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(149, 22);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &StartOptionsDialog::aboutToolStripMenuItem_Click);
			// 
			// statusStrip
			// 
			this->statusStrip->Location = System::Drawing::Point(0, 415);
			this->statusStrip->Name = L"statusStrip";
			this->statusStrip->Padding = System::Windows::Forms::Padding(1, 0, 19, 0);
			this->statusStrip->Size = System::Drawing::Size(737, 22);
			this->statusStrip->TabIndex = 5;
			this->statusStrip->Text = L"statusStrip";
			// 
			// toolStrip
			// 
			this->toolStrip->GripStyle = System::Windows::Forms::ToolStripGripStyle::Hidden;
			this->toolStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {this->toolStripDropDownButtonApplicants, 
				this->toolStripDropDownButtonStudents, this->toolStripDropDownButtonReciepts, this->toolStripButtonBackup, this->toolStripButtonGradePoint, 
				this->toolStripButtonCourses, this->toolStripButtonSearch});
			this->toolStrip->Location = System::Drawing::Point(0, 26);
			this->toolStrip->Name = L"toolStrip";
			this->toolStrip->RenderMode = System::Windows::Forms::ToolStripRenderMode::Professional;
			this->toolStrip->Size = System::Drawing::Size(737, 25);
			this->toolStrip->TabIndex = 6;
			this->toolStrip->Text = L"toolStrip";
			// 
			// toolStripDropDownButtonApplicants
			// 
			this->toolStripDropDownButtonApplicants->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->viewToolStripMenuItem, 
				this->addToolStripMenuItem});
			this->toolStripDropDownButtonApplicants->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripDropDownButtonApplicants.Image")));
			this->toolStripDropDownButtonApplicants->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripDropDownButtonApplicants->Name = L"toolStripDropDownButtonApplicants";
			this->toolStripDropDownButtonApplicants->Size = System::Drawing::Size(101, 22);
			this->toolStripDropDownButtonApplicants->Text = L"Applicants";
			// 
			// viewToolStripMenuItem
			// 
			this->viewToolStripMenuItem->Name = L"viewToolStripMenuItem";
			this->viewToolStripMenuItem->Size = System::Drawing::Size(120, 22);
			this->viewToolStripMenuItem->Text = L"View";
			this->viewToolStripMenuItem->Click += gcnew System::EventHandler(this, &StartOptionsDialog::viewToolStripMenuItem_Click);
			// 
			// addToolStripMenuItem
			// 
			this->addToolStripMenuItem->Name = L"addToolStripMenuItem";
			this->addToolStripMenuItem->Size = System::Drawing::Size(120, 22);
			this->addToolStripMenuItem->Text = L"Add";
			this->addToolStripMenuItem->Click += gcnew System::EventHandler(this, &StartOptionsDialog::addToolStripMenuItem_Click);
			// 
			// toolStripDropDownButtonStudents
			// 
			this->toolStripDropDownButtonStudents->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->viewToolStripMenuItem1, 
				this->addToolStripMenuItem1});
			this->toolStripDropDownButtonStudents->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripDropDownButtonStudents.Image")));
			this->toolStripDropDownButtonStudents->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripDropDownButtonStudents->Name = L"toolStripDropDownButtonStudents";
			this->toolStripDropDownButtonStudents->Size = System::Drawing::Size(94, 22);
			this->toolStripDropDownButtonStudents->Text = L"Students";
			// 
			// viewToolStripMenuItem1
			// 
			this->viewToolStripMenuItem1->Name = L"viewToolStripMenuItem1";
			this->viewToolStripMenuItem1->Size = System::Drawing::Size(120, 22);
			this->viewToolStripMenuItem1->Text = L"View";
			this->viewToolStripMenuItem1->Click += gcnew System::EventHandler(this, &StartOptionsDialog::viewToolStripMenuItem1_Click);
			// 
			// addToolStripMenuItem1
			// 
			this->addToolStripMenuItem1->Name = L"addToolStripMenuItem1";
			this->addToolStripMenuItem1->Size = System::Drawing::Size(120, 22);
			this->addToolStripMenuItem1->Text = L"Add";
			this->addToolStripMenuItem1->Click += gcnew System::EventHandler(this, &StartOptionsDialog::addToolStripMenuItem1_Click);
			// 
			// toolStripDropDownButtonReciepts
			// 
			this->toolStripDropDownButtonReciepts->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->newToolStripMenuItem, 
				this->viewToolStripMenuItem2, this->itemsToolStripMenuItem});
			this->toolStripDropDownButtonReciepts->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripDropDownButtonReciepts.Image")));
			this->toolStripDropDownButtonReciepts->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripDropDownButtonReciepts->Name = L"toolStripDropDownButtonReciepts";
			this->toolStripDropDownButtonReciepts->Size = System::Drawing::Size(91, 22);
			this->toolStripDropDownButtonReciepts->Text = L"Receipts";
			// 
			// newToolStripMenuItem
			// 
			this->newToolStripMenuItem->Name = L"newToolStripMenuItem";
			this->newToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->newToolStripMenuItem->Text = L"New";
			this->newToolStripMenuItem->Click += gcnew System::EventHandler(this, &StartOptionsDialog::newToolStripMenuItem_Click);
			// 
			// viewToolStripMenuItem2
			// 
			this->viewToolStripMenuItem2->Name = L"viewToolStripMenuItem2";
			this->viewToolStripMenuItem2->Size = System::Drawing::Size(152, 22);
			this->viewToolStripMenuItem2->Text = L"View";
			this->viewToolStripMenuItem2->Click += gcnew System::EventHandler(this, &StartOptionsDialog::viewToolStripMenuItem2_Click);
			// 
			// itemsToolStripMenuItem
			// 
			this->itemsToolStripMenuItem->Name = L"itemsToolStripMenuItem";
			this->itemsToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->itemsToolStripMenuItem->Text = L"Items";
			this->itemsToolStripMenuItem->Click += gcnew System::EventHandler(this, &StartOptionsDialog::itemsToolStripMenuItem_Click);
			// 
			// toolStripButtonBackup
			// 
			this->toolStripButtonBackup->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButtonBackup.Image")));
			this->toolStripButtonBackup->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButtonBackup->Name = L"toolStripButtonBackup";
			this->toolStripButtonBackup->Size = System::Drawing::Size(75, 22);
			this->toolStripButtonBackup->Text = L"Backup";
			this->toolStripButtonBackup->Click += gcnew System::EventHandler(this, &StartOptionsDialog::toolStripButtonBackup_Click);
			// 
			// toolStripButtonGradePoint
			// 
			this->toolStripButtonGradePoint->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButtonGradePoint.Image")));
			this->toolStripButtonGradePoint->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButtonGradePoint->Name = L"toolStripButtonGradePoint";
			this->toolStripButtonGradePoint->Size = System::Drawing::Size(98, 22);
			this->toolStripButtonGradePoint->Text = L"GradePoint";
			this->toolStripButtonGradePoint->Click += gcnew System::EventHandler(this, &StartOptionsDialog::toolStripButtonGradePoint_Click);
			// 
			// toolStripButtonCourses
			// 
			this->toolStripButtonCourses->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButtonCourses.Image")));
			this->toolStripButtonCourses->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButtonCourses->Name = L"toolStripButtonCourses";
			this->toolStripButtonCourses->Size = System::Drawing::Size(80, 22);
			this->toolStripButtonCourses->Text = L"Courses";
			this->toolStripButtonCourses->Click += gcnew System::EventHandler(this, &StartOptionsDialog::toolStripButtonCourses_Click);
			// 
			// toolStripButtonSearch
			// 
			this->toolStripButtonSearch->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButtonSearch.Image")));
			this->toolStripButtonSearch->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButtonSearch->Name = L"toolStripButtonSearch";
			this->toolStripButtonSearch->Size = System::Drawing::Size(72, 22);
			this->toolStripButtonSearch->Text = L"Search";
			this->toolStripButtonSearch->Click += gcnew System::EventHandler(this, &StartOptionsDialog::toolStripButtonSearch_Click);
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->FixedPanel = System::Windows::Forms::FixedPanel::Panel1;
			this->splitContainer1->Location = System::Drawing::Point(0, 51);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->splitContainer2);
			this->splitContainer1->Size = System::Drawing::Size(737, 364);
			this->splitContainer1->SplitterDistance = 25;
			this->splitContainer1->SplitterWidth = 8;
			this->splitContainer1->TabIndex = 7;
			// 
			// splitContainer2
			// 
			this->splitContainer2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer2->FixedPanel = System::Windows::Forms::FixedPanel::Panel2;
			this->splitContainer2->Location = System::Drawing::Point(0, 0);
			this->splitContainer2->Name = L"splitContainer2";
			// 
			// splitContainer2.Panel1
			// 
			this->splitContainer2->Panel1->Controls->Add(this->splitContainer3);
			this->splitContainer2->Size = System::Drawing::Size(704, 364);
			this->splitContainer2->SplitterDistance = 661;
			this->splitContainer2->SplitterWidth = 8;
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
			// splitContainer3.Panel2
			// 
			this->splitContainer3->Panel2->Controls->Add(this->splitContainer4);
			this->splitContainer3->Size = System::Drawing::Size(661, 364);
			this->splitContainer3->SplitterDistance = 25;
			this->splitContainer3->SplitterWidth = 8;
			this->splitContainer3->TabIndex = 0;
			// 
			// splitContainer4
			// 
			this->splitContainer4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer4->FixedPanel = System::Windows::Forms::FixedPanel::Panel2;
			this->splitContainer4->Location = System::Drawing::Point(0, 0);
			this->splitContainer4->Name = L"splitContainer4";
			this->splitContainer4->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer4.Panel1
			// 
			this->splitContainer4->Panel1->Controls->Add(this->groupBox8);
			this->splitContainer4->Panel1->Controls->Add(this->groupBox7);
			this->splitContainer4->Panel1->Controls->Add(this->label1);
			this->splitContainer4->Panel1->Controls->Add(this->groupBox6);
			this->splitContainer4->Panel1->Controls->Add(this->groupBox5);
			this->splitContainer4->Panel1->Controls->Add(this->pictureBox1);
			this->splitContainer4->Panel1->Controls->Add(this->groupBox4);
			this->splitContainer4->Panel1->Controls->Add(this->groupBox3);
			this->splitContainer4->Panel1->Controls->Add(this->groupBox2);
			this->splitContainer4->Panel1->Controls->Add(this->groupBox1);
			this->splitContainer4->Size = System::Drawing::Size(661, 331);
			this->splitContainer4->SplitterDistance = 294;
			this->splitContainer4->SplitterWidth = 8;
			this->splitContainer4->TabIndex = 0;
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->button1);
			this->groupBox8->Location = System::Drawing::Point(188, 226);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(188, 60);
			this->groupBox8->TabIndex = 18;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"Security";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(7, 25);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(166, 27);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Users And Groups";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &StartOptionsDialog::button1_Click);
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->buttonSearch);
			this->groupBox7->Location = System::Drawing::Point(45, 226);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(132, 60);
			this->groupBox7->TabIndex = 17;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Search Database";
			// 
			// buttonSearch
			// 
			this->buttonSearch->Location = System::Drawing::Point(6, 26);
			this->buttonSearch->Name = L"buttonSearch";
			this->buttonSearch->Size = System::Drawing::Size(100, 28);
			this->buttonSearch->TabIndex = 0;
			this->buttonSearch->Text = L"Search";
			this->buttonSearch->UseVisualStyleBackColor = true;
			this->buttonSearch->Click += gcnew System::EventHandler(this, &StartOptionsDialog::buttonSearch_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(481, 270);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(174, 20);
			this->label1->TabIndex = 20;
			this->label1->Text = L"by Alpha Solutions Inc";
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->buttonViewGradePoint);
			this->groupBox6->Location = System::Drawing::Point(187, 157);
			this->groupBox6->Margin = System::Windows::Forms::Padding(4);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Padding = System::Windows::Forms::Padding(4);
			this->groupBox6->Size = System::Drawing::Size(133, 60);
			this->groupBox6->TabIndex = 15;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"GradePoint";
			// 
			// buttonViewGradePoint
			// 
			this->buttonViewGradePoint->Location = System::Drawing::Point(8, 23);
			this->buttonViewGradePoint->Margin = System::Windows::Forms::Padding(4);
			this->buttonViewGradePoint->Name = L"buttonViewGradePoint";
			this->buttonViewGradePoint->Size = System::Drawing::Size(100, 28);
			this->buttonViewGradePoint->TabIndex = 0;
			this->buttonViewGradePoint->Text = L"View";
			this->buttonViewGradePoint->UseVisualStyleBackColor = true;
			this->buttonViewGradePoint->Click += gcnew System::EventHandler(this, &StartOptionsDialog::buttonViewGradePoint_Click);
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->buttonManageBackup);
			this->groupBox5->Location = System::Drawing::Point(45, 156);
			this->groupBox5->Margin = System::Windows::Forms::Padding(4);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Padding = System::Windows::Forms::Padding(4);
			this->groupBox5->Size = System::Drawing::Size(132, 61);
			this->groupBox5->TabIndex = 14;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Backup";
			// 
			// buttonManageBackup
			// 
			this->buttonManageBackup->Location = System::Drawing::Point(5, 23);
			this->buttonManageBackup->Margin = System::Windows::Forms::Padding(4);
			this->buttonManageBackup->Name = L"buttonManageBackup";
			this->buttonManageBackup->Size = System::Drawing::Size(100, 28);
			this->buttonManageBackup->TabIndex = 0;
			this->buttonManageBackup->Text = L"Manage";
			this->buttonManageBackup->UseVisualStyleBackColor = true;
			this->buttonManageBackup->Click += gcnew System::EventHandler(this, &StartOptionsDialog::buttonManageBackup_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(511, 15);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(109, 131);
			this->pictureBox1->TabIndex = 19;
			this->pictureBox1->TabStop = false;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->buttonItems);
			this->groupBox4->Controls->Add(this->buttonNewReciept);
			this->groupBox4->Controls->Add(this->buttonViewReciepts);
			this->groupBox4->Location = System::Drawing::Point(336, 15);
			this->groupBox4->Margin = System::Windows::Forms::Padding(4);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Padding = System::Windows::Forms::Padding(4);
			this->groupBox4->Size = System::Drawing::Size(133, 133);
			this->groupBox4->TabIndex = 13;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Receipts";
			// 
			// buttonItems
			// 
			this->buttonItems->Location = System::Drawing::Point(7, 95);
			this->buttonItems->Margin = System::Windows::Forms::Padding(4);
			this->buttonItems->Name = L"buttonItems";
			this->buttonItems->Size = System::Drawing::Size(100, 28);
			this->buttonItems->TabIndex = 2;
			this->buttonItems->Text = L"Items";
			this->buttonItems->UseVisualStyleBackColor = true;
			this->buttonItems->Click += gcnew System::EventHandler(this, &StartOptionsDialog::buttonItems_Click);
			// 
			// buttonNewReciept
			// 
			this->buttonNewReciept->Location = System::Drawing::Point(8, 23);
			this->buttonNewReciept->Margin = System::Windows::Forms::Padding(4);
			this->buttonNewReciept->Name = L"buttonNewReciept";
			this->buttonNewReciept->Size = System::Drawing::Size(100, 28);
			this->buttonNewReciept->TabIndex = 0;
			this->buttonNewReciept->Text = L"New";
			this->buttonNewReciept->UseVisualStyleBackColor = true;
			this->buttonNewReciept->Click += gcnew System::EventHandler(this, &StartOptionsDialog::buttonNewReciept_Click);
			// 
			// buttonViewReciepts
			// 
			this->buttonViewReciepts->Location = System::Drawing::Point(8, 59);
			this->buttonViewReciepts->Margin = System::Windows::Forms::Padding(4);
			this->buttonViewReciepts->Name = L"buttonViewReciepts";
			this->buttonViewReciepts->Size = System::Drawing::Size(100, 28);
			this->buttonViewReciepts->TabIndex = 1;
			this->buttonViewReciepts->Text = L"View";
			this->buttonViewReciepts->UseVisualStyleBackColor = true;
			this->buttonViewReciepts->Click += gcnew System::EventHandler(this, &StartOptionsDialog::buttonViewReciepts_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->buttonAddStudents);
			this->groupBox3->Controls->Add(this->buttonViewStudents);
			this->groupBox3->Location = System::Drawing::Point(188, 15);
			this->groupBox3->Margin = System::Windows::Forms::Padding(4);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(4);
			this->groupBox3->Size = System::Drawing::Size(132, 96);
			this->groupBox3->TabIndex = 12;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Students";
			// 
			// buttonAddStudents
			// 
			this->buttonAddStudents->Location = System::Drawing::Point(5, 59);
			this->buttonAddStudents->Margin = System::Windows::Forms::Padding(4);
			this->buttonAddStudents->Name = L"buttonAddStudents";
			this->buttonAddStudents->Size = System::Drawing::Size(100, 28);
			this->buttonAddStudents->TabIndex = 1;
			this->buttonAddStudents->Text = L"Add";
			this->buttonAddStudents->UseVisualStyleBackColor = true;
			this->buttonAddStudents->Click += gcnew System::EventHandler(this, &StartOptionsDialog::buttonAddStudents_Click);
			// 
			// buttonViewStudents
			// 
			this->buttonViewStudents->Location = System::Drawing::Point(5, 23);
			this->buttonViewStudents->Margin = System::Windows::Forms::Padding(4);
			this->buttonViewStudents->Name = L"buttonViewStudents";
			this->buttonViewStudents->Size = System::Drawing::Size(100, 28);
			this->buttonViewStudents->TabIndex = 0;
			this->buttonViewStudents->Text = L"View";
			this->buttonViewStudents->UseVisualStyleBackColor = true;
			this->buttonViewStudents->Click += gcnew System::EventHandler(this, &StartOptionsDialog::buttonViewStudents_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->buttonManageCourses);
			this->groupBox2->Location = System::Drawing::Point(336, 156);
			this->groupBox2->Margin = System::Windows::Forms::Padding(4);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(4);
			this->groupBox2->Size = System::Drawing::Size(133, 60);
			this->groupBox2->TabIndex = 16;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Courses";
			// 
			// buttonManageCourses
			// 
			this->buttonManageCourses->Location = System::Drawing::Point(5, 23);
			this->buttonManageCourses->Margin = System::Windows::Forms::Padding(4);
			this->buttonManageCourses->Name = L"buttonManageCourses";
			this->buttonManageCourses->Size = System::Drawing::Size(100, 28);
			this->buttonManageCourses->TabIndex = 0;
			this->buttonManageCourses->Text = L"Manage";
			this->buttonManageCourses->UseVisualStyleBackColor = true;
			this->buttonManageCourses->Click += gcnew System::EventHandler(this, &StartOptionsDialog::buttonAddCourses_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->buttonAddApplicants);
			this->groupBox1->Controls->Add(this->buttonViewApplicants);
			this->groupBox1->Location = System::Drawing::Point(45, 15);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(132, 96);
			this->groupBox1->TabIndex = 11;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Applicants";
			// 
			// buttonAddApplicants
			// 
			this->buttonAddApplicants->Location = System::Drawing::Point(5, 59);
			this->buttonAddApplicants->Margin = System::Windows::Forms::Padding(4);
			this->buttonAddApplicants->Name = L"buttonAddApplicants";
			this->buttonAddApplicants->Size = System::Drawing::Size(100, 28);
			this->buttonAddApplicants->TabIndex = 1;
			this->buttonAddApplicants->Text = L"Add";
			this->buttonAddApplicants->UseVisualStyleBackColor = true;
			this->buttonAddApplicants->Click += gcnew System::EventHandler(this, &StartOptionsDialog::buttonAddApplicants_Click);
			// 
			// buttonViewApplicants
			// 
			this->buttonViewApplicants->Location = System::Drawing::Point(5, 23);
			this->buttonViewApplicants->Margin = System::Windows::Forms::Padding(4);
			this->buttonViewApplicants->Name = L"buttonViewApplicants";
			this->buttonViewApplicants->Size = System::Drawing::Size(100, 28);
			this->buttonViewApplicants->TabIndex = 0;
			this->buttonViewApplicants->Text = L"View";
			this->buttonViewApplicants->UseVisualStyleBackColor = true;
			this->buttonViewApplicants->Click += gcnew System::EventHandler(this, &StartOptionsDialog::buttonViewApplicants_Click);
			// 
			// StartOptionsDialog
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(737, 437);
			this->Controls->Add(this->splitContainer1);
			this->Controls->Add(this->toolStrip);
			this->Controls->Add(this->statusStrip);
			this->Controls->Add(this->menuStrip);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->HelpButton = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip;
			this->Margin = System::Windows::Forms::Padding(4);
			this->MinimumSize = System::Drawing::Size(609, 410);
			this->Name = L"StartOptionsDialog";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->Text = L"Lower Caribbean Bible Colleage - Bursary Administration System";
			this->Load += gcnew System::EventHandler(this, &StartOptionsDialog::StartOptionsDialog_Load);
			this->menuStrip->ResumeLayout(false);
			this->menuStrip->PerformLayout();
			this->toolStrip->ResumeLayout(false);
			this->toolStrip->PerformLayout();
			this->splitContainer1->Panel2->ResumeLayout(false);
			this->splitContainer1->ResumeLayout(false);
			this->splitContainer2->Panel1->ResumeLayout(false);
			this->splitContainer2->ResumeLayout(false);
			this->splitContainer3->Panel2->ResumeLayout(false);
			this->splitContainer3->ResumeLayout(false);
			this->splitContainer4->Panel1->ResumeLayout(false);
			this->splitContainer4->Panel1->PerformLayout();
			this->splitContainer4->ResumeLayout(false);
			this->groupBox8->ResumeLayout(false);
			this->groupBox7->ResumeLayout(false);
			this->groupBox6->ResumeLayout(false);
			this->groupBox5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->groupBox4->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
		this->Close();
	}
	private: System::Void aboutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
	   AboutDialog ^ad = gcnew AboutDialog();
	   ad->ShowDialog();
	}
	private: System::Void contentsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
	   System::Diagnostics::Process::Start( "..\\help\\LCBSAdminHelp.chm" );
	}
	private: System::Void buttonViewGradePoint_Click(System::Object^  sender, System::EventArgs^  e)
	{
	   GradePointForm ^gpf = gcnew GradePointForm();
	   gpf->ShowDialog();
	}
	private: System::Void buttonNewReciept_Click(System::Object^  sender, System::EventArgs^  e)
	{
	   PaymentForm ^pf = gcnew PaymentForm();
	   pf->ShowDialog();
	}
	private: System::Void buttonAddApplicants_Click(System::Object^  sender, System::EventArgs^  e)
	{
	   ApplicaionForm ^af = gcnew ApplicaionForm();
	   af->ShowDialog();
	}
	private: System::Void buttonViewCourses_Click(System::Object^  sender, System::EventArgs^  e)
	{
	   Courses ^cd = gcnew Courses();
	   cd->ShowDialog();
	}
	private: System::Void buttonAddCourses_Click(System::Object^  sender, System::EventArgs^  e)
	{
	   Courses ^cd = gcnew Courses();
	   cd->ShowDialog();
	}
	private: System::Void buttonRemoveCourses_Click(System::Object^  sender, System::EventArgs^  e)
	{
	   Courses ^cd = gcnew Courses();
	   cd->ShowDialog();
	}
	private: System::Void buttonRegisterStudents_Click(System::Object^  sender, System::EventArgs^  e)
	{
// 	   RegistrationForm ^rf = gcnew RegistrationForm();
//	   rf->ShowDialog();
	}
	private: System::Void buttonStudentGrades_Click(System::Object^  sender, System::EventArgs^  e)
	{
//	   GradeReport ^gr = gcnew GradeReport();
//	   gr->ShowDialog();
	}
	private: System::Void buttonStudentClassGrades_Click(System::Object^  sender, System::EventArgs^  e)
	{
//	   ClassGradeReport ^cgr = gcnew ClassGradeReport();
//	   cgr->ShowDialog();		
	}
	private: System::Void buttonItems_Click(System::Object^  sender, System::EventArgs^  e)
	{
	   ItemsPurchaseable ^ip = gcnew ItemsPurchaseable();
	   ip->ShowDialog();
	}
	private: System::Void buttonViewApplicants_Click(System::Object^  sender, System::EventArgs^  e)
	{
	   Applicants ^ad = gcnew Applicants();
	   ad->ShowDialog();
	}
	private: System::Void buttonViewStudents_Click(System::Object^  sender, System::EventArgs^  e)
	{
	   Students ^sd = gcnew Students();
	   sd->ShowDialog();
	}
	private: System::Void buttonViewReciepts_Click(System::Object^  sender, System::EventArgs^  e)
	{
	   Reciepts^ rd = gcnew Reciepts();
	   rd->ShowDialog();
	}
	private: System::Void buttonManageBackup_Click(System::Object^  sender, System::EventArgs^  e)
	{
	   BackupDialog^ bd = gcnew BackupDialog();
	   bd->ShowDialog();
	}
	private: System::Void buttonAddStudents_Click(System::Object^  sender, System::EventArgs^  e)
	{
		AddStudentDialog^ asd = gcnew AddStudentDialog();
		asd->ShowDialog();
	}
	private: System::Void viewToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
	   Applicants ^ad = gcnew Applicants();
	   ad->ShowDialog();
	}
	private: System::Void buttonApproveApplicants_Click(System::Object^  sender, System::EventArgs^  e)
	{
	   //Applicants ^ad = gcnew Applicants();
	   //ad->ShowDialog();
	}
	private: System::Void addToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
	   ApplicaionForm ^af = gcnew ApplicaionForm();
	   af->ShowDialog();
	}
	private: System::Void approveToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
	   //Applicants ^ad = gcnew Applicants();
	   //ad->ShowDialog();
	}
	private: System::Void viewToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e)
	{
	   Students ^sd = gcnew Students();
	   sd->ShowDialog();
	}
	private: System::Void addToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		AddStudentDialog^ asd = gcnew AddStudentDialog();
		asd->ShowDialog();
	}
	private: System::Void newToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
	   PaymentForm ^pf = gcnew PaymentForm();
	   pf->ShowDialog();
	}
	private: System::Void viewToolStripMenuItem2_Click(System::Object^  sender, System::EventArgs^  e)
	{
	   Reciepts^ rd = gcnew Reciepts();
	   rd->ShowDialog();
	}
	private: System::Void itemsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
	{
	   ItemsPurchaseable ^ip = gcnew ItemsPurchaseable();
	   ip->ShowDialog();
	}
	private: System::Void toolStripButtonBackup_Click(System::Object^  sender, System::EventArgs^  e)
	{
	   BackupDialog^ bd = gcnew BackupDialog();
	   bd->ShowDialog();
	}
	private: System::Void toolStripButtonGradePoint_Click(System::Object^  sender, System::EventArgs^  e)
	{
	   GradePointForm ^gpf = gcnew GradePointForm();
	   gpf->ShowDialog();
	}
	private: System::Void toolStripButtonCourses_Click(System::Object^  sender, System::EventArgs^  e)
	{
	   Courses ^cd = gcnew Courses();
	   cd->ShowDialog();
	}
	private: System::Void buttonSearch_Click(System::Object^  sender, System::EventArgs^  e)
	{
	   FindDialog ^fd = gcnew FindDialog();
	   fd->ShowDialog();
	}
	private: System::Void toolStripButtonSearch_Click(System::Object^  sender, System::EventArgs^  e)
	{
	   FindDialog ^fd = gcnew FindDialog();
	   fd->ShowDialog();
	}
	private: System::Void StartOptionsDialog_Load(System::Object^  sender, System::EventArgs^  e)
	{
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
	{
	   UsersAndGroupsDialog ^uagd = gcnew UsersAndGroupsDialog();
	   uagd->ShowDialog();
	}
};
}
