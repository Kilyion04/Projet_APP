#pragma once

#include "MyFormComSelec.h"

namespace ProjetAPP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyFormCom
	/// </summary>
	public ref class MyFormCom : public System::Windows::Forms::Form
	{
	public:
		MyFormCom(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyFormCom()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnReturn;














	private: System::Windows::Forms::Label^ label1;



	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ btnAffCom;
	private: System::Windows::Forms::Button^ btnCreCom;


	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ btnRecCom;

	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnReturn = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->btnAffCom = (gcnew System::Windows::Forms::Button());
			this->btnCreCom = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->btnRecCom = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnReturn
			// 
			this->btnReturn->Location = System::Drawing::Point(12, 12);
			this->btnReturn->Name = L"btnReturn";
			this->btnReturn->Size = System::Drawing::Size(75, 23);
			this->btnReturn->TabIndex = 1;
			this->btnReturn->Text = L"retour";
			this->btnReturn->UseVisualStyleBackColor = true;
			this->btnReturn->Click += gcnew System::EventHandler(this, &MyFormCom::return_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(18, 13);
			this->label1->TabIndex = 34;
			this->label1->Text = L"ID";
			this->label1->Click += gcnew System::EventHandler(this, &MyFormCom::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(9, 61);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 30;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyFormCom::textBox1_TextChanged);
			// 
			// btnAffCom
			// 
			this->btnAffCom->Location = System::Drawing::Point(6, 19);
			this->btnAffCom->Name = L"btnAffCom";
			this->btnAffCom->Size = System::Drawing::Size(75, 23);
			this->btnAffCom->TabIndex = 29;
			this->btnAffCom->Text = L"Afficher";
			this->btnAffCom->UseVisualStyleBackColor = true;
			this->btnAffCom->Click += gcnew System::EventHandler(this, &MyFormCom::AffCom_Click);
			// 
			// btnCreCom
			// 
			this->btnCreCom->Location = System::Drawing::Point(287, 76);
			this->btnCreCom->Name = L"btnCreCom";
			this->btnCreCom->Size = System::Drawing::Size(75, 23);
			this->btnCreCom->TabIndex = 28;
			this->btnCreCom->Text = L"Créer";
			this->btnCreCom->UseVisualStyleBackColor = true;
			this->btnCreCom->Click += gcnew System::EventHandler(this, &MyFormCom::CreCom_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 41);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(253, 357);
			this->dataGridView1->TabIndex = 27;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(512, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(168, 23);
			this->button1->TabIndex = 35;
			this->button1->Text = L"Actualiser la Base de Données";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyFormCom::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->btnAffCom);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Location = System::Drawing::Point(544, 41);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(136, 89);
			this->groupBox1->TabIndex = 36;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Afficher une commande";
			// 
			// btnRecCom
			// 
			this->btnRecCom->Location = System::Drawing::Point(287, 41);
			this->btnRecCom->Name = L"btnRecCom";
			this->btnRecCom->Size = System::Drawing::Size(75, 23);
			this->btnRecCom->TabIndex = 37;
			this->btnRecCom->Text = L"Rechercher";
			this->btnRecCom->UseVisualStyleBackColor = true;
			// 
			// MyFormCom
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1091, 631);
			this->Controls->Add(this->btnRecCom);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btnCreCom);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->btnReturn);
			this->Name = L"MyFormCom";
			this->Text = L"MyFormCom";
			this->Load += gcnew System::EventHandler(this, &MyFormCom::MyFormCom_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyFormCom_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void return_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void CreCom_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void AffCom_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	MyFormComSelec^ Form = gcnew MyFormComSelec;
	Form->ShowDialog();
	this->Show();
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
