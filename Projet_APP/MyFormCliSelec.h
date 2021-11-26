#pragma once

#include "MyFormCliSelecMod.h"

namespace ProjetAPP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyFormCliSelec
	/// </summary>
	public ref class MyFormCliSelec : public System::Windows::Forms::Form
	{
	public:
		MyFormCliSelec(void)
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
		~MyFormCliSelec()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnReturn;
	private: System::Windows::Forms::DataGridView^ CliView;

	private: System::Windows::Forms::Button^ btnSupCli;
	private: System::Windows::Forms::Button^ btnModCli;
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
			this->CliView = (gcnew System::Windows::Forms::DataGridView());
			this->btnSupCli = (gcnew System::Windows::Forms::Button());
			this->btnModCli = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CliView))->BeginInit();
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
			this->btnReturn->Click += gcnew System::EventHandler(this, &MyFormCliSelec::Return_Click);
			// 
			// CliView
			// 
			this->CliView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->CliView->Location = System::Drawing::Point(12, 41);
			this->CliView->Name = L"CliView";
			this->CliView->Size = System::Drawing::Size(758, 49);
			this->CliView->TabIndex = 2;
			this->CliView->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyFormCliSelec::CliView_Click);
			// 
			// btnSupCli
			// 
			this->btnSupCli->Location = System::Drawing::Point(93, 96);
			this->btnSupCli->Name = L"btnSupCli";
			this->btnSupCli->Size = System::Drawing::Size(75, 23);
			this->btnSupCli->TabIndex = 40;
			this->btnSupCli->Text = L"Supprimer";
			this->btnSupCli->UseVisualStyleBackColor = true;
			this->btnSupCli->Click += gcnew System::EventHandler(this, &MyFormCliSelec::SupCli_Click);
			// 
			// btnModCli
			// 
			this->btnModCli->Location = System::Drawing::Point(12, 96);
			this->btnModCli->Name = L"btnModCli";
			this->btnModCli->Size = System::Drawing::Size(75, 23);
			this->btnModCli->TabIndex = 39;
			this->btnModCli->Text = L"Modifier";
			this->btnModCli->UseVisualStyleBackColor = true;
			this->btnModCli->Click += gcnew System::EventHandler(this, &MyFormCliSelec::ModCli_Click);
			// 
			// MyFormCliSelec
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(782, 133);
			this->Controls->Add(this->btnSupCli);
			this->Controls->Add(this->btnModCli);
			this->Controls->Add(this->CliView);
			this->Controls->Add(this->btnReturn);
			this->Name = L"MyFormCliSelec";
			this->Text = L"MyFormCliSelec";
			this->Load += gcnew System::EventHandler(this, &MyFormCliSelec::MyFormCliSelec_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CliView))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyFormCliSelec_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Return_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void SupCli_Click(System::Object^ sender, System::EventArgs^ e) {
		//Requette de Supression Tu Connais
		this->Close();
	}
	private: System::Void ModCli_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		MyFormCliSelecMod^ Form = gcnew MyFormCliSelecMod;
		Form->ShowDialog();
		this->Show();
	}
	private: System::Void CliView_Click(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}

};
}
