#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace LCBCAdminSystem {

	/// <summary>
	/// Summary for StudentAddedDialog
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class StudentAddedDialog : public System::Windows::Forms::Form
	{
	public:
		StudentAddedDialog(void)
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
		~StudentAddedDialog()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  buttonClose;
	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  buttonAddAnother;

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
			this->buttonClose = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->buttonAddAnother = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// buttonClose
			// 
			this->buttonClose->Location = System::Drawing::Point(110, 25);
			this->buttonClose->Name = L"buttonClose";
			this->buttonClose->Size = System::Drawing::Size(75, 23);
			this->buttonClose->TabIndex = 6;
			this->buttonClose->Text = L"Close";
			this->buttonClose->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(36, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(138, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Record Successfully Added";
			// 
			// buttonAddAnother
			// 
			this->buttonAddAnother->Location = System::Drawing::Point(29, 25);
			this->buttonAddAnother->Name = L"buttonAddAnother";
			this->buttonAddAnother->Size = System::Drawing::Size(75, 23);
			this->buttonAddAnother->TabIndex = 4;
			this->buttonAddAnother->Text = L"Add Another";
			this->buttonAddAnother->UseVisualStyleBackColor = true;
			// 
			// StudentAddedDialog
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(229, 57);
			this->Controls->Add(this->buttonClose);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->buttonAddAnother);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(237, 91);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(237, 91);
			this->Name = L"StudentAddedDialog";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"StudentAddedDialog";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
