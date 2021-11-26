#pragma once

#include "MyFormPersoSelec.h"

namespace ProjetAPP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyFormPerso
	/// </summary>
	public ref class MyFormPerso : public System::Windows::Forms::Form
	{
	public:
		MyFormPerso(void)
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
		~MyFormPerso()
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
	private: System::Windows::Forms::Button^ btnAffPerso;
	private: System::Windows::Forms::Button^ btnCrePerso;


	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ btnRecPerso;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyFormPerso::typeid));
			this->btnReturn = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->btnAffPerso = (gcnew System::Windows::Forms::Button());
			this->btnCrePerso = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->btnRecPerso = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnReturn
			// 
			this->btnReturn->Location = System::Drawing::Point(13, 13);
			this->btnReturn->Name = L"btnReturn";
			this->btnReturn->Size = System::Drawing::Size(75, 23);
			this->btnReturn->TabIndex = 0;
			this->btnReturn->Text = L"retour";
			this->btnReturn->UseVisualStyleBackColor = true;
			this->btnReturn->Click += gcnew System::EventHandler(this, &MyFormPerso::return_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(513, 13);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(168, 23);
			this->button1->TabIndex = 41;
			this->button1->Text = L"Actualiser la Base de Données";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 62);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(18, 13);
			this->label1->TabIndex = 40;
			this->label1->Text = L"ID";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(6, 78);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 39;
			// 
			// btnAffPerso
			// 
			this->btnAffPerso->Location = System::Drawing::Point(6, 35);
			this->btnAffPerso->Name = L"btnAffPerso";
			this->btnAffPerso->Size = System::Drawing::Size(75, 23);
			this->btnAffPerso->TabIndex = 38;
			this->btnAffPerso->Text = L"Afficher";
			this->btnAffPerso->UseVisualStyleBackColor = true;
			this->btnAffPerso->Click += gcnew System::EventHandler(this, &MyFormPerso::AffPerso_Click);
			// 
			// btnCrePerso
			// 
			this->btnCrePerso->Location = System::Drawing::Point(281, 77);
			this->btnCrePerso->Name = L"btnCrePerso";
			this->btnCrePerso->Size = System::Drawing::Size(75, 23);
			this->btnCrePerso->TabIndex = 37;
			this->btnCrePerso->Text = L"Créer";
			this->btnCrePerso->UseVisualStyleBackColor = true;
			this->btnCrePerso->Click += gcnew System::EventHandler(this, &MyFormPerso::CrePerso_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(13, 42);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(253, 357);
			this->dataGridView1->TabIndex = 36;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->btnAffPerso);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(566, 42);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(115, 107);
			this->groupBox1->TabIndex = 42;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Afficher un membre du personnel";
			// 
			// btnRecPerso
			// 
			this->btnRecPerso->Location = System::Drawing::Point(281, 42);
			this->btnRecPerso->Name = L"btnRecPerso";
			this->btnRecPerso->Size = System::Drawing::Size(75, 23);
			this->btnRecPerso->TabIndex = 43;
			this->btnRecPerso->Text = L"Rechercher";
			this->btnRecPerso->UseVisualStyleBackColor = true;
			// 
			// MyFormPerso
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(861, 630);
			this->Controls->Add(this->btnRecPerso);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btnCrePerso);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->btnReturn);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyFormPerso";
			this->Text = L"Gestion du Personnel";
			this->Load += gcnew System::EventHandler(this, &MyFormPerso::MyFormPerso_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void return_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		
	}
	private: System::Void MyFormPerso_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void CrePerso_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void AffPerso_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	MyFormPersoSelec^ Form = gcnew MyFormPersoSelec;
	Form->ShowDialog();
	this->Show();
}
};
}
