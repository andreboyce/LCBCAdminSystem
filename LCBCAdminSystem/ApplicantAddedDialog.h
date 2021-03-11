#pragma once

#include "Applicants.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace LCBCAdminSystem {

	/// <summary>
	/// Summary for ApplicantAddedDialog
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class ApplicantAddedDialog : public System::Windows::Forms::Form
	{
	public:
		ApplicantAddedDialog(void)
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
		~ApplicantAddedDialog()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Button^  buttonAddAnother;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  buttonClose;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonAddAnother = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->buttonClose = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(80, 77);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 13);
			this->label1->TabIndex = 0;
			// 
			// buttonAddAnother
			// 
			this->buttonAddAnother->Location = System::Drawing::Point(48, 25);
			this->buttonAddAnother->Name = L"buttonAddAnother";
			this->buttonAddAnother->Size = System::Drawing::Size(75, 23);
			this->buttonAddAnother->TabIndex = 1;
			this->buttonAddAnother->Text = L"Add Another";
			this->buttonAddAnother->UseVisualStyleBackColor = true;
			this->buttonAddAnother->Click += gcnew System::EventHandler(this, &ApplicantAddedDialog::buttonAddAnother_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(55, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(138, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Record Successfully Added";
			// 
			// buttonClose
			// 
			this->buttonClose->Location = System::Drawing::Point(129, 25);
			this->buttonClose->Name = L"buttonClose";
			this->buttonClose->Size = System::Drawing::Size(75, 23);
			this->buttonClose->TabIndex = 3;
			this->buttonClose->Text = L"Close";
			this->buttonClose->UseVisualStyleBackColor = true;
			this->buttonClose->Click += gcnew System::EventHandler(this, &ApplicantAddedDialog::buttonClose_Click);
			// 
			// ApplicantAddedDialog
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(245, 56);
			this->Controls->Add(this->buttonClose);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->buttonAddAnother);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(253, 90);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(253, 90);
			this->Name = L"ApplicantAddedDialog";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"ApplicantAddedDialog";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &ApplicantAddedDialog::ApplicantAddedDialog_FormClosed);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonAddAnother_Click(System::Object^  sender, System::EventArgs^  e)
	{
		Close();
	}
	private: System::Void buttonClose_Click(System::Object^  sender, System::EventArgs^  e)
	{
		Applicants^ ad = gcnew Applicants();
		ad->ShowDialog();
	}
	private: System::Void ApplicantAddedDialog_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e)
	{
		Applicants^ ad = gcnew Applicants();
		ad->ShowDialog();
	}
};
}
