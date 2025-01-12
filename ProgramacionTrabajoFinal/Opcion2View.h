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
	private: System::Windows::Forms::TextBox^ Opc2txt;
	private: System::Windows::Forms::Button^ Calcular2btn;

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
			this->Opc2lbl = (gcnew System::Windows::Forms::Label());
			this->Opc2txt = (gcnew System::Windows::Forms::TextBox());
			this->Calcular2btn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Opc2lbl
			// 
			this->Opc2lbl->AutoSize = true;
			this->Opc2lbl->Location = System::Drawing::Point(66, 9);
			this->Opc2lbl->Name = L"Opc2lbl";
			this->Opc2lbl->Size = System::Drawing::Size(152, 13);
			this->Opc2lbl->TabIndex = 0;
			this->Opc2lbl->Text = L"Ingrese el numero que adivinó:";
			// 
			// Opc2txt
			// 
			this->Opc2txt->Location = System::Drawing::Point(95, 42);
			this->Opc2txt->Name = L"Opc2txt";
			this->Opc2txt->Size = System::Drawing::Size(100, 20);
			this->Opc2txt->TabIndex = 1;
			// 
			// Calcular2btn
			// 
			this->Calcular2btn->Location = System::Drawing::Point(109, 85);
			this->Calcular2btn->Name = L"Calcular2btn";
			this->Calcular2btn->Size = System::Drawing::Size(75, 23);
			this->Calcular2btn->TabIndex = 2;
			this->Calcular2btn->Text = L"Calcular";
			this->Calcular2btn->UseVisualStyleBackColor = true;
			this->Calcular2btn->Click += gcnew System::EventHandler(this, &Opcion2View::Calcular2btn_Click);
			// 
			// Opcion2View
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 138);
			this->Controls->Add(this->Calcular2btn);
			this->Controls->Add(this->Opc2txt);
			this->Controls->Add(this->Opc2lbl);
			this->Name = L"Opcion2View";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Calcular2btn_Click(System::Object^ sender, System::EventArgs^ e) {
		int num;
		if (Int32::TryParse(this->Opc2txt->Text, num)) {
			System::Text::StringBuilder^ resultado = gcnew System::Text::StringBuilder();
			for (int i = 2; i <= num; i += 2) {
				resultado->AppendLine(i.ToString());
			}
			MessageBox::Show(resultado->ToString(), L"Numero pares menores o iguales");
			MessageBox::Show(L"¡Usted se ha ganado un cupón de descuento del 50%! ");
			this->Close();
		}
		else {
			MessageBox::Show(L"Por favor, ingrese un número válido mayor a 0.", L"Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	};
}
