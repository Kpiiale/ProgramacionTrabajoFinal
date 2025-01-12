#pragma once

namespace ProgramacionTrabajoFinal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Opcion3View
	/// </summary>
	public ref class Opcion3View : public System::Windows::Forms::Form
	{
	public:
		Opcion3View(void)
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
		~Opcion3View()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Opc3lbl;
	private: System::Windows::Forms::TextBox^ Opc3txt;
	private: System::Windows::Forms::Button^ Calcular3btn;
	protected:



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Opc3lbl = (gcnew System::Windows::Forms::Label());
			this->Opc3txt = (gcnew System::Windows::Forms::TextBox());
			this->Calcular3btn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Opc3lbl
			// 
			this->Opc3lbl->AutoSize = true;
			this->Opc3lbl->Location = System::Drawing::Point(74, 9);
			this->Opc3lbl->Name = L"Opc3lbl";
			this->Opc3lbl->Size = System::Drawing::Size(149, 13);
			this->Opc3lbl->TabIndex = 0;
			this->Opc3lbl->Text = L"Ingrese el número que adivinó";
			// 
			// Opc3txt
			// 
			this->Opc3txt->Location = System::Drawing::Point(97, 48);
			this->Opc3txt->Name = L"Opc3txt";
			this->Opc3txt->Size = System::Drawing::Size(100, 20);
			this->Opc3txt->TabIndex = 1;
			// 
			// Calcular3btn
			// 
			this->Calcular3btn->Location = System::Drawing::Point(113, 104);
			this->Calcular3btn->Name = L"Calcular3btn";
			this->Calcular3btn->Size = System::Drawing::Size(75, 23);
			this->Calcular3btn->TabIndex = 2;
			this->Calcular3btn->Text = L"Calcular";
			this->Calcular3btn->UseVisualStyleBackColor = true;
			this->Calcular3btn->Click += gcnew System::EventHandler(this, &Opcion3View::Calcular3btn_Click);
			// 
			// Opcion3View
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(299, 170);
			this->Controls->Add(this->Calcular3btn);
			this->Controls->Add(this->Opc3txt);
			this->Controls->Add(this->Opc3lbl);
			this->Name = L"Opcion3View";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Calcular3btn_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			int num = Convert::ToInt32(Opc3txt->Text);
			int nuevoNumero = num * 45;
			int inverso = 0;
			int temp = nuevoNumero;
			while (temp > 0) {
				int dig = temp % 10;
				inverso = (inverso * 10) + dig;
				temp /= 10;
			}
			MessageBox::Show(L"Su nuevo número es: " + nuevoNumero.ToString(),L"Resultado del Cálculo");
			MessageBox::Show(L"El inverso de su número es: " + inverso.ToString(), L"Resultado Inverso"); 
			MessageBox::Show(L"¡Felicidades! Usted se ha ganado un viaje de fin de semana."); 
			this->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show(L"Por favor, ingrese un número válido.", L"Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			this->Close();  
		}
	}
	}; 
}
