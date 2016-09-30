#pragma once


#include "Lista.h"



namespace Grafico_Listas {

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

	private:

		

		Lista* objLista;
		

	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//		

			objLista = new Lista();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;

	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::Windows::Forms::ListBox^  listBox3;
	private: System::Windows::Forms::TextBox^  textBox_N;


	private:
		/// <summary>
		/// Variable del diseñador requerida.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido del método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->textBox_N = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(48, 13);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(30, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Dato";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(287, 10);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(116, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Insertar al inicio";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(163, 10);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(118, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Insertar al final";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(472, 12);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(132, 23);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Insertar en posicion";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(618, 12);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Eliminar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->listBox1);
			this->groupBox1->Location = System::Drawing::Point(15, 71);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(713, 100);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Lista Simple";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(13, 23);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(665, 56);
			this->listBox1->TabIndex = 0;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->listBox2);
			this->groupBox2->Location = System::Drawing::Point(15, 215);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(713, 100);
			this->groupBox2->TabIndex = 9;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Lista Circular";
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(13, 31);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(665, 56);
			this->listBox2->TabIndex = 0;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->listBox3);
			this->groupBox3->Location = System::Drawing::Point(15, 355);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(713, 100);
			this->groupBox3->TabIndex = 10;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Lista Doble";
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->Location = System::Drawing::Point(13, 28);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(665, 56);
			this->listBox3->TabIndex = 0;
			// 
			// textBox_N
			// 
			this->textBox_N->Location = System::Drawing::Point(437, 13);
			this->textBox_N->Name = L"textBox_N";
			this->textBox_N->Size = System::Drawing::Size(29, 20);
			this->textBox_N->TabIndex = 11;
			this->textBox_N->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox_N_KeyPress);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(740, 504);
			this->Controls->Add(this->textBox_N);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"Listas en C++";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		/** 		
		Actualizar grafico 1

		**/

		void ActualizarLista()
		{
			

			listBox1->Items->Clear();
			listBox2->Items->Clear();
			listBox3->Items->Clear();
	


			Nodo* i = objLista->getPrimer();


			while (i != NULL)
			{
				String^Nombres = gcnew String(i->getNombre());

				listBox1->Items->Add(Nombres);
				listBox2->Items->Add(Nombres);
				listBox3->Items->Add(Nombres);
				i = i->getSiguiente();

			}
			


		}



	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {



	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

			 if (textBox1->Text != "")
			 {
				 char* minombre = new char[100];
				 sprintf(minombre, "%s", textBox1->Text);


				 Nodo* elemento = new Nodo(minombre);
				 objLista->agregar(elemento, 0);


				 ActualizarLista();

				 textBox1->Clear();

			 }



			

}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			
			 if (textBox_N->Text != "" &&  textBox1->Text != "")
			 {   

				 
				 _int32 nPosicion = System::Int32::Parse(textBox_N->Text) -1;


				 char* minombre = new char[100];
				 sprintf(minombre, "%s", textBox1->Text);



				 Nodo* elemento = new Nodo(minombre);
				 objLista->agregar(elemento, nPosicion);


				 ActualizarLista();

				 textBox1->Clear();

			 }

			 else{
				 MessageBox::Show("Ingrese el valor del nodo y la posición.");

			 }
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {


			 if (textBox1->Text != "")
			 {
				 char* minombre = new char[100];
				 sprintf(minombre, "%s", textBox1->Text);



				 Nodo* elemento = new Nodo(minombre);
				 objLista->agregar(elemento);


				 ActualizarLista();

				 textBox1->Clear();

			 }

			 else{
				 MessageBox::Show("¡Ingrese el contenido del nodo!");
			 }

}
private: System::Void textBox_N_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {

			 if (e->KeyChar == '.'){
				 if (this->textBox_N->Text->Contains(".") && !this->textBox_N->SelectedText->Contains("."))
					 e->Handled = true;
			 }
			 // Allow negative numbers
			 else if (e->KeyChar == '-' && !(this->textBox_N->Text->Contains("-"))){
				 e->Handled = true;
				 textBox_N->Text = "-" + textBox_N->Text;
			 }
			 // Accept only digits ".", "-" and the Backspace character
			 else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08){
				 e->Handled = true;
			 }

}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {

			 

			 if (listBox1->SelectedIndex != -1)
			 {
				 objLista->eliminar(listBox1->SelectedIndex);
				 //listBox1->SelectedIndex = -1;
				 //ActualizarLista();
			 }

			

			 //



}
};
}
