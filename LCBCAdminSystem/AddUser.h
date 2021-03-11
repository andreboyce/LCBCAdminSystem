#pragma once

#include "UserNameAndPassword.h"
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
	/// Summary for AddUser
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class AddUser : public System::Windows::Forms::Form
	{
	public:
		AddUser(void)
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
		~AddUser()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected: 
	private: System::Windows::Forms::TextBox^  textBoxUserName;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBoxPassword;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  buttonSubmit;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBoxConfirmPassword;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::ComboBox^  comboBoxGroup;



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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBoxGroup = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxConfirmPassword = (gcnew System::Windows::Forms::TextBox());
			this->textBoxUserName = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxPassword = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonSubmit = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->comboBoxGroup);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBoxConfirmPassword);
			this->groupBox1->Controls->Add(this->textBoxUserName);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBoxPassword);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(275, 180);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Enter Your Username And Password";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 140);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(36, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Group";
			// 
			// comboBoxGroup
			// 
			this->comboBoxGroup->FormattingEnabled = true;
			this->comboBoxGroup->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Administrator", L"Assistant"});
			this->comboBoxGroup->Location = System::Drawing::Point(97, 137);
			this->comboBoxGroup->Name = L"comboBoxGroup";
			this->comboBoxGroup->Size = System::Drawing::Size(164, 21);
			this->comboBoxGroup->TabIndex = 7;
			this->comboBoxGroup->Text = L"Administrator";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 102);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(91, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Confirm Password";
			// 
			// textBoxConfirmPassword
			// 
			this->textBoxConfirmPassword->Location = System::Drawing::Point(97, 99);
			this->textBoxConfirmPassword->Name = L"textBoxConfirmPassword";
			this->textBoxConfirmPassword->PasswordChar = '*';
			this->textBoxConfirmPassword->Size = System::Drawing::Size(164, 20);
			this->textBoxConfirmPassword->TabIndex = 5;
			this->textBoxConfirmPassword->UseSystemPasswordChar = true;
			// 
			// textBoxUserName
			// 
			this->textBoxUserName->Location = System::Drawing::Point(97, 19);
			this->textBoxUserName->Name = L"textBoxUserName";
			this->textBoxUserName->Size = System::Drawing::Size(164, 20);
			this->textBoxUserName->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 63);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Password";
			// 
			// textBoxPassword
			// 
			this->textBoxPassword->Location = System::Drawing::Point(97, 60);
			this->textBoxPassword->Name = L"textBoxPassword";
			this->textBoxPassword->PasswordChar = '*';
			this->textBoxPassword->Size = System::Drawing::Size(164, 20);
			this->textBoxPassword->TabIndex = 2;
			this->textBoxPassword->UseSystemPasswordChar = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"User Name";
			// 
			// buttonSubmit
			// 
			this->buttonSubmit->Location = System::Drawing::Point(198, 198);
			this->buttonSubmit->Name = L"buttonSubmit";
			this->buttonSubmit->Size = System::Drawing::Size(75, 23);
			this->buttonSubmit->TabIndex = 6;
			this->buttonSubmit->Text = L"Submit";
			this->buttonSubmit->UseVisualStyleBackColor = true;
			this->buttonSubmit->Click += gcnew System::EventHandler(this, &AddUser::buttonLogin_Click);
			// 
			// AddUser
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(310, 246);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->buttonSubmit);
			this->Name = L"AddUser";
			this->Text = L"AddUser";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void buttonLogin_Click( System::Object^ sender, System::EventArgs^ e )
    {
	   try
	   {
		   LCBCAdminSystem::DataAccessClass^ dataAccessClass = gcnew LCBCAdminSystem::DataAccessClass();
		   dataAccessClass->FillDataSet( "Users" );
		   System::Data::DataRow^ dataRow = dataAccessClass->dataSet->Tables[ "Users" ]->NewRow();
		   if( System::String::Compare( this->textBoxPassword->Text, this->textBoxConfirmPassword->Text ) != 0 )
		   {
			   System::Exception^ ex = gcnew System::Exception( "Pasword and confirmation do not match." );
			   throw ex;
		   }
		   dataRow["ID"]       = dataAccessClass->dataSet->Tables["Users"]->Rows->Count;
		   dataRow["UserName"] = this->textBoxUserName->Text;
		   dataRow["Password"] = this->textBoxPassword->Text;
		   dataRow["Group"]    = this->comboBoxGroup->Text;
		   dataAccessClass->dataSet->Tables[ "Users" ]->Rows->Add( dataRow );
		   dataAccessClass->Update( "Users" );
		   System::String^ message = gcnew System::String( "" );
		   message = "User: " + this->textBoxUserName->Text + " Added.";
		   MessageBox::Show( message );
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
