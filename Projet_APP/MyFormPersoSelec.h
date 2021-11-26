#pragma once

#include "MyFormPersoSelecMod.h"

namespace ProjetAPP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyFormPersoSelec
	/// </summary>
	public ref class MyFormPersoSelec : public System::Windows::Forms::Form
	{
	public:
		MyFormPersoSelec(void)
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
		~MyFormPersoSelec()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnSupPerso;
	protected:

	private: System::Windows::Forms::Button^ btnModPerso;
	private: System::Windows::Forms::DataGridView^ PersoView;
	protected:


	private: System::Windows::Forms::Button^ btnReturn;

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
			this->btnSupPerso = (gcnew System::Windows::Forms::Button());
			this->btnModPerso = (gcnew System::Windows::Forms::Button());
			this->PersoView = (gcnew System::Windows::Forms::DataGridView());
			this->btnReturn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PersoView))->BeginInit();
			this->SuspendLayout();
			// 
			// btnSupPerso
			// 
			this->btnSupPerso->Location = System::Drawing::Point(93, 96);
			this->btnSupPerso->Name = L"btnSupPerso";
			this->btnSupPerso->Size = System::Drawing::Size(75, 23);
			this->btnSupPerso->TabIndex = 44;
			this->btnSupPerso->Text = L"Supprimer";
			this->btnSupPerso->UseVisualStyleBackColor = true;
			this->btnSupPerso->Click += gcnew System::EventHandler(this, &MyFormPersoSelec::SupPerso_Click);
			// 
			// btnModPerso
			// 
			this->btnModPerso->Location = System::Drawing::Point(12, 96);
			this->btnModPerso->Name = L"btnModPerso";
			this->btnModPerso->Size = System::Drawing::Size(75, 23);
			this->btnModPerso->TabIndex = 43;
			this->btnModPerso->Text = L"Modifier";
			this->btnModPerso->UseVisualStyleBackColor = true;
			this->btnModPerso->Click += gcnew System::EventHandler(this, &MyFormPersoSelec::ModPerso_Click);
			// 
			// PersoView
			// 
			this->PersoView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->PersoView->Location = System::Drawing::Point(12, 41);
			this->PersoView->Name = L"PersoView";
			this->PersoView->Size = System::Drawing::Size(758, 49);
			this->PersoView->TabIndex = 42;
			this->PersoView->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyFormPersoSelec::PersoView_Click);
			// 
			// btnReturn
			// 
			this->btnReturn->Location = System::Drawing::Point(12, 12);
			this->btnReturn->Name = L"btnReturn";
			this->btnReturn->Size = System::Drawing::Size(75, 23);
			this->btnReturn->TabIndex = 41;
			this->btnReturn->Text = L"retour";
			this->btnReturn->UseVisualStyleBackColor = true;
			this->btnReturn->Click += gcnew System::EventHandler(this, &MyFormPersoSelec::Return_Click);
			// 
			// MyFormPersoSelec
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(792, 142);
			this->Controls->Add(this->btnSupPerso);
			this->Controls->Add(this->btnModPerso);
			this->Controls->Add(this->PersoView);
			this->Controls->Add(this->btnReturn);
			this->Name = L"MyFormPersoSelec";
			this->Text = L"MyFormPersoSelec";
			this->Load += gcnew System::EventHandler(this, &MyFormPersoSelec::MyFormPersoSelec_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PersoView))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyFormPersoSelec_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Return_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void ModPerso_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	MyFormPersoSelecMod^ Form = gcnew MyFormPersoSelecMod;
	Form->ShowDialog();
	this->Show();
}
private: System::Void SupPerso_Click(System::Object^ sender, System::EventArgs^ e) {	
	//Requette de Supression Tu Connais
	this->Close();
}
private: System::Void PersoView_Click(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
