#pragma once

namespace ProgramacionTrabajoFinal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Opcion4View
	/// </summary>
	public ref class Opcion4View : public System::Windows::Forms::Form
	{
	public:
		Opcion4View(void)
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
		~Opcion4View()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Pregunta1lbl;
	protected:
	private: System::Windows::Forms::TextBox^ NumOpc4txt;
	private: System::Windows::Forms::Label^ Pregunta2lbl;
	private: System::Windows::Forms::TextBox^ IntentOpc4txt;
	private: System::Windows::Forms::Button^ Calcular4btn;

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
			this->Pregunta1lbl = (gcnew System::Windows::Forms::Label());
			this->NumOpc4txt = (gcnew System::Windows::Forms::TextBox());
			this->Pregunta2lbl = (gcnew System::Windows::Forms::Label());
			this->IntentOpc4txt = (gcnew System::Windows::Forms::TextBox());
			this->Calcular4btn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Pregunta1lbl
			// 
			this->Pregunta1lbl->AutoSize = true;
			this->Pregunta1lbl->Location = System::Drawing::Point(134, 21);
			this->Pregunta1lbl->Name = L"Pregunta1lbl";
			this->Pregunta1lbl->Size = System::Drawing::Size(181, 16);
			this->Pregunta1lbl->TabIndex = 0;
			this->Pregunta1lbl->Text = L"Ingresar el número adivinado";
			// 
			// NumOpc4txt
			// 
			this->NumOpc4txt->Location = System::Drawing::Point(173, 60);
			this->NumOpc4txt->Name = L"NumOpc4txt";
			this->NumOpc4txt->Size = System::Drawing::Size(100, 22);
			this->NumOpc4txt->TabIndex = 1;
			// 
			// Pregunta2lbl
			// 
			this->Pregunta2lbl->AutoSize = true;
			this->Pregunta2lbl->Location = System::Drawing::Point(143, 109);
			this->Pregunta2lbl->Name = L"Pregunta2lbl";
			this->Pregunta2lbl->Size = System::Drawing::Size(172, 16);
			this->Pregunta2lbl->TabIndex = 2;
			this->Pregunta2lbl->Text = L"Ingresar número de intentos";
			// 
			// IntentOpc4txt
			// 
			this->IntentOpc4txt->Location = System::Drawing::Point(173, 153);
			this->IntentOpc4txt->Name = L"IntentOpc4txt";
			this->IntentOpc4txt->Size = System::Drawing::Size(100, 22);
			this->IntentOpc4txt->TabIndex = 3;
			// 
			// Calcular4btn
			// 
			this->Calcular4btn->Location = System::Drawing::Point(186, 202);
			this->Calcular4btn->Name = L"Calcular4btn";
			this->Calcular4btn->Size = System::Drawing::Size(75, 23);
			this->Calcular4btn->TabIndex = 4;
			this->Calcular4btn->Text = L"Calcular";
			this->Calcular4btn->UseVisualStyleBackColor = true;
			this->Calcular4btn->Click += gcnew System::EventHandler(this, &Opcion4View::Calcular4btn_Click);
			// 
			// Opcion4View
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(433, 253);
			this->Controls->Add(this->Calcular4btn);
			this->Controls->Add(this->IntentOpc4txt);
			this->Controls->Add(this->Pregunta2lbl);
			this->Controls->Add(this->NumOpc4txt);
			this->Controls->Add(this->Pregunta1lbl);
			this->Name = L"Opcion4View";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Calcular4btn_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			int num = Convert::ToInt32(NumOpc4txt->Text);
			int n = Convert::ToInt32(IntentOpc4txt->Text);
			System::Text::StringBuilder^ resultadoSerie = gcnew System::Text::StringBuilder();
			int serie = num;
			for (int i = 1; i <= n; ++i) {
				resultadoSerie->AppendLine(i.ToString() + L": " + serie.ToString());
				serie *= 45;
			}
			MessageBox::Show(resultadoSerie->ToString());
			MessageBox::Show(L"¡Felicidades! Usted ha ganado una orden de comida.");
		}
		catch (Exception^ ex) {
			MessageBox::Show(L"Por favor, ingrese valores válidos en ambos campos.", L"Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
};
}
