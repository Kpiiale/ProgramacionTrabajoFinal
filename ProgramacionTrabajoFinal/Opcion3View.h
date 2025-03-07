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
	private: System::Windows::Forms::Label^ Preguntalbl;
	protected:

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
			this->Preguntalbl = (gcnew System::Windows::Forms::Label());
			this->Opc3txt = (gcnew System::Windows::Forms::TextBox());
			this->Calcular3btn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Preguntalbl
			// 
			this->Preguntalbl->AutoSize = true;
			this->Preguntalbl->Location = System::Drawing::Point(99, 11);
			this->Preguntalbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Preguntalbl->Name = L"Preguntalbl";
			this->Preguntalbl->Size = System::Drawing::Size(187, 16);
			this->Preguntalbl->TabIndex = 0;
			this->Preguntalbl->Text = L"Ingrese el n�mero que adivin�";
			// 
			// Opc3txt
			// 
			this->Opc3txt->Location = System::Drawing::Point(129, 59);
			this->Opc3txt->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Opc3txt->Name = L"Opc3txt";
			this->Opc3txt->Size = System::Drawing::Size(132, 22);
			this->Opc3txt->TabIndex = 1;
			// 
			// Calcular3btn
			// 
			this->Calcular3btn->Location = System::Drawing::Point(151, 128);
			this->Calcular3btn->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Calcular3btn->Name = L"Calcular3btn";
			this->Calcular3btn->Size = System::Drawing::Size(100, 28);
			this->Calcular3btn->TabIndex = 2;
			this->Calcular3btn->Text = L"Calcular";
			this->Calcular3btn->UseVisualStyleBackColor = true;
			this->Calcular3btn->Click += gcnew System::EventHandler(this, &Opcion3View::Calcular3btn_Click);
			// 
			// Opcion3View
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(399, 209);
			this->Controls->Add(this->Calcular3btn);
			this->Controls->Add(this->Opc3txt);
			this->Controls->Add(this->Preguntalbl);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
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
			MessageBox::Show(L"Su nuevo n�mero es: " + nuevoNumero.ToString(),L"Resultado del C�lculo");
			MessageBox::Show(L"El inverso de su n�mero es: " + inverso.ToString(), L"Resultado Inverso"); 
			MessageBox::Show(L"�Felicidades! Usted se ha ganado un viaje de fin de semana."); 
			this->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show(L"Por favor, ingrese un n�mero v�lido.", L"Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			this->Close();  
		}
	}
	}; 
}
