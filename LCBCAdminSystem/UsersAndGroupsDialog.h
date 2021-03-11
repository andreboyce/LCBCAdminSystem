#pragma once

#include "UserNameAndPassword.h"
#include "LoginDialog.h"
#include "DataAccessClass.h"
#include "AddUser.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

namespace LCBCAdminSystem
{

	/// <summary>
	/// Summary for UsersAndGroupsDialog
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class UsersAndGroupsDialog : public System::Windows::Forms::Form
	{
	public:
		UsersAndGroupsDialog(void)
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
		~UsersAndGroupsDialog()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  buttonAddUser;
	protected: 
	private: System::Windows::Forms::Button^  buttonManageGroups;

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
			this->buttonAddUser = (gcnew System::Windows::Forms::Button());
			this->buttonManageGroups = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// buttonAddUser
			// 
			this->buttonAddUser->Location = System::Drawing::Point(44, 66);
			this->buttonAddUser->Name = L"buttonAddUser";
			this->buttonAddUser->Size = System::Drawing::Size(75, 23);
			this->buttonAddUser->TabIndex = 0;
			this->buttonAddUser->Text = L"Add User";
			this->buttonAddUser->UseVisualStyleBackColor = true;
			this->buttonAddUser->Click += gcnew System::EventHandler(this, &UsersAndGroupsDialog::buttonAddUser_Click);
			// 
			// buttonManageGroups
			// 
			this->buttonManageGroups->Enabled = false;
			this->buttonManageGroups->Location = System::Drawing::Point(138, 66);
			this->buttonManageGroups->Name = L"buttonManageGroups";
			this->buttonManageGroups->Size = System::Drawing::Size(111, 23);
			this->buttonManageGroups->TabIndex = 1;
			this->buttonManageGroups->Text = L"Manage Groups";
			this->buttonManageGroups->UseVisualStyleBackColor = true;
			// 
			// UsersAndGroupsDialog
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(279, 138);
			this->Controls->Add(this->buttonManageGroups);
			this->Controls->Add(this->buttonAddUser);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(287, 172);
			this->Name = L"UsersAndGroupsDialog";
			this->Text = L"UsersAndGroupsDialog";
			this->Load += gcnew System::EventHandler(this, &UsersAndGroupsDialog::UsersAndGroupsDialog_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	bool CheckUserNameAndPassword( LCBCAdminSystem::UserNameAndPassword^ userNameAndPassword )
	{
	   LCBCAdminSystem::DataAccessClass^ dataAccessClass = gcnew LCBCAdminSystem::DataAccessClass();
	   dataAccessClass->FillDataSet( "Users" );
	   System::Data::DataRow^ dataRow = dataAccessClass->FindRow( "UserName", userNameAndPassword->UserName );
	   if( dataRow == nullptr )
	   {
		   //MessageBox::Show( "No user with that Name exists." );
		   return false;
	   }
	   else
	   {
	      if( System::String::Compare( userNameAndPassword->Password, dataRow["Password"]->ToString() ) == 0 )
		  {
			  return true;
		  }
	   }
	   return false;
	}

	private: System::Void UsersAndGroupsDialog_Load(System::Object^  sender, System::EventArgs^  e)
	{
	}
	private: System::Void buttonAddUser_Click(System::Object^  sender, System::EventArgs^  e)
	{
	   bool password_good = false;
	   //do
	   //{
	   MessageBox::Show( "You Must Login To Access This Feature.\n\nFor the purposes of this demonstration\nThe UserName is: LCBC\nThe password is: Bible" );
	      LoginDialog ^ld = gcnew LoginDialog();
	      ld->ShowDialog();
	      //LCBCAdminSystem::UserNameAndPassword^ userNameAndPassword = safe_cast<LCBCAdminSystem::UserNameAndPassword^>(ld->Tag);
	      LCBCAdminSystem::UserNameAndPassword^ userNameAndPassword = reinterpret_cast<LCBCAdminSystem::UserNameAndPassword^>(ld->Tag);
	      password_good = CheckUserNameAndPassword( userNameAndPassword );
		  if( password_good == false )
		  {
			  MessageBox::Show( "Bad UserName and Password pair." );
		  }
		  else
		  {
			 AddUser ^au = gcnew AddUser();
		     au->ShowDialog();
		  }
	   //}
	   //while( password_good == false );
	}
};
}
