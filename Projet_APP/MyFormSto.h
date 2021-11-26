#pragma once

#include "MyFormStoSelec.h"

namespace ProjetAPP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyFormSto
	/// </summary>
	public ref class MyFormSto : public System::Windows::Forms::Form
	{
	public:
		MyFormSto(void)
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
		~MyFormSto()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnReturn;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ btnAffSto;
	private: System::Windows::Forms::Button^ btnCreSto;


	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ btnRecSto;













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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->btnAffSto = (gcnew System::Windows::Forms::Button());
			this->btnCreSto = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->btnRecSto = (gcnew System::Windows::Forms::Button());
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
			this->btnReturn->Click += gcnew System::EventHandler(this, &MyFormSto::return_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(512, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(168, 23);
			this->button1->TabIndex = 41;
			this->button1->Text = L"Actualiser la Base de Données";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 58);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(18, 13);
			this->label1->TabIndex = 40;
			this->label1->Text = L"ID";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(6, 74);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 39;
			// 
			// btnAffSto
			// 
			this->btnAffSto->Location = System::Drawing::Point(6, 29);
			this->btnAffSto->Name = L"btnAffSto";
			this->btnAffSto->Size = System::Drawing::Size(75, 23);
			this->btnAffSto->TabIndex = 38;
			this->btnAffSto->Text = L"Afficher";
			this->btnAffSto->UseVisualStyleBackColor = true;
			this->btnAffSto->Click += gcnew System::EventHandler(this, &MyFormSto::AffSto_Click);
			// 
			// btnCreSto
			// 
			this->btnCreSto->Location = System::Drawing::Point(271, 79);
			this->btnCreSto->Name = L"btnCreSto";
			this->btnCreSto->Size = System::Drawing::Size(75, 23);
			this->btnCreSto->TabIndex = 37;
			this->btnCreSto->Text = L"Créer";
			this->btnCreSto->UseVisualStyleBackColor = true;
			this->btnCreSto->Click += gcnew System::EventHandler(this, &MyFormSto::CreSto_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 41);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(253, 357);
			this->dataGridView1->TabIndex = 36;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->btnAffSto);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(550, 41);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(126, 104);
			this->groupBox1->TabIndex = 42;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Rechercher un article du stock";
			// 
			// btnRecSto
			// 
			this->btnRecSto->Location = System::Drawing::Point(271, 41);
			this->btnRecSto->Name = L"btnRecSto";
			this->btnRecSto->Size = System::Drawing::Size(75, 23);
			this->btnRecSto->TabIndex = 43;
			this->btnRecSto->Text = L"Rechercher";
			this->btnRecSto->UseVisualStyleBackColor = true;
			// 
			// MyFormSto
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(688, 417);
			this->Controls->Add(this->btnRecSto);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btnCreSto);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->btnReturn);
			this->Name = L"MyFormSto";
			this->Text = L"MyFormSto";
			this->Load += gcnew System::EventHandler(this, &MyFormSto::MyFormSto_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void return_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void MyFormSto_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void CreSto_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void AffSto_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	MyFormStoSelec^ Form = gcnew MyFormStoSelec;
	Form->ShowDialog();
	this->Show();
}
};
}
