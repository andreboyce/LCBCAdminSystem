#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace LCBCAdminSystem
{

	/// <summary>
	/// Summary for BackupDialog
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class BackupDialog : public System::Windows::Forms::Form
	{
	public:
		BackupDialog(void)
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
		~BackupDialog()
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

	private: System::Windows::Forms::PictureBox^  pictureBoxLogo;
	private: System::Windows::Forms::Label^  label42;
	private: System::Windows::Forms::Label^  label43;

	private: System::Windows::Forms::Button^  buttonCreate;



	private: System::Windows::Forms::Button^  buttonRevert;

	private: System::Windows::Forms::DateTimePicker^  dateTimePicker;
	private: System::Windows::Forms::DataGridView^  dataGridView;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Date;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Size;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  FileName;







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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(BackupDialog::typeid));
			this->statusStrip = (gcnew System::Windows::Forms::StatusStrip());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->dateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->pictureBoxLogo = (gcnew System::Windows::Forms::PictureBox());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->splitContainer2 = (gcnew System::Windows::Forms::SplitContainer());
			this->dataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->Date = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Size = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->FileName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->buttonRevert = (gcnew System::Windows::Forms::Button());
			this->buttonCreate = (gcnew System::Windows::Forms::Button());
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxLogo))->BeginInit();
			this->splitContainer2->Panel1->SuspendLayout();
			this->splitContainer2->Panel2->SuspendLayout();
			this->splitContainer2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// statusStrip
			// 
			this->statusStrip->Location = System::Drawing::Point(0, 395);
			this->statusStrip->Name = L"statusStrip";
			this->statusStrip->Size = System::Drawing::Size(588, 22);
			this->statusStrip->TabIndex = 0;
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
			this->splitContainer1->Panel1->Controls->Add(this->dateTimePicker);
			this->splitContainer1->Panel1->Controls->Add(this->pictureBoxLogo);
			this->splitContainer1->Panel1->Controls->Add(this->label42);
			this->splitContainer1->Panel1->Controls->Add(this->label43);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->splitContainer2);
			this->splitContainer1->Size = System::Drawing::Size(588, 395);
			this->splitContainer1->SplitterDistance = 111;
			this->splitContainer1->SplitterWidth = 10;
			this->splitContainer1->TabIndex = 1;
			// 
			// dateTimePicker
			// 
			this->dateTimePicker->Enabled = false;
			this->dateTimePicker->Location = System::Drawing::Point(16, 53);
			this->dateTimePicker->Name = L"dateTimePicker";
			this->dateTimePicker->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker->TabIndex = 11;
			// 
			// pictureBoxLogo
			// 
			this->pictureBoxLogo->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBoxLogo.Image")));
			this->pictureBoxLogo->Location = System::Drawing::Point(316, 9);
			this->pictureBoxLogo->Name = L"pictureBoxLogo";
			this->pictureBoxLogo->Size = System::Drawing::Size(84, 98);
			this->pictureBoxLogo->TabIndex = 10;
			this->pictureBoxLogo->TabStop = false;
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label42->Location = System::Drawing::Point(60, 31);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(198, 19);
			this->label42->TabIndex = 9;
			this->label42->Text = L"BACKUP MANAGEMENT";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label43->Location = System::Drawing::Point(12, 9);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(298, 19);
			this->label43->TabIndex = 8;
			this->label43->Text = L"LOWER CARIBBEAN BIBLE COLLEGE";
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
			this->splitContainer2->Panel1->Controls->Add(this->dataGridView);
			// 
			// splitContainer2.Panel2
			// 
			this->splitContainer2->Panel2->Controls->Add(this->buttonRevert);
			this->splitContainer2->Panel2->Controls->Add(this->buttonCreate);
			this->splitContainer2->Size = System::Drawing::Size(588, 274);
			this->splitContainer2->SplitterDistance = 187;
			this->splitContainer2->SplitterWidth = 10;
			this->splitContainer2->TabIndex = 0;
			// 
			// dataGridView
			// 
			this->dataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {this->Date, this->Size, 
				this->FileName});
			this->dataGridView->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView->Location = System::Drawing::Point(0, 0);
			this->dataGridView->Name = L"dataGridView";
			this->dataGridView->Size = System::Drawing::Size(588, 187);
			this->dataGridView->TabIndex = 1;
			// 
			// Date
			// 
			this->Date->HeaderText = L"Date";
			this->Date->Name = L"Date";
			this->Date->Width = 200;
			// 
			// Size
			// 
			this->Size->HeaderText = L"Size";
			this->Size->Name = L"Size";
			// 
			// FileName
			// 
			this->FileName->HeaderText = L"FileName";
			this->FileName->Name = L"FileName";
			this->FileName->Width = 300;
			// 
			// buttonRevert
			// 
			this->buttonRevert->Location = System::Drawing::Point(449, 3);
			this->buttonRevert->Name = L"buttonRevert";
			this->buttonRevert->Size = System::Drawing::Size(75, 23);
			this->buttonRevert->TabIndex = 1;
			this->buttonRevert->Text = L"Revert";
			this->buttonRevert->UseVisualStyleBackColor = true;
			this->buttonRevert->Click += gcnew System::EventHandler(this, &BackupDialog::buttonRevert_Click);
			// 
			// buttonCreate
			// 
			this->buttonCreate->Location = System::Drawing::Point(368, 3);
			this->buttonCreate->Name = L"buttonCreate";
			this->buttonCreate->Size = System::Drawing::Size(75, 23);
			this->buttonCreate->TabIndex = 0;
			this->buttonCreate->Text = L"Create";
			this->buttonCreate->UseVisualStyleBackColor = true;
			this->buttonCreate->Click += gcnew System::EventHandler(this, &BackupDialog::buttonCreate_Click);
			// 
			// BackupDialog
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(588, 417);
			this->Controls->Add(this->splitContainer1);
			this->Controls->Add(this->statusStrip);
			this->MinimumSize = System::Drawing::Size(535, 451);
			this->Name = L"BackupDialog";
			this->Text = L"BackupDialog";
			this->Load += gcnew System::EventHandler(this, &BackupDialog::BackupDialog_Load);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel1->PerformLayout();
			this->splitContainer1->Panel2->ResumeLayout(false);
			this->splitContainer1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxLogo))->EndInit();
			this->splitContainer2->Panel1->ResumeLayout(false);
			this->splitContainer2->Panel2->ResumeLayout(false);
			this->splitContainer2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
    private: System::Void BackupDialog_Load(System::Object^  sender, System::EventArgs^  e)
	{
		try
		{
			System::IO::DirectoryInfo^    directory = gcnew System::IO::DirectoryInfo("../data/");
			cli::array<System::IO::FileInfo^>^ files = directory->GetFiles( "*.mdb" );
			for( int i=0 ; i<files->Length ; i++ )
			{
				if( files[i]->Name == "data.mdb" )
					continue;
				System::Windows::Forms::DataGridViewRow^ row   = gcnew System::Windows::Forms::DataGridViewRow();
				dataGridView->Rows->Add( row );
				int index = dataGridView->Rows->Count-2;
				dataGridView->Rows[index]->Cells["Date"]->Value     = files[i]->LastWriteTime;
				dataGridView->Rows[index]->Cells["Size"]->Value     = files[i]->Length;
				dataGridView->Rows[index]->Cells["FileName"]->Value = files[i]->Name;
			}
		}
		catch( System::Exception^ e )
		{
			using namespace System::Windows::Forms;
			MessageBox::Show( e->Message, "Error", MessageBoxButtons::OK, 
					          MessageBoxIcon::Exclamation );
		}
	}

	private: System::Void buttonCreate_Click(System::Object^  sender, System::EventArgs^  e)
	{
		try
		{
		   System::String^   data_file = gcnew System::String( "../data/data.mdb" );
		   System::String^ backup_file = gcnew System::String("");
		   backup_file = System::IO::Path::GetDirectoryName( data_file ) + System::IO::Path::DirectorySeparatorChar + dateTimePicker->Text + " " + System::IO::Path::GetFileName( data_file );
	       System::IO::File::Copy( data_file, backup_file, false );
		}
		catch( System::Exception^ e )
		{
			using namespace System::Windows::Forms;
			MessageBox::Show( e->Message, "Error", MessageBoxButtons::OK, 
					          MessageBoxIcon::Exclamation );
		}
	}
	private: System::Void buttonRevert_Click( System::Object^  sender, System::EventArgs^ e )
	{
		try
		{
			System::IO::DirectoryInfo^    directory = gcnew System::IO::DirectoryInfo("../data/");
			cli::array<System::IO::FileInfo^>^ files = directory->GetFiles( "*.mdb" );
			int index = dataGridView->CurrentRow->Index;
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
