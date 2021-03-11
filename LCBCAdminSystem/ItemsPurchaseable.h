#pragma once

#include "DataGridViewPrinter.h"
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
	/// Summary for ItemsPurchaseable
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class ItemsPurchaseable : public System::Windows::Forms::Form
	{
	public:
		ItemsPurchaseable(void)
		{
			InitializeComponent();
            dataAccessClass  = gcnew LCBCAdminSystem::DataAccessClass();
			dataGridViewPrinter = gcnew DataGridViewPrinter( dataGridView, printDocument, true, true, "Title", this->Font, Color::Black, true );
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ItemsPurchaseable()
		{
			if (components)
			{
				delete components;
			}
		}
	public: DataGridViewPrinter^ dataGridViewPrinter;
	private: LCBCAdminSystem::DataAccessClass^ dataAccessClass;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	protected: 
	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	private: System::Windows::Forms::Label^  label42;
	private: System::Windows::Forms::Label^  label43;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::SplitContainer^  splitContainer2;
	private: System::Windows::Forms::SplitContainer^  splitContainer3;
	private: System::Windows::Forms::DataGridView^  dataGridView;
	private: System::Windows::Forms::ListView^  listView;
	private: System::Windows::Forms::ColumnHeader^  Field;
	private: System::Windows::Forms::ColumnHeader^  Value;
	private: System::Drawing::Printing::PrintDocument^  printDocument;
	private: System::Windows::Forms::PrintPreviewDialog^  printPreviewDialog;
	private: System::Windows::Forms::Button^  buttonPrint;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ItemsPurchaseable::typeid));
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->dateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->splitContainer2 = (gcnew System::Windows::Forms::SplitContainer());
			this->splitContainer3 = (gcnew System::Windows::Forms::SplitContainer());
			this->listView = (gcnew System::Windows::Forms::ListView());
			this->Field = (gcnew System::Windows::Forms::ColumnHeader());
			this->Value = (gcnew System::Windows::Forms::ColumnHeader());
			this->dataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->buttonReload = (gcnew System::Windows::Forms::Button());
			this->buttonSave = (gcnew System::Windows::Forms::Button());
			this->buttonPrint = (gcnew System::Windows::Forms::Button());
			this->printDocument = (gcnew System::Drawing::Printing::PrintDocument());
			this->printPreviewDialog = (gcnew System::Windows::Forms::PrintPreviewDialog());
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
			// statusStrip1
			// 
			this->statusStrip1->Location = System::Drawing::Point(0, 362);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(530, 22);
			this->statusStrip1->TabIndex = 0;
			this->statusStrip1->Text = L"statusStrip";
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
			this->splitContainer1->Panel1->Controls->Add(this->label42);
			this->splitContainer1->Panel1->Controls->Add(this->label43);
			this->splitContainer1->Panel1->Controls->Add(this->pictureBox1);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->splitContainer2);
			this->splitContainer1->Size = System::Drawing::Size(530, 362);
			this->splitContainer1->SplitterDistance = 112;
			this->splitContainer1->SplitterWidth = 10;
			this->splitContainer1->TabIndex = 1;
			// 
			// dateTimePicker
			// 
			this->dateTimePicker->Location = System::Drawing::Point(3, 88);
			this->dateTimePicker->Name = L"dateTimePicker";
			this->dateTimePicker->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker->TabIndex = 1;
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label42->Location = System::Drawing::Point(103, 42);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(104, 19);
			this->label42->TabIndex = 5;
			this->label42->Text = L"INVENTORY";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label43->Location = System::Drawing::Point(5, 12);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(298, 19);
			this->label43->TabIndex = 4;
			this->label43->Text = L"LOWER CARIBBEAN BIBLE COLLEGE";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(321, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(84, 96);
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
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
			this->splitContainer2->Panel1->Controls->Add(this->splitContainer3);
			// 
			// splitContainer2.Panel2
			// 
			this->splitContainer2->Panel2->Controls->Add(this->buttonReload);
			this->splitContainer2->Panel2->Controls->Add(this->buttonSave);
			this->splitContainer2->Panel2->Controls->Add(this->buttonPrint);
			this->splitContainer2->Size = System::Drawing::Size(530, 240);
			this->splitContainer2->SplitterDistance = 177;
			this->splitContainer2->SplitterWidth = 10;
			this->splitContainer2->TabIndex = 0;
			// 
			// splitContainer3
			// 
			this->splitContainer3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer3->FixedPanel = System::Windows::Forms::FixedPanel::Panel1;
			this->splitContainer3->IsSplitterFixed = true;
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
			this->splitContainer3->Size = System::Drawing::Size(530, 177);
			this->splitContainer3->SplitterDistance = 181;
			this->splitContainer3->TabIndex = 0;
			// 
			// listView
			// 
			this->listView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) {this->Field, this->Value});
			this->listView->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listView->GridLines = true;
			this->listView->Location = System::Drawing::Point(0, 0);
			this->listView->Name = L"listView";
			this->listView->Size = System::Drawing::Size(181, 177);
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
			this->dataGridView->Size = System::Drawing::Size(345, 177);
			this->dataGridView->TabIndex = 0;
			this->dataGridView->CurrentCellChanged += gcnew System::EventHandler(this, &ItemsPurchaseable::dataGridView_CurrentCellChanged);
			// 
			// buttonReload
			// 
			this->buttonReload->Location = System::Drawing::Point(443, 12);
			this->buttonReload->Name = L"buttonReload";
			this->buttonReload->Size = System::Drawing::Size(75, 23);
			this->buttonReload->TabIndex = 2;
			this->buttonReload->Text = L"Reload";
			this->buttonReload->UseVisualStyleBackColor = true;
			this->buttonReload->Click += gcnew System::EventHandler(this, &ItemsPurchaseable::buttonReload_Click);
			// 
			// buttonSave
			// 
			this->buttonSave->Location = System::Drawing::Point(362, 12);
			this->buttonSave->Name = L"buttonSave";
			this->buttonSave->Size = System::Drawing::Size(75, 23);
			this->buttonSave->TabIndex = 1;
			this->buttonSave->Text = L"Save";
			this->buttonSave->UseVisualStyleBackColor = true;
			this->buttonSave->Click += gcnew System::EventHandler(this, &ItemsPurchaseable::buttonSave_Click);
			// 
			// buttonPrint
			// 
			this->buttonPrint->Location = System::Drawing::Point(281, 13);
			this->buttonPrint->Name = L"buttonPrint";
			this->buttonPrint->Size = System::Drawing::Size(75, 22);
			this->buttonPrint->TabIndex = 0;
			this->buttonPrint->Text = L"Print";
			this->buttonPrint->UseVisualStyleBackColor = true;
			this->buttonPrint->Click += gcnew System::EventHandler(this, &ItemsPurchaseable::buttonPrint_Click);
			// 
			// printDocument
			// 
			this->printDocument->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &ItemsPurchaseable::printDocument_PrintPage);
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
			// ItemsPurchaseable
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(530, 384);
			this->Controls->Add(this->splitContainer1);
			this->Controls->Add(this->statusStrip1);
			this->MinimumSize = System::Drawing::Size(538, 418);
			this->Name = L"ItemsPurchaseable";
			this->Text = L"ItemsPurchaseable";
			this->Load += gcnew System::EventHandler(this, &ItemsPurchaseable::ItemsPurchaseable_Load);
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
	private: System::Void ItemsPurchaseable_Load(System::Object^  sender, System::EventArgs^  e)
	{
		 try
		 {
			LoadPanel( dataAccessClass,   dataGridView,   "ItemsPurchaseable",   listView );
			//dataAccessClass->FillDataSet( "ItemsPurchaseable" );
			//dataGridView->DataSource = dataAccessClass->dataSet->Tables[ "ItemsPurchaseable" ];
		 }
		 catch( System::Exception^ e )
		 {
			 using namespace System::Windows::Forms;
			 MessageBox::Show( e->Message, "Error", MessageBoxButtons::OK, 
					           MessageBoxIcon::Exclamation );
		 }
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
	private: System::Void dataGridView_CurrentCellChanged(System::Object^  sender, System::EventArgs^  e)
	{
	   LoadFieldValues( dataGridView, listView, dataAccessClass,  "ItemsPurchaseable" );
	}
	private: System::Void buttonSave_Click(System::Object^  sender, System::EventArgs^  e)
	{
		try
		{
		   dataAccessClass->Update( "ItemsPurchaseable" );
		   dataAccessClass->dataSet->AcceptChanges();
		   dataAccessClass->FillDataSet( "ItemsPurchaseable" );
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
	       dataAccessClass->FillDataSet( "ItemsPurchaseable" );
	       dataGridView->DataSource = dataAccessClass->dataSet->Tables[ "ItemsPurchaseable" ];
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
