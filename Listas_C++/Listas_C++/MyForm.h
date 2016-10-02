#pragma once
#include <string>
#include <iostream>
using namespace std;
using namespace System;

namespace Listas_C {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  Panel_Botones;
	private: System::Windows::Forms::TextBox^  TextBoxDato;
	private: System::Windows::Forms::Label^  LabelDato;
	private: System::Windows::Forms::Button^  BotonAgregarInicio;
	private: System::Windows::Forms::Button^  BotonAgregarAlFinal;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  BotonAgregarPosicion;
	private: System::Windows::Forms::TextBox^  TextBoxPosicion;
	private: System::Windows::Forms::Button^  BotonEliminarEnPosicion;
	private: System::Windows::Forms::Label^  LabelPosición;

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Panel_Botones = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->BotonEliminarEnPosicion = (gcnew System::Windows::Forms::Button());
			this->LabelPosición = (gcnew System::Windows::Forms::Label());
			this->BotonAgregarPosicion = (gcnew System::Windows::Forms::Button());
			this->TextBoxPosicion = (gcnew System::Windows::Forms::TextBox());
			this->BotonAgregarAlFinal = (gcnew System::Windows::Forms::Button());
			this->BotonAgregarInicio = (gcnew System::Windows::Forms::Button());
			this->TextBoxDato = (gcnew System::Windows::Forms::TextBox());
			this->LabelDato = (gcnew System::Windows::Forms::Label());
			this->Panel_Botones->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// Panel_Botones
			// 
			this->Panel_Botones->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->Panel_Botones->Controls->Add(this->panel1);
			this->Panel_Botones->Controls->Add(this->BotonAgregarAlFinal);
			this->Panel_Botones->Controls->Add(this->BotonAgregarInicio);
			this->Panel_Botones->Controls->Add(this->TextBoxDato);
			this->Panel_Botones->Controls->Add(this->LabelDato);
			this->Panel_Botones->Location = System::Drawing::Point(0, 0);
			this->Panel_Botones->Name = L"Panel_Botones";
			this->Panel_Botones->Size = System::Drawing::Size(1343, 117);
			this->Panel_Botones->TabIndex = 0;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::NavajoWhite;
			this->panel1->Controls->Add(this->BotonEliminarEnPosicion);
			this->panel1->Controls->Add(this->LabelPosición);
			this->panel1->Controls->Add(this->BotonAgregarPosicion);
			this->panel1->Controls->Add(this->TextBoxPosicion);
			this->panel1->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold));
			this->panel1->Location = System::Drawing::Point(889, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(454, 117);
			this->panel1->TabIndex = 6;
			// 
			// BotonEliminarEnPosicion
			// 
			this->BotonEliminarEnPosicion->BackColor = System::Drawing::Color::Coral;
			this->BotonEliminarEnPosicion->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BotonEliminarEnPosicion->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BotonEliminarEnPosicion->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->BotonEliminarEnPosicion->Location = System::Drawing::Point(277, 54);
			this->BotonEliminarEnPosicion->Name = L"BotonEliminarEnPosicion";
			this->BotonEliminarEnPosicion->Size = System::Drawing::Size(120, 41);
			this->BotonEliminarEnPosicion->TabIndex = 7;
			this->BotonEliminarEnPosicion->Text = L"Eliminar";
			this->BotonEliminarEnPosicion->UseVisualStyleBackColor = false;
			// 
			// LabelPosición
			// 
			this->LabelPosición->AutoSize = true;
			this->LabelPosición->Location = System::Drawing::Point(169, 9);
			this->LabelPosición->Name = L"LabelPosición";
			this->LabelPosición->Size = System::Drawing::Size(124, 24);
			this->LabelPosición->TabIndex = 6;
			this->LabelPosición->Text = L"En posición";
			// 
			// BotonAgregarPosicion
			// 
			this->BotonAgregarPosicion->BackColor = System::Drawing::Color::Coral;
			this->BotonAgregarPosicion->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BotonAgregarPosicion->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BotonAgregarPosicion->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->BotonAgregarPosicion->Location = System::Drawing::Point(126, 54);
			this->BotonAgregarPosicion->Name = L"BotonAgregarPosicion";
			this->BotonAgregarPosicion->Size = System::Drawing::Size(120, 41);
			this->BotonAgregarPosicion->TabIndex = 5;
			this->BotonAgregarPosicion->Text = L"Agregar";
			this->BotonAgregarPosicion->UseVisualStyleBackColor = false;
			// 
			// TextBoxPosicion
			// 
			this->TextBoxPosicion->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->TextBoxPosicion->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TextBoxPosicion->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->TextBoxPosicion->Location = System::Drawing::Point(33, 59);
			this->TextBoxPosicion->Name = L"TextBoxPosicion";
			this->TextBoxPosicion->Size = System::Drawing::Size(61, 32);
			this->TextBoxPosicion->TabIndex = 4;
			// 
			// BotonAgregarAlFinal
			// 
			this->BotonAgregarAlFinal->BackColor = System::Drawing::Color::Coral;
			this->BotonAgregarAlFinal->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BotonAgregarAlFinal->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BotonAgregarAlFinal->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->BotonAgregarAlFinal->Location = System::Drawing::Point(543, 37);
			this->BotonAgregarAlFinal->Name = L"BotonAgregarAlFinal";
			this->BotonAgregarAlFinal->Size = System::Drawing::Size(216, 41);
			this->BotonAgregarAlFinal->TabIndex = 3;
			this->BotonAgregarAlFinal->Text = L"Agregar al Final";
			this->BotonAgregarAlFinal->UseVisualStyleBackColor = false;
			// 
			// BotonAgregarInicio
			// 
			this->BotonAgregarInicio->BackColor = System::Drawing::Color::Coral;
			this->BotonAgregarInicio->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BotonAgregarInicio->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BotonAgregarInicio->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->BotonAgregarInicio->Location = System::Drawing::Point(302, 37);
			this->BotonAgregarInicio->Name = L"BotonAgregarInicio";
			this->BotonAgregarInicio->Size = System::Drawing::Size(216, 41);
			this->BotonAgregarInicio->TabIndex = 2;
			this->BotonAgregarInicio->Text = L"Agregar al Inicio";
			this->BotonAgregarInicio->UseVisualStyleBackColor = false;
			// 
			// TextBoxDato
			// 
			this->TextBoxDato->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->TextBoxDato->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TextBoxDato->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->TextBoxDato->Location = System::Drawing::Point(120, 42);
			this->TextBoxDato->Name = L"TextBoxDato";
			this->TextBoxDato->Size = System::Drawing::Size(158, 32);
			this->TextBoxDato->TabIndex = 1;
			// 
			// LabelDato
			// 
			this->LabelDato->AutoSize = true;
			this->LabelDato->BackColor = System::Drawing::Color::Transparent;
			this->LabelDato->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LabelDato->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->LabelDato->Location = System::Drawing::Point(29, 40);
			this->LabelDato->Name = L"LabelDato";
			this->LabelDato->Size = System::Drawing::Size(100, 34);
			this->LabelDato->TabIndex = 0;
			this->LabelDato->Text = L"Dato: ";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkCyan;
			this->ClientSize = System::Drawing::Size(1343, 617);
			this->Controls->Add(this->Panel_Botones);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Panel_Botones->ResumeLayout(false);
			this->Panel_Botones->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		void MarshalString(String ^ s, string& os) {
			using namespace Runtime::InteropServices;
			const char* chars =
				(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			os = chars;
			Marshal::FreeHGlobal(IntPtr((void*)chars));
		}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
