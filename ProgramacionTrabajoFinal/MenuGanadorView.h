#pragma once
#include "Opcion1View.h" 

namespace ProgramacionTrabajoFinal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MenuGanadorView
	/// </summary>
	public ref class MenuGanadorView : public System::Windows::Forms::Form
	{
	public:
		MenuGanadorView(void)
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
		~MenuGanadorView()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ TituloGlbl;
	private: System::Windows::Forms::Label^ SubtituloGlbl;
	private: System::Windows::Forms::Button^ Opc1btn;

	private: System::Windows::Forms::Button^ Opc2btn;
	private: System::Windows::Forms::Button^ Opc3btn;
	private: System::Windows::Forms::Button^ Opc4btn;

	protected:

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
			this->TituloGlbl = (gcnew System::Windows::Forms::Label());
			this->SubtituloGlbl = (gcnew System::Windows::Forms::Label());
			this->Opc1btn = (gcnew System::Windows::Forms::Button());
			this->Opc2btn = (gcnew System::Windows::Forms::Button());
			this->Opc3btn = (gcnew System::Windows::Forms::Button());
			this->Opc4btn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// TituloGlbl
			// 
			this->TituloGlbl->AutoSize = true;
			this->TituloGlbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TituloGlbl->Location = System::Drawing::Point(76, 28);
			this->TituloGlbl->Name = L"TituloGlbl";
			this->TituloGlbl->Size = System::Drawing::Size(398, 24);
			this->TituloGlbl->TabIndex = 0;
			this->TituloGlbl->Text = L"BIENVENIDOS AL MENU DEL GANADOR";
			// 
			// SubtituloGlbl
			// 
			this->SubtituloGlbl->AutoSize = true;
			this->SubtituloGlbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SubtituloGlbl->Location = System::Drawing::Point(207, 80);
			this->SubtituloGlbl->Name = L"SubtituloGlbl";
			this->SubtituloGlbl->Size = System::Drawing::Size(160, 20);
			this->SubtituloGlbl->TabIndex = 1;
			this->SubtituloGlbl->Text = L"ELIJA UNA OPCION ";
			// 
			// Opc1btn
			// 
			this->Opc1btn->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->Opc1btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Opc1btn->Location = System::Drawing::Point(80, 128);
			this->Opc1btn->Name = L"Opc1btn";
			this->Opc1btn->Size = System::Drawing::Size(394, 44);
			this->Opc1btn->TabIndex = 2;
			this->Opc1btn->Text = L"Vea si su numero es par o impar mediante operaciones matematicas";
			this->Opc1btn->UseVisualStyleBackColor = false;
			this->Opc1btn->Click += gcnew System::EventHandler(this, &MenuGanadorView::Opc1btn_Click);
			// 
			// Opc2btn
			// 
			this->Opc2btn->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->Opc2btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Opc2btn->Location = System::Drawing::Point(80, 196);
			this->Opc2btn->Name = L"Opc2btn";
			this->Opc2btn->Size = System::Drawing::Size(394, 40);
			this->Opc2btn->TabIndex = 3;
			this->Opc2btn->Text = L"Genere los numeros pares menores o iguales al numero adivinado";
			this->Opc2btn->UseVisualStyleBackColor = false;
			this->Opc2btn->Click += gcnew System::EventHandler(this, &MenuGanadorView::Opc2btn_Click);
			// 
			// Opc3btn
			// 
			this->Opc3btn->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->Opc3btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Opc3btn->Location = System::Drawing::Point(80, 266);
			this->Opc3btn->Name = L"Opc3btn";
			this->Opc3btn->Size = System::Drawing::Size(394, 36);
			this->Opc3btn->TabIndex = 4;
			this->Opc3btn->Text = L"Genere el inverso del numero adivinado";
			this->Opc3btn->UseVisualStyleBackColor = false;
			this->Opc3btn->Click += gcnew System::EventHandler(this, &MenuGanadorView::Opc3btn_Click);
			// 
			// Opc4btn
			// 
			this->Opc4btn->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->Opc4btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Opc4btn->Location = System::Drawing::Point(80, 334);
			this->Opc4btn->Name = L"Opc4btn";
			this->Opc4btn->Size = System::Drawing::Size(394, 35);
			this->Opc4btn->TabIndex = 5;
			this->Opc4btn->Text = L"Genere una serie";
			this->Opc4btn->UseVisualStyleBackColor = false;
			this->Opc4btn->Click += gcnew System::EventHandler(this, &MenuGanadorView::Opc4btn_Click);
			// 
			// MenuGanadorView
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(551, 425);
			this->Controls->Add(this->Opc4btn);
			this->Controls->Add(this->Opc3btn);
			this->Controls->Add(this->Opc2btn);
			this->Controls->Add(this->Opc1btn);
			this->Controls->Add(this->SubtituloGlbl);
			this->Controls->Add(this->TituloGlbl);
			this->Name = L"MenuGanadorView";
			this->Click += gcnew System::EventHandler(this, &MenuGanadorView::Opc4btn_Click);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Opc1btn_Click(System::Object^ sender, System::EventArgs^ e) {
		Opcion1View^ opc1 = gcnew Opcion1View();
		opc1->ShowDialog();
	}
	private: System::Void Opc2btn_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Opc3btn_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Opc4btn_Click(System::Object^ sender, System::EventArgs^ e) {
 }
};
}
