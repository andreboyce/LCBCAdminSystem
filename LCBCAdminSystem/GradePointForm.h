#pragma once

#include "DataGridViewPrinter.h"
#include "LoadPanel.h"
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
	/// Summary for GradePointForm
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class GradePointForm : public System::Windows::Forms::Form
	{
	public:
		GradePointForm(void)
		{
			InitializeComponent();
			dataAccessClass   = gcnew LCBCAdminSystem::DataAccessClass();
			dataGridViewPrinter = gcnew DataGridViewPrinter( dataGridView, printDocument, true, true, "Title", this->Font, Color::Black, true );
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~GradePointForm()
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

	protected: 
	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	private: System::Windows::Forms::SplitContainer^  splitContainer2;
	private: System::Windows::Forms::SplitContainer^  splitContainer3;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::DataGridView^  dataGridView;

	private: System::Windows::Forms::ListView^  listView;

	private: System::Windows::Forms::ColumnHeader^  Grade;
	private: System::Windows::Forms::ColumnHeader^  Range;
	private: System::Windows::Forms::PictureBox^  pictureBoxLogo;
	private: System::Windows::Forms::Button^  buttonPrint;
	private: System::Windows::Forms::PrintPreviewDialog^  printPreviewDialog;
	private: System::Drawing::Printing::PrintDocument^  printDocument;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker;
	private: System::Windows::Forms::Button^  buttonSave;
	private: System::Windows::Forms::Button^  buttonReload;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(GradePointForm::typeid));
			this->statusStrip = (gcnew System::Windows::Forms::StatusStrip());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->pictureBoxLogo = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->splitContainer2 = (gcnew System::Windows::Forms::SplitContainer());
			this->splitContainer3 = (gcnew System::Windows::Forms::SplitContainer());
			this->listView = (gcnew System::Windows::Forms::ListView());
			this->Grade = (gcnew System::Windows::Forms::ColumnHeader());
			this->Range = (gcnew System::Windows::Forms::ColumnHeader());
			this->dataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->buttonReload = (gcnew System::Windows::Forms::Button());
			this->buttonSave = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->buttonPrint = (gcnew System::Windows::Forms::Button());
			this->printPreviewDialog = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->printDocument = (gcnew System::Drawing::Printing::PrintDocument());
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// statusStrip
			// 
			this->statusStrip->Location = System::Drawing::Point(0, 457);
			this->statusStrip->Name = L"statusStrip";
			this->statusStrip->Size = System::Drawing::Size(561, 22);
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
			this->splitContainer1->Panel1->Controls->Add(this->pictureBoxLogo);
			this->splitContainer1->Panel1->Controls->Add(this->label2);
			this->splitContainer1->Panel1->Controls->Add(this->label1);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->splitContainer2);
			this->splitContainer1->Size = System::Drawing::Size(561, 457);
			this->splitContainer1->SplitterDistance = 76;
			this->splitContainer1->SplitterWidth = 10;
			this->splitContainer1->TabIndex = 1;
			// 
			// pictureBoxLogo
			// 
			this->pictureBoxLogo->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBoxLogo.Image")));
			this->pictureBoxLogo->Location = System::Drawing::Point(308, 3);
			this->pictureBoxLogo->Name = L"pictureBoxLogo";
			this->pictureBoxLogo->Size = System::Drawing::Size(81, 70);
			this->pictureBoxLogo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxLogo->TabIndex = 9;
			this->pictureBoxLogo->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(91, 36);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(121, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"GRADE POINT FORM";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(65, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(213, 13);
			this->label1->TabIndex = 7;
			this->label1->Text = L"LOWER CARIBBEAN BIBLE COLLEGE";
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
			this->splitContainer2->Panel2->Controls->Add(this->dateTimePicker);
			this->splitContainer2->Panel2->Controls->Add(this->buttonPrint);
			this->splitContainer2->Size = System::Drawing::Size(561, 371);
			this->splitContainer2->SplitterDistance = 288;
			this->splitContainer2->SplitterWidth = 10;
			this->splitContainer2->TabIndex = 0;
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
			this->splitContainer3->Size = System::Drawing::Size(561, 288);
			this->splitContainer3->SplitterDistance = 184;
			this->splitContainer3->SplitterWidth = 10;
			this->splitContainer3->TabIndex = 0;
			// 
			// listView
			// 
			this->listView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) {this->Grade, this->Range});
			this->listView->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listView->GridLines = true;
			this->listView->Location = System::Drawing::Point(0, 0);
			this->listView->Name = L"listView";
			this->listView->Size = System::Drawing::Size(184, 288);
			this->listView->TabIndex = 0;
			this->listView->UseCompatibleStateImageBehavior = false;
			this->listView->View = System::Windows::Forms::View::Details;
			// 
			// Grade
			// 
			this->Grade->Text = L"Grade";
			this->Grade->Width = 91;
			// 
			// Range
			// 
			this->Range->Text = L"Range";
			this->Range->Width = 92;
			// 
			// dataGridView
			// 
			this->dataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView->Location = System::Drawing::Point(0, 0);
			this->dataGridView->Name = L"dataGridView";
			this->dataGridView->Size = System::Drawing::Size(367, 288);
			this->dataGridView->TabIndex = 0;
			this->dataGridView->CurrentCellChanged += gcnew System::EventHandler(this, &GradePointForm::dataGridView_CurrentCellChanged);
			// 
			// buttonReload
			// 
			this->buttonReload->Location = System::Drawing::Point(275, 3);
			this->buttonReload->Name = L"buttonReload";
			this->buttonReload->Size = System::Drawing::Size(75, 23);
			this->buttonReload->TabIndex = 12;
			this->buttonReload->Text = L"Reload";
			this->buttonReload->UseVisualStyleBackColor = true;
			this->buttonReload->Click += gcnew System::EventHandler(this, &GradePointForm::buttonReload_Click);
			// 
			// buttonSave
			// 
			this->buttonSave->Location = System::Drawing::Point(194, 3);
			this->buttonSave->Name = L"buttonSave";
			this->buttonSave->Size = System::Drawing::Size(75, 23);
			this->buttonSave->TabIndex = 11;
			this->buttonSave->Text = L"Save";
			this->buttonSave->UseVisualStyleBackColor = true;
			this->buttonSave->Click += gcnew System::EventHandler(this, &GradePointForm::buttonSave_Click);
			// 
			// dateTimePicker
			// 
			this->dateTimePicker->Enabled = false;
			this->dateTimePicker->Location = System::Drawing::Point(361, 6);
			this->dateTimePicker->Name = L"dateTimePicker";
			this->dateTimePicker->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker->TabIndex = 10;
			// 
			// buttonPrint
			// 
			this->buttonPrint->Location = System::Drawing::Point(109, 3);
			this->buttonPrint->Name = L"buttonPrint";
			this->buttonPrint->Size = System::Drawing::Size(75, 23);
			this->buttonPrint->TabIndex = 0;
			this->buttonPrint->Text = L"Print";
			this->buttonPrint->UseVisualStyleBackColor = true;
			this->buttonPrint->Click += gcnew System::EventHandler(this, &GradePointForm::buttonPrint_Click);
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
			this->printDocument->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &GradePointForm::printDocument_PrintPage);
			// 
			// GradePointForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(561, 479);
			this->Controls->Add(this->splitContainer1);
			this->Controls->Add(this->statusStrip);
			this->Name = L"GradePointForm";
			this->Text = L"GradePointForm";
			this->Load += gcnew System::EventHandler(this, &GradePointForm::GradePointForm_Load);
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
			this->splitContainer3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		 private: System::Void GradePointForm_Load(System::Object^  sender, System::EventArgs^  e)
		 {
			 LoadPanel( dataAccessClass,   dataGridView,   "GradePoint",   listView );
		 }

	 	 private: System::Void dataGridView_CurrentCellChanged(System::Object^  sender, System::EventArgs^  e)
		 {
			 LoadFieldValues( dataGridView, listView, dataAccessClass, "GradePoint" );
		 }

	     //// Button Print Click
		 private: System::Void buttonPrint_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 printPreviewDialog->ShowDialog();
		 }

		 private: System::Void printDocument_PrintPage(System::Object^  sender, System::Drawing::Printing::PrintPageEventArgs^  e)
		 {
			//System::Drawing::Font^         font = gcnew System::Drawing::Font( this->Font, System::Drawing::FontStyle::Regular );
            //System::Drawing::Graphics^ graphics = e->Graphics;
			//float starting_y_position = printHeader( graphics, font );
			//DrawDataGridView( System::Drawing::PointF( 0, starting_y_position ), dateTimePicker, font, graphics, dataGridView, dataAccessClass );
	        bool more = dataGridViewPrinter->DrawDataGridView( e->Graphics );
			if( more == true )
			{
			   e->HasMorePages = true;
			}
		 }
		 private: System::Void buttonSave_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			try
			{
			   dataAccessClass->Update( "GradePoint" );
			   dataAccessClass->dataSet->AcceptChanges();
			   dataAccessClass->FillDataSet( "GradePoint" );
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
		       dataAccessClass->FillDataSet( "GradePoint" );
		       dataGridView->DataSource = dataAccessClass->dataSet->Tables[ "GradePoint" ];
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
