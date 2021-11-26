#pragma once

#include "MyFormComSelecMod.h"

namespace ProjetAPP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyFormComSelec
	/// </summary>
	public ref class MyFormComSelec : public System::Windows::Forms::Form
	{
	public:
		MyFormComSelec(void)
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
		~MyFormComSelec()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnSupCom;
	protected:

	private: System::Windows::Forms::Button^ btnModCom;
	private: System::Windows::Forms::DataGridView^ ComView;
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
			this->btnSupCom = (gcnew System::Windows::Forms::Button());
			this->btnModCom = (gcnew System::Windows::Forms::Button());
			this->ComView = (gcnew System::Windows::Forms::DataGridView());
			this->btnReturn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ComView))->BeginInit();
			this->SuspendLayout();
			// 
			// btnSupCom
			// 
			this->btnSupCom->Location = System::Drawing::Point(93, 96);
			this->btnSupCom->Name = L"btnSupCom";
			this->btnSupCom->Size = System::Drawing::Size(75, 23);
			this->btnSupCom->TabIndex = 44;
			this->btnSupCom->Text = L"Supprimer";
			this->btnSupCom->UseVisualStyleBackColor = true;
			this->btnSupCom->Click += gcnew System::EventHandler(this, &MyFormComSelec::SupCom_Click);
			// 
			// btnModCom
			// 
			this->btnModCom->Location = System::Drawing::Point(12, 96);
			this->btnModCom->Name = L"btnModCom";
			this->btnModCom->Size = System::Drawing::Size(75, 23);
			this->btnModCom->TabIndex = 43;
			this->btnModCom->Text = L"Modifier";
			this->btnModCom->UseVisualStyleBackColor = true;
			this->btnModCom->Click += gcnew System::EventHandler(this, &MyFormComSelec::ModCom_Click);
			// 
			// ComView
			// 
			this->ComView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->ComView->Location = System::Drawing::Point(12, 41);
			this->ComView->Name = L"ComView";
			this->ComView->Size = System::Drawing::Size(758, 49);
			this->ComView->TabIndex = 42;
			this->ComView->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyFormComSelec::ComView_Click);
			// 
			// btnReturn
			// 
			this->btnReturn->Location = System::Drawing::Point(12, 12);
			this->btnReturn->Name = L"btnReturn";
			this->btnReturn->Size = System::Drawing::Size(75, 23);
			this->btnReturn->TabIndex = 41;
			this->btnReturn->Text = L"retour";
			this->btnReturn->UseVisualStyleBackColor = true;
			this->btnReturn->Click += gcnew System::EventHandler(this, &MyFormComSelec::Return_Click);
			// 
			// MyFormComSelec
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(785, 134);
			this->Controls->Add(this->btnSupCom);
			this->Controls->Add(this->btnModCom);
			this->Controls->Add(this->ComView);
			this->Controls->Add(this->btnReturn);
			this->Name = L"MyFormComSelec";
			this->Text = L"MyFormComSelec";
			this->Load += gcnew System::EventHandler(this, &MyFormComSelec::MyFormComSelec_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ComView))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyFormComSelec_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Return_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void ModCom_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	MyFormComSelecMod^ Form = gcnew MyFormComSelecMod;
	Form->ShowDialog();
	this->Show();
}
private: System::Void SupCom_Click(System::Object^ sender, System::EventArgs^ e) {	
	//Requette de Supression Tu Connais
	this->Close();
}
private: System::Void ComView_Click(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
