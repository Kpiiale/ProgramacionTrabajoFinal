#pragma once
#include <cstdlib> 
#include <ctime>
#include "MenuGanadorView.h" 
namespace ProgramacionTrabajoFinal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainView
	/// </summary>
	public ref class MainView : public System::Windows::Forms::Form
	{
	private:
		int numSecreto;
		int intentos;

	public:
		MainView(void)
		{
			InitializeComponent();
			srand((int)time(0)); 
			numSecreto = 1; 
			//numSecreto = rand() % 100 + 1; 
			intentos = 10; 
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainView()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Titulolbl;
	private: System::Windows::Forms::TextBox^ Numerotxt;
	protected:



	private: System::Windows::Forms::Label^ Indicatorlbl;


	private: System::Windows::Forms::Button^ Comprobarbtn;


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
			this->Titulolbl = (gcnew System::Windows::Forms::Label());
			this->Numerotxt = (gcnew System::Windows::Forms::TextBox());
			this->Indicatorlbl = (gcnew System::Windows::Forms::Label());
			this->Comprobarbtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Titulolbl
			// 
			this->Titulolbl->AutoSize = true;
			this->Titulolbl->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Titulolbl->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Titulolbl->Location = System::Drawing::Point(84, 19);
			this->Titulolbl->Name = L"Titulolbl";
			this->Titulolbl->Size = System::Drawing::Size(247, 21);
			this->Titulolbl->TabIndex = 1;
			this->Titulolbl->Text = L"Adivine el numero (de 1 a 100):";
			// 
			// Numerotxt
			// 
			this->Numerotxt->Location = System::Drawing::Point(149, 65);
			this->Numerotxt->Name = L"Numerotxt";
			this->Numerotxt->Size = System::Drawing::Size(100, 20);
			this->Numerotxt->TabIndex = 2;
			// 
			// Indicatorlbl
			// 
			this->Indicatorlbl->AutoSize = true;
			this->Indicatorlbl->Location = System::Drawing::Point(119, 107);
			this->Indicatorlbl->Name = L"Indicatorlbl";
			this->Indicatorlbl->Size = System::Drawing::Size(0, 13);
			this->Indicatorlbl->TabIndex = 3;
			this->Indicatorlbl->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// Comprobarbtn
			// 
			this->Comprobarbtn->Location = System::Drawing::Point(158, 147);
			this->Comprobarbtn->Name = L"Comprobarbtn";
			this->Comprobarbtn->Size = System::Drawing::Size(75, 23);
			this->Comprobarbtn->TabIndex = 4;
			this->Comprobarbtn->Text = L" Comprobar";
			this->Comprobarbtn->UseVisualStyleBackColor = true;
			this->Comprobarbtn->Click += gcnew System::EventHandler(this, &MainView::Comprobarbtn_Click);
			// 
			// MainView
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(415, 199);
			this->Controls->Add(this->Comprobarbtn);
			this->Controls->Add(this->Indicatorlbl);
			this->Controls->Add(this->Numerotxt);
			this->Controls->Add(this->Titulolbl);
			this->Name = L"MainView";
			this->Load += gcnew System::EventHandler(this, &MainView::MainView_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MainView_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Comprobarbtn_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			int numIngresado = Convert::ToInt32(this->Numerotxt->Text);

			if (numIngresado == numSecreto) {
				MessageBox::Show(L"¡Exacto! Has adivinado el número.");
				MenuGanadorView^ ganador = gcnew MenuGanadorView(); 
				ganador->ShowDialog();
				this->Close();
				
			}
			else {
				intentos--;

				if (intentos > 0) {
					if (numIngresado < numSecreto) {
						this->Indicatorlbl->Text = L"¡Muy bajo!";
						this->Indicatorlbl->ForeColor = System::Drawing::Color::Blue;
					}
					else {
					this->Indicatorlbl->Text = L"¡Muy alto!";
					this->Indicatorlbl->ForeColor = System::Drawing::Color::Red;
				}

				this->Indicatorlbl->Text += L" Intentos restantes: " + intentos.ToString();
			}
			else {
				MessageBox::Show(L"Has perdido. El número era " + numSecreto.ToString());
				this->Close();
			}
		}
	}
	catch (FormatException^) {
		MessageBox::Show(L"Por favor, ingrese un número válido.");
	}
}
	};
}