#pragma once

namespace ProgramacionTrabajoFinal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Opcion2View
	/// </summary>
	public ref class Opcion2View : public System::Windows::Forms::Form
	{
	public:
		Opcion2View(void)
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
		~Opcion2View()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Opc2lbl;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;

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
			this->Opc2lbl = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// Opc2lbl
			// 
			this->Opc2lbl->AutoSize = true;
			this->Opc2lbl->Location = System::Drawing::Point(62, 9);
			this->Opc2lbl->Name = L"Opc2lbl";
			this->Opc2lbl->Size = System::Drawing::Size(152, 13);
			this->Opc2lbl->TabIndex = 0;
			this->Opc2lbl->Text = L"Ingrese el numero que adivinó:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(84, 42);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 1;
			// 
			// Opcion2View
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->Opc2lbl);
			this->Name = L"Opcion2View";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
