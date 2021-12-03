#pragma once

#include "MyFormComSelecMod.h"
#include "commande.h"
#include "MyFormDateEm.h"
#include "MyFormDateLiv.h"

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

		}
		MyFormComSelec(System::String^ idCommande)
		{
			InitializeComponent();
			this->idCommande = idCommande;
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

	private: NS_Comp_Commande::commande^ oCommande;
	private: System::Data::DataSet^ oDs;
	private: System::String^ idCommande;

	protected:


	private: System::Windows::Forms::Button^ btnReturn;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ComView))->BeginInit();
			this->SuspendLayout();
			// 
			// btnSupCom
			// 
			this->btnSupCom->Location = System::Drawing::Point(133, 143);
			this->btnSupCom->Margin = System::Windows::Forms::Padding(4);
			this->btnSupCom->Name = L"btnSupCom";
			this->btnSupCom->Size = System::Drawing::Size(100, 28);
			this->btnSupCom->TabIndex = 44;
			this->btnSupCom->Text = L"Supprimer";
			this->btnSupCom->UseVisualStyleBackColor = true;
			this->btnSupCom->Click += gcnew System::EventHandler(this, &MyFormComSelec::SupCom_Click);
			// 
			// btnModCom
			// 
			this->btnModCom->Location = System::Drawing::Point(25, 143);
			this->btnModCom->Margin = System::Windows::Forms::Padding(4);
			this->btnModCom->Name = L"btnModCom";
			this->btnModCom->Size = System::Drawing::Size(100, 28);
			this->btnModCom->TabIndex = 43;
			this->btnModCom->Text = L"Modifier";
			this->btnModCom->UseVisualStyleBackColor = true;
			this->btnModCom->Click += gcnew System::EventHandler(this, &MyFormComSelec::ModCom_Click);
			// 
			// ComView
			// 
			this->ComView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->ComView->Location = System::Drawing::Point(16, 50);
			this->ComView->Margin = System::Windows::Forms::Padding(4);
			this->ComView->Name = L"ComView";
			this->ComView->RowHeadersWidth = 51;
			this->ComView->Size = System::Drawing::Size(1011, 85);
			this->ComView->TabIndex = 42;
			this->ComView->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyFormComSelec::ComView_Click);
			// 
			// btnReturn
			// 
			this->btnReturn->Location = System::Drawing::Point(16, 15);
			this->btnReturn->Margin = System::Windows::Forms::Padding(4);
			this->btnReturn->Name = L"btnReturn";
			this->btnReturn->Size = System::Drawing::Size(100, 28);
			this->btnReturn->TabIndex = 41;
			this->btnReturn->Text = L"retour";
			this->btnReturn->UseVisualStyleBackColor = true;
			this->btnReturn->Click += gcnew System::EventHandler(this, &MyFormComSelec::Return_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(241, 143);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(136, 28);
			this->button1->TabIndex = 45;
			this->button1->Text = L"Date d\'émission";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyFormComSelec::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(385, 143);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(140, 28);
			this->button2->TabIndex = 46;
			this->button2->Text = L"Date de livraison";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyFormComSelec::button2_Click);
			// 
			// MyFormComSelec
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1047, 184);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btnSupCom);
			this->Controls->Add(this->btnModCom);
			this->Controls->Add(this->ComView);
			this->Controls->Add(this->btnReturn);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyFormComSelec";
			this->Text = L"MyFormComSelec";
			this->Load += gcnew System::EventHandler(this, &MyFormComSelec::MyFormComSelec_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ComView))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyFormComSelec_Load(System::Object^ sender, System::EventArgs^ e) {
		this->oCommande = gcnew NS_Comp_Commande::commande();
		refreshTable();
	}
private: System::Void Return_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void ModCom_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	MyFormComSelecMod^ Form = gcnew MyFormComSelecMod(this->idCommande);
	Form->ShowDialog();
	refreshTable();
	this->Show();
}
private: System::Void SupCom_Click(System::Object^ sender, System::EventArgs^ e) {	
	//Requette de Supression Tu Connais
	this->oCommande->supprimer(System::Convert::ToInt64(this->idCommande));

	MessageBox::Show(L"Commande supprimée !", L"Message",
	MessageBoxButtons::OK, MessageBoxIcon::Warning);
	this->Close();
	
}
private: System::Void ComView_Click(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}

 public: void MyFormComSelec::refreshTable(void) {
	 this->ComView->Refresh();
	 this->oDs = this->oCommande->afficherUne("fu", System::Convert::ToInt64(this->idCommande));
	 this->ComView->DataSource = this->oDs;
	 this->ComView->DataMember = "fu";
 }

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	MyFormDateEm^ Form = gcnew MyFormDateEm(this->idCommande);
	Form->ShowDialog();
	refreshTable();
	this->Show();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	MyFormDateLiv^ Form = gcnew MyFormDateLiv(this->idCommande);
	Form->ShowDialog();
	refreshTable();
	this->Show();
}
};
}
