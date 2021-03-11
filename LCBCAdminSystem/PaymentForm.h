#pragma once

#include "DataAccessClass.h"
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
	/// Summary for PaymentForm
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class PaymentForm : public System::Windows::Forms::Form
	{
	public:
		PaymentForm(void)
		{
			InitializeComponent();
			dataAccessClass   = gcnew LCBCAdminSystem::DataAccessClass();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~PaymentForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: LCBCAdminSystem::DataAccessClass^ dataAccessClass;
	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	protected: 
	private: System::Windows::Forms::SplitContainer^  splitContainer2;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::StatusStrip^  statusStrip;

	private: System::Windows::Forms::Label^  label42;
	private: System::Windows::Forms::Label^  label43;
	private: System::Windows::Forms::PictureBox^  pictureBoxLogo;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::SplitContainer^  splitContainer3;
	private: System::Windows::Forms::SplitContainer^  splitContainer4;
	private: System::Windows::Forms::DataGridView^  dataGridViewItems;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Number;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Item;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Price;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Quantity;
	private: System::Windows::Forms::Button^  buttonAddItems;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::ComboBox^  comboBoxItems;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownQuantity;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBoxPrice;
	private: System::Windows::Forms::TextBox^  textBoxLastName;
	private: System::Windows::Forms::TextBox^  textBoxFirstName;
	private: System::Windows::Forms::ComboBox^  comboBoxTitle;

	private: System::Windows::Forms::Button^  buttonSave;
	private: System::Windows::Forms::Button^  buttonPrint;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownTax;

	private: System::Windows::Forms::TextBox^  textBoxTotal;
	private: System::Windows::Forms::Button^  buttonRemoveItem;
	private: System::Drawing::Printing::PrintDocument^  printDocument;
	private: System::Windows::Forms::PrintPreviewDialog^  printPreviewDialog;
	protected: 

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(PaymentForm::typeid));
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->pictureBoxLogo = (gcnew System::Windows::Forms::PictureBox());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->splitContainer2 = (gcnew System::Windows::Forms::SplitContainer());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->splitContainer3 = (gcnew System::Windows::Forms::SplitContainer());
			this->buttonRemoveItem = (gcnew System::Windows::Forms::Button());
			this->buttonAddItems = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->comboBoxItems = (gcnew System::Windows::Forms::ComboBox());
			this->numericUpDownQuantity = (gcnew System::Windows::Forms::NumericUpDown());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBoxPrice = (gcnew System::Windows::Forms::TextBox());
			this->textBoxLastName = (gcnew System::Windows::Forms::TextBox());
			this->textBoxFirstName = (gcnew System::Windows::Forms::TextBox());
			this->comboBoxTitle = (gcnew System::Windows::Forms::ComboBox());
			this->splitContainer4 = (gcnew System::Windows::Forms::SplitContainer());
			this->dataGridViewItems = (gcnew System::Windows::Forms::DataGridView());
			this->Number = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Item = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Quantity = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->buttonSave = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->buttonPrint = (gcnew System::Windows::Forms::Button());
			this->numericUpDownTax = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBoxTotal = (gcnew System::Windows::Forms::TextBox());
			this->statusStrip = (gcnew System::Windows::Forms::StatusStrip());
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDownQuantity))->BeginInit();
			this->splitContainer4->Panel1->SuspendLayout();
			this->splitContainer4->Panel2->SuspendLayout();
			this->splitContainer4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridViewItems))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDownTax))->BeginInit();
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
			this->splitContainer1->Size = System::Drawing::Size(624, 471);
			this->splitContainer1->SplitterDistance = 106;
			this->splitContainer1->SplitterWidth = 10;
			this->splitContainer1->TabIndex = 0;
			// 
			// pictureBoxLogo
			// 
			this->pictureBoxLogo->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBoxLogo.Image")));
			this->pictureBoxLogo->Location = System::Drawing::Point(335, 3);
			this->pictureBoxLogo->Name = L"pictureBoxLogo";
			this->pictureBoxLogo->Size = System::Drawing::Size(83, 97);
			this->pictureBoxLogo->TabIndex = 7;
			this->pictureBoxLogo->TabStop = false;
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label42->Location = System::Drawing::Point(82, 31);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(140, 19);
			this->label42->TabIndex = 2;
			this->label42->Text = L"PAYMENT FORM";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label43->Location = System::Drawing::Point(31, 9);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(298, 19);
			this->label43->TabIndex = 1;
			this->label43->Text = L"LOWER CARIBBEAN BIBLE COLLEGE";
			// 
			// splitContainer2
			// 
			this->splitContainer2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer2->IsSplitterFixed = true;
			this->splitContainer2->Location = System::Drawing::Point(0, 0);
			this->splitContainer2->Name = L"splitContainer2";
			// 
			// splitContainer2.Panel1
			// 
			this->splitContainer2->Panel1->Controls->Add(this->label9);
			this->splitContainer2->Panel1->Controls->Add(this->label4);
			this->splitContainer2->Panel1->Controls->Add(this->label3);
			this->splitContainer2->Panel1->Controls->Add(this->label2);
			this->splitContainer2->Panel1->Controls->Add(this->label1);
			// 
			// splitContainer2.Panel2
			// 
			this->splitContainer2->Panel2->Controls->Add(this->splitContainer3);
			this->splitContainer2->Size = System::Drawing::Size(624, 355);
			this->splitContainer2->SplitterDistance = 97;
			this->splitContainer2->SplitterWidth = 10;
			this->splitContainer2->TabIndex = 0;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(13, 217);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(46, 13);
			this->label9->TabIndex = 38;
			this->label9->Text = L"Item List";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 81);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(81, 13);
			this->label4->TabIndex = 34;
			this->label4->Text = L"Item Purchased";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 58);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(58, 13);
			this->label3->TabIndex = 33;
			this->label3->Text = L"Last Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 33);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 13);
			this->label2->TabIndex = 32;
			this->label2->Text = L"First Name";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 6);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(27, 13);
			this->label1->TabIndex = 31;
			this->label1->Text = L"Title";
			// 
			// splitContainer3
			// 
			this->splitContainer3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer3->FixedPanel = System::Windows::Forms::FixedPanel::Panel1;
			this->splitContainer3->IsSplitterFixed = true;
			this->splitContainer3->Location = System::Drawing::Point(0, 0);
			this->splitContainer3->Name = L"splitContainer3";
			this->splitContainer3->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer3.Panel1
			// 
			this->splitContainer3->Panel1->Controls->Add(this->buttonRemoveItem);
			this->splitContainer3->Panel1->Controls->Add(this->buttonAddItems);
			this->splitContainer3->Panel1->Controls->Add(this->label6);
			this->splitContainer3->Panel1->Controls->Add(this->comboBoxItems);
			this->splitContainer3->Panel1->Controls->Add(this->numericUpDownQuantity);
			this->splitContainer3->Panel1->Controls->Add(this->label7);
			this->splitContainer3->Panel1->Controls->Add(this->textBoxPrice);
			this->splitContainer3->Panel1->Controls->Add(this->textBoxLastName);
			this->splitContainer3->Panel1->Controls->Add(this->textBoxFirstName);
			this->splitContainer3->Panel1->Controls->Add(this->comboBoxTitle);
			// 
			// splitContainer3.Panel2
			// 
			this->splitContainer3->Panel2->Controls->Add(this->splitContainer4);
			this->splitContainer3->Size = System::Drawing::Size(517, 355);
			this->splitContainer3->SplitterDistance = 129;
			this->splitContainer3->SplitterWidth = 10;
			this->splitContainer3->TabIndex = 0;
			// 
			// buttonRemoveItem
			// 
			this->buttonRemoveItem->Location = System::Drawing::Point(351, 102);
			this->buttonRemoveItem->Name = L"buttonRemoveItem";
			this->buttonRemoveItem->Size = System::Drawing::Size(75, 23);
			this->buttonRemoveItem->TabIndex = 8;
			this->buttonRemoveItem->Text = L"Remove";
			this->buttonRemoveItem->UseVisualStyleBackColor = true;
			this->buttonRemoveItem->Click += gcnew System::EventHandler(this, &PaymentForm::buttonRemoveItem_Click);
			// 
			// buttonAddItems
			// 
			this->buttonAddItems->Location = System::Drawing::Point(351, 73);
			this->buttonAddItems->Name = L"buttonAddItems";
			this->buttonAddItems->Size = System::Drawing::Size(75, 23);
			this->buttonAddItems->TabIndex = 7;
			this->buttonAddItems->Text = L"Add Items";
			this->buttonAddItems->UseVisualStyleBackColor = true;
			this->buttonAddItems->Click += gcnew System::EventHandler(this, &PaymentForm::buttonAddItems_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(234, 78);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(31, 13);
			this->label6->TabIndex = 60;
			this->label6->Text = L"Price";
			// 
			// comboBoxItems
			// 
			this->comboBoxItems->FormattingEnabled = true;
			this->comboBoxItems->Location = System::Drawing::Point(2, 78);
			this->comboBoxItems->Name = L"comboBoxItems";
			this->comboBoxItems->Size = System::Drawing::Size(122, 21);
			this->comboBoxItems->TabIndex = 4;
			// 
			// numericUpDownQuantity
			// 
			this->numericUpDownQuantity->Location = System::Drawing::Point(184, 76);
			this->numericUpDownQuantity->Name = L"numericUpDownQuantity";
			this->numericUpDownQuantity->Size = System::Drawing::Size(44, 20);
			this->numericUpDownQuantity->TabIndex = 5;
			this->numericUpDownQuantity->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(130, 78);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(46, 13);
			this->label7->TabIndex = 59;
			this->label7->Text = L"Quantity";
			// 
			// textBoxPrice
			// 
			this->textBoxPrice->Location = System::Drawing::Point(270, 75);
			this->textBoxPrice->Name = L"textBoxPrice";
			this->textBoxPrice->Size = System::Drawing::Size(75, 20);
			this->textBoxPrice->TabIndex = 6;
			// 
			// textBoxLastName
			// 
			this->textBoxLastName->Location = System::Drawing::Point(2, 55);
			this->textBoxLastName->Name = L"textBoxLastName";
			this->textBoxLastName->Size = System::Drawing::Size(122, 20);
			this->textBoxLastName->TabIndex = 3;
			// 
			// textBoxFirstName
			// 
			this->textBoxFirstName->Location = System::Drawing::Point(3, 30);
			this->textBoxFirstName->Name = L"textBoxFirstName";
			this->textBoxFirstName->Size = System::Drawing::Size(121, 20);
			this->textBoxFirstName->TabIndex = 2;
			// 
			// comboBoxTitle
			// 
			this->comboBoxTitle->FormattingEnabled = true;
			this->comboBoxTitle->Items->AddRange(gcnew cli::array< System::Object^  >(12) {L"Mr.", L"Ms.", L"Dr.", L"mrs.", L"Miss.", 
				L"prof.", L"Rev.", L"Sgt.", L"Capt.", L"Maj.", L"Col.", L"Other"});
			this->comboBoxTitle->Location = System::Drawing::Point(3, 3);
			this->comboBoxTitle->Name = L"comboBoxTitle";
			this->comboBoxTitle->Size = System::Drawing::Size(121, 21);
			this->comboBoxTitle->TabIndex = 1;
			this->comboBoxTitle->Text = L"Mr.";
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
			this->splitContainer4->Panel1->Controls->Add(this->dataGridViewItems);
			// 
			// splitContainer4.Panel2
			// 
			this->splitContainer4->Panel2->Controls->Add(this->label8);
			this->splitContainer4->Panel2->Controls->Add(this->buttonSave);
			this->splitContainer4->Panel2->Controls->Add(this->label5);
			this->splitContainer4->Panel2->Controls->Add(this->buttonPrint);
			this->splitContainer4->Panel2->Controls->Add(this->numericUpDownTax);
			this->splitContainer4->Panel2->Controls->Add(this->textBoxTotal);
			this->splitContainer4->Size = System::Drawing::Size(517, 216);
			this->splitContainer4->SplitterDistance = 83;
			this->splitContainer4->SplitterWidth = 10;
			this->splitContainer4->TabIndex = 0;
			// 
			// dataGridViewItems
			// 
			this->dataGridViewItems->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewItems->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {this->Number, 
				this->Item, this->Price, this->Quantity});
			this->dataGridViewItems->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridViewItems->Location = System::Drawing::Point(0, 0);
			this->dataGridViewItems->Name = L"dataGridViewItems";
			this->dataGridViewItems->Size = System::Drawing::Size(517, 83);
			this->dataGridViewItems->TabIndex = 54;
			// 
			// Number
			// 
			this->Number->HeaderText = L"Number";
			this->Number->Name = L"Number";
			// 
			// Item
			// 
			this->Item->HeaderText = L"Item";
			this->Item->Name = L"Item";
			// 
			// Price
			// 
			this->Price->HeaderText = L"Price";
			this->Price->Name = L"Price";
			// 
			// Quantity
			// 
			this->Quantity->HeaderText = L"Quantity";
			this->Quantity->Name = L"Quantity";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(14, 53);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(31, 13);
			this->label8->TabIndex = 37;
			this->label8->Text = L"Total";
			// 
			// buttonSave
			// 
			this->buttonSave->Location = System::Drawing::Point(189, 48);
			this->buttonSave->Name = L"buttonSave";
			this->buttonSave->Size = System::Drawing::Size(75, 23);
			this->buttonSave->TabIndex = 11;
			this->buttonSave->Text = L"Save";
			this->buttonSave->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(14, 26);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(25, 13);
			this->label5->TabIndex = 35;
			this->label5->Text = L"Tax";
			// 
			// buttonPrint
			// 
			this->buttonPrint->Location = System::Drawing::Point(270, 48);
			this->buttonPrint->Name = L"buttonPrint";
			this->buttonPrint->Size = System::Drawing::Size(70, 23);
			this->buttonPrint->TabIndex = 12;
			this->buttonPrint->Text = L"Print";
			this->buttonPrint->UseVisualStyleBackColor = true;
			this->buttonPrint->Click += gcnew System::EventHandler(this, &PaymentForm::buttonPrint_Click);
			// 
			// numericUpDownTax
			// 
			this->numericUpDownTax->Location = System::Drawing::Point(56, 24);
			this->numericUpDownTax->Name = L"numericUpDownTax";
			this->numericUpDownTax->Size = System::Drawing::Size(120, 20);
			this->numericUpDownTax->TabIndex = 9;
			this->numericUpDownTax->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {15, 0, 0, 0});
			// 
			// textBoxTotal
			// 
			this->textBoxTotal->Location = System::Drawing::Point(56, 50);
			this->textBoxTotal->Name = L"textBoxTotal";
			this->textBoxTotal->Size = System::Drawing::Size(120, 20);
			this->textBoxTotal->TabIndex = 10;
			// 
			// statusStrip
			// 
			this->statusStrip->Location = System::Drawing::Point(0, 449);
			this->statusStrip->Name = L"statusStrip";
			this->statusStrip->Size = System::Drawing::Size(624, 22);
			this->statusStrip->TabIndex = 1;
			this->statusStrip->Text = L"statusStrip1";
			// 
			// printDocument
			// 
			this->printDocument->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &PaymentForm::printDocument_PrintPage);
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
			// PaymentForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(624, 471);
			this->Controls->Add(this->statusStrip);
			this->Controls->Add(this->splitContainer1);
			this->Name = L"PaymentForm";
			this->Text = L"PaymentForm";
			this->Load += gcnew System::EventHandler(this, &PaymentForm::PaymentForm_Load);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel1->PerformLayout();
			this->splitContainer1->Panel2->ResumeLayout(false);
			this->splitContainer1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxLogo))->EndInit();
			this->splitContainer2->Panel1->ResumeLayout(false);
			this->splitContainer2->Panel1->PerformLayout();
			this->splitContainer2->Panel2->ResumeLayout(false);
			this->splitContainer2->ResumeLayout(false);
			this->splitContainer3->Panel1->ResumeLayout(false);
			this->splitContainer3->Panel1->PerformLayout();
			this->splitContainer3->Panel2->ResumeLayout(false);
			this->splitContainer3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDownQuantity))->EndInit();
			this->splitContainer4->Panel1->ResumeLayout(false);
			this->splitContainer4->Panel2->ResumeLayout(false);
			this->splitContainer4->Panel2->PerformLayout();
			this->splitContainer4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridViewItems))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDownTax))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		 void SetTextBoxPrice()
		 {
			 textBoxPrice->Text = "0";
		 }

		 private: System::Void PaymentForm_Load(System::Object^  sender, System::EventArgs^  e)
		 {
			 try
			 {
				dataAccessClass->FillDataSet( "ItemsPurchaseable" );
				System::Data::DataRow^ dataRow;
				for( int i=0; i < dataAccessClass->dataSet->Tables["ItemsPurchaseable"]->Rows->Count ; i++ )
				{
					dataRow = dataAccessClass->GetRow( "ItemsPurchaseable", i );
					if( dataRow != nullptr )
					{
						comboBoxItems->Items->Add( dataRow->ItemArray[1]->ToString() );
					}
				}
				if( comboBoxItems->Items->Count > 0 )
				{
					comboBoxItems->Text = comboBoxItems->Items[0]->ToString();
					SetTextBoxPrice();
				}
			 }
			 catch( System::Exception^ e )
			 {
				using namespace System::Windows::Forms;
				MessageBox::Show( e->Message, "Error", MessageBoxButtons::OK, 
						          MessageBoxIcon::Exclamation );
			 }
		 }

		 private: System::Void buttonAddItems_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 try
			 {
				System::Windows::Forms::DataGridViewRow^ row   = gcnew System::Windows::Forms::DataGridViewRow();
				dataGridViewItems->Rows->Add( row );
				int index = dataGridViewItems->Rows->Count-2;
				dataGridViewItems->Rows[index]->Cells["Number"]->Value   = index;
				dataGridViewItems->Rows[index]->Cells["Item"]->Value     = comboBoxItems->Text;
				dataGridViewItems->Rows[index]->Cells["Quantity"]->Value = numericUpDownQuantity->Text;
				dataGridViewItems->Rows[index]->Cells["Price"]->Value    = textBoxPrice->Text;
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
		 private: System::Void buttonPrint_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			printPreviewDialog->ShowDialog();
		 }
		 private: System::Void buttonPreview_Click(System::Object^  sender, System::EventArgs^  e)
		 {
		 }
		 private: System::Void buttonRemoveItem_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 try
			 {
				int index = dataGridViewItems->Rows->Count-2;
				if( index < 0 )
					return;
				System::Windows::Forms::DataGridViewRow^ row = dataGridViewItems->Rows[index];
				dataGridViewItems->Rows->Remove( row );
			 }
			 catch( System::Exception^ e )
			 {
				using namespace System::Windows::Forms;
				MessageBox::Show( e->Message, "Error", MessageBoxButtons::OK, 
						          MessageBoxIcon::Exclamation );
			 }
		 }
	private: System::Void printDocument_PrintPage(System::Object^  sender, System::Drawing::Printing::PrintPageEventArgs^  e)
	{
       float starting_y_position = printHeader( e->Graphics, this->Font );
	   DrawBody( e->Graphics, System::Drawing::PointF( (float)0, starting_y_position ) );
	}
    void DrawBody( System::Drawing::Graphics^ graphics, System::Drawing::PointF point )
	{
		float height = point.Y;
		System::Drawing::SizeF^ stringSize = gcnew System::Drawing::SizeF();

		graphics->MeasureString( "Customer Name:", this->Font );
		stringSize = graphics->MeasureString( "Customer Name:", this->Font );
		System::String^ name = gcnew System::String( "" );
		name = comboBoxTitle->Text + " " + textBoxFirstName->Text + " " + textBoxLastName->Text;
		graphics->DrawString( "Customer Name:",   this->Font, System::Drawing::Brushes::Black, System::Drawing::PointF( (float)0, height ) );
		graphics->DrawString( name, this->Font, System::Drawing::Brushes::Black, System::Drawing::PointF( (float)stringSize->Width+1, height ) );

		stringSize = graphics->MeasureString( "Items Purchased:", this->Font );
		height += stringSize->Height;
		graphics->DrawString( "Items Purchased:", this->Font, System::Drawing::Brushes::Black, System::Drawing::PointF( (float)0, height ) );

		stringSize = graphics->MeasureString( "Number Item Price Quantity", this->Font );
		height += stringSize->Height;
		graphics->DrawString( "Number Item Price Quantity", this->Font, System::Drawing::Brushes::Black, System::Drawing::PointF( (float)0, height ) );

		System::Windows::Forms::DataGridViewRow^ dataRow;
		
		for( int i=0 ; i<dataGridViewItems->Rows->Count-1 ; i++ )
		{
		   height += stringSize->Height;
		   float width = 0;
           dataRow = dataGridViewItems->Rows[i];
		   stringSize = graphics->MeasureString( dataRow->Cells[ "Number" ]->Value->ToString(), this->Font );
		   graphics->DrawString( dataRow->Cells[ "Number" ]->Value->ToString(), this->Font, System::Drawing::Brushes::Black, System::Drawing::PointF( (float)width, height ) );
		   width += stringSize->Width;

		   stringSize = graphics->MeasureString( dataRow->Cells[ "Item" ]->Value->ToString(), this->Font );
		   graphics->DrawString( dataRow->Cells[ "Item" ]->Value->ToString(), this->Font, System::Drawing::Brushes::Black, System::Drawing::PointF( (float)width, height ) );
		   width += stringSize->Width;

		   stringSize = graphics->MeasureString( dataRow->Cells[ "Price" ]->Value->ToString(), this->Font );
		   graphics->DrawString( dataRow->Cells[ "Price" ]->Value->ToString(), this->Font, System::Drawing::Brushes::Black, System::Drawing::PointF( (float)width, height ) );
		   width += stringSize->Width;

		   stringSize = graphics->MeasureString( dataRow->Cells[ "Quantity" ]->Value->ToString(), this->Font );
		   graphics->DrawString( dataRow->Cells[ "Quantity" ]->Value->ToString(), this->Font, System::Drawing::Brushes::Black, System::Drawing::PointF( (float)width, height ) );
		}

		stringSize = graphics->MeasureString( "Tax:", this->Font );
		height += stringSize->Height;
		graphics->DrawString( "Tax:", this->Font, System::Drawing::Brushes::Black, System::Drawing::PointF( (float)0, height ) );
		graphics->DrawString( numericUpDownTax->Text + "%", this->Font, System::Drawing::Brushes::Black, System::Drawing::PointF( (float)stringSize->Width+1, height ) );

		stringSize = graphics->MeasureString( "Total:", this->Font );
		height += stringSize->Height;
		graphics->DrawString( "Total:", this->Font, System::Drawing::Brushes::Black, System::Drawing::PointF( (float)0, height ) );
		graphics->DrawString( textBoxTotal->Text, this->Font, System::Drawing::Brushes::Black, System::Drawing::PointF( (float)stringSize->Width+1, height ) );
	}
};
}
