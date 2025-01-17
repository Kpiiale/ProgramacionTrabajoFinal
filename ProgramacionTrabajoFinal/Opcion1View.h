#pragma once

namespace ProgramacionTrabajoFinal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Opcion1View
	/// </summary>
	public ref class Opcion1View : public System::Windows::Forms::Form
	{
	public:
		Opcion1View(void)
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
		~Opcion1View()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Preguntalbl;
	protected:

	private: System::Windows::Forms::TextBox^ Opc1txt;

	private: System::Windows::Forms::Button^ Calcular1btn;


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
			this->Preguntalbl = (gcnew System::Windows::Forms::Label());
			this->Opc1txt = (gcnew System::Windows::Forms::TextBox());
			this->Calcular1btn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Preguntalbl
			// 
			this->Preguntalbl->AutoSize = true;
			this->Preguntalbl->Location = System::Drawing::Point(88, 25);
			this->Preguntalbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Preguntalbl->Name = L"Preguntalbl";
			this->Preguntalbl->Size = System::Drawing::Size(190, 16);
			this->Preguntalbl->TabIndex = 0;
			this->Preguntalbl->Text = L"Ingrese el numero que adivinó:";
			// 
			// Opc1txt
			// 
			this->Opc1txt->Location = System::Drawing::Point(117, 65);
			this->Opc1txt->Margin = System::Windows::Forms::Padding(4);
			this->Opc1txt->Name = L"Opc1txt";
			this->Opc1txt->Size = System::Drawing::Size(132, 22);
			this->Opc1txt->TabIndex = 1;
			// 
			// Calcular1btn
			// 
			this->Calcular1btn->Location = System::Drawing::Point(137, 117);
			this->Calcular1btn->Margin = System::Windows::Forms::Padding(4);
			this->Calcular1btn->Name = L"Calcular1btn";
			this->Calcular1btn->Size = System::Drawing::Size(100, 28);
			this->Calcular1btn->TabIndex = 3;
			this->Calcular1btn->Text = L"Calcular";
			this->Calcular1btn->UseVisualStyleBackColor = true;
			this->Calcular1btn->Click += gcnew System::EventHandler(this, &Opcion1View::Calcular1btn_Click);
			// 
			// Opcion1View
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(379, 203);
			this->Controls->Add(this->Calcular1btn);
			this->Controls->Add(this->Opc1txt);
			this->Controls->Add(this->Preguntalbl);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Opcion1View";
			this->Load += gcnew System::EventHandler(this, &Opcion1View::Opcion1View_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void Opcion1View_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Calcular1btn_Click(System::Object^ sender, System::EventArgs^ e) {
		int num; 
		if (Int32::TryParse(this->Opc1txt->Text, num)) {
			if (num % 2 == 0) {
				MessageBox::Show(L"El número es par.");
				
			}
			else {
				MessageBox::Show(L"El número es impar.");
				
			}
			MessageBox::Show(L"¡Ha ganado 10 dólares! ");
			this->Close();
		};

	}
};
}
