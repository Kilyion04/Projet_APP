#pragma once

#include "MyFormCliSelecMod.h"
#include "client.h"
#include "MyFormCliAdrLiv.h"
#include "MyFormCliAdrFac.h"

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
		}

		MyFormCliSelec(System::String^ idClient)
		{
			InitializeComponent();
			this->idClient = idClient;
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

	private: NS_Comp_Client::client^ oClient;
	private: System::Data::DataSet^ oDs;

	private: System::String^ idClient;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyFormCliSelec::typeid));
			this->btnReturn = (gcnew System::Windows::Forms::Button());
			this->CliView = (gcnew System::Windows::Forms::DataGridView());
			this->btnSupCli = (gcnew System::Windows::Forms::Button());
			this->btnModCli = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CliView))->BeginInit();
			this->SuspendLayout();
			// 
			// btnReturn
			// 
			this->btnReturn->BackColor = System::Drawing::Color::Transparent;
			this->btnReturn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnReturn->Location = System::Drawing::Point(12, 12);
			this->btnReturn->Name = L"btnReturn";
			this->btnReturn->Size = System::Drawing::Size(75, 23);
			this->btnReturn->TabIndex = 1;
			this->btnReturn->Text = L"Retour";
			this->btnReturn->UseVisualStyleBackColor = false;
			this->btnReturn->Click += gcnew System::EventHandler(this, &MyFormCliSelec::Return_Click);
			// 
			// CliView
			// 
			this->CliView->BackgroundColor = System::Drawing::Color::White;
			this->CliView->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->CliView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->CliView->Location = System::Drawing::Point(12, 41);
			this->CliView->Name = L"CliView";
			this->CliView->RowHeadersWidth = 51;
			this->CliView->Size = System::Drawing::Size(758, 76);
			this->CliView->TabIndex = 2;
			this->CliView->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyFormCliSelec::CliView_Click);
			// 
			// btnSupCli
			// 
			this->btnSupCli->BackColor = System::Drawing::Color::Transparent;
			this->btnSupCli->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnSupCli->Location = System::Drawing::Point(93, 124);
			this->btnSupCli->Name = L"btnSupCli";
			this->btnSupCli->Size = System::Drawing::Size(75, 23);
			this->btnSupCli->TabIndex = 40;
			this->btnSupCli->Text = L"Supprimer";
			this->btnSupCli->UseVisualStyleBackColor = false;
			this->btnSupCli->Click += gcnew System::EventHandler(this, &MyFormCliSelec::SupCli_Click);
			// 
			// btnModCli
			// 
			this->btnModCli->BackColor = System::Drawing::Color::Transparent;
			this->btnModCli->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnModCli->Location = System::Drawing::Point(12, 124);
			this->btnModCli->Name = L"btnModCli";
			this->btnModCli->Size = System::Drawing::Size(75, 23);
			this->btnModCli->TabIndex = 39;
			this->btnModCli->Text = L"Modifier";
			this->btnModCli->UseVisualStyleBackColor = false;
			this->btnModCli->Click += gcnew System::EventHandler(this, &MyFormCliSelec::ModCli_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Location = System::Drawing::Point(174, 124);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(131, 23);
			this->button2->TabIndex = 42;
			this->button2->Text = L"Adresse(s) de livraison";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyFormCliSelec::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Location = System::Drawing::Point(311, 124);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(149, 23);
			this->button1->TabIndex = 43;
			this->button1->Text = L"Adresse(s) de facturation";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyFormCliSelec::button1_Click);
			// 
			// MyFormCliSelec
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(782, 157);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->btnSupCli);
			this->Controls->Add(this->btnModCli);
			this->Controls->Add(this->CliView);
			this->Controls->Add(this->btnReturn);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyFormCliSelec";
			this->Text = L"MyFormCliSelec";
			this->Load += gcnew System::EventHandler(this, &MyFormCliSelec::MyFormCliSelec_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CliView))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyFormCliSelec_Load(System::Object^ sender, System::EventArgs^ e) {
		this->oClient = gcnew NS_Comp_Client::client();
		refreshTable();
	}
	private: System::Void Return_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void SupCli_Click(System::Object^ sender, System::EventArgs^ e) {
		//Requette de Supression Tu Connais
		if (this->CliView->Rows[0]->Cells[1]->Value->ToString() == "False") {
			MessageBox::Show(L"Ce client est déjà supprimé !", L"Message",
			MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else {
			this->oClient->supprimer(System::Convert::ToInt64(this->idClient));
			MessageBox::Show(L"Client supprimé !", L"Message",
			MessageBoxButtons::OK, MessageBoxIcon::Warning);
			refreshTable();
		}
	}
	private: System::Void ModCli_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->CliView->Rows[0]->Cells[1]->Value->ToString() == "False") {
			MessageBox::Show(L"Un client inactif ne peut être modifié !", L"Message",
			MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else {
			this->Hide();
			MyFormCliSelecMod^ Form = gcnew MyFormCliSelecMod(this->idClient);
			Form->ShowDialog();
			refreshTable();
			this->Show();
		}
	}
	private: System::Void CliView_Click(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: void MyFormCliSelec::refreshTable(void) {
		this->CliView->Refresh();
		this->oDs = this->oClient->afficherUn("fu", System::Convert::ToInt64(this->idClient));
		this->CliView->DataSource = this->oDs;
		this->CliView->DataMember = "fu";
	}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->CliView->Rows[0]->Cells[1]->Value->ToString() == "False") {
		MessageBox::Show(L"Un client inactif ne peut être modifié !", L"Message",
		MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	else
	{
		this->Hide();
		MyFormCliAdrLiv^ Form = gcnew MyFormCliAdrLiv(this->idClient);
		Form->ShowDialog();
		refreshTable();
		this->Show();
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->CliView->Rows[0]->Cells[1]->Value->ToString() == "False") {
		MessageBox::Show(L"Un client inactif ne peut être modifié !", L"Message",
		MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	else
	{
		this->Hide();
		MyFormCliAdrFac^ Form = gcnew MyFormCliAdrFac(this->idClient);
		Form->ShowDialog();
		refreshTable();
		this->Show();
	}
}
};
}
