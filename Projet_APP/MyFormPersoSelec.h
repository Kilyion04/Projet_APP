#pragma once

#include "MyFormPersoSelecMod.h"
#include "personnel.h"

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
		}

	MyFormPersoSelec(System::String^ idPerso)
	{
		InitializeComponent();
		this->idPerso = idPerso;
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
	private: NS_Comp_Personnel::personnel^ oPersonnel;
	private: System::Data::DataSet^ oDs;

	private: System::String^ idPerso;


	private: System::Windows::Forms::Button^ btnReturn;


		   //private: MyFormPersoSelec();
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
			this->btnSupPerso->Location = System::Drawing::Point(125, 163);
			this->btnSupPerso->Margin = System::Windows::Forms::Padding(4);
			this->btnSupPerso->Name = L"btnSupPerso";
			this->btnSupPerso->Size = System::Drawing::Size(100, 28);
			this->btnSupPerso->TabIndex = 44;
			this->btnSupPerso->Text = L"Supprimer";
			this->btnSupPerso->UseVisualStyleBackColor = true;
			this->btnSupPerso->Click += gcnew System::EventHandler(this, &MyFormPersoSelec::SupPerso_Click);
			// 
			// btnModPerso
			// 
			this->btnModPerso->Location = System::Drawing::Point(17, 163);
			this->btnModPerso->Margin = System::Windows::Forms::Padding(4);
			this->btnModPerso->Name = L"btnModPerso";
			this->btnModPerso->Size = System::Drawing::Size(100, 28);
			this->btnModPerso->TabIndex = 43;
			this->btnModPerso->Text = L"Modifier";
			this->btnModPerso->UseVisualStyleBackColor = true;
			this->btnModPerso->Click += gcnew System::EventHandler(this, &MyFormPersoSelec::ModPerso_Click);
			// 
			// PersoView
			// 
			this->PersoView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->PersoView->Location = System::Drawing::Point(16, 50);
			this->PersoView->Margin = System::Windows::Forms::Padding(4);
			this->PersoView->Name = L"PersoView";
			this->PersoView->RowHeadersWidth = 51;
			this->PersoView->Size = System::Drawing::Size(1011, 91);
			this->PersoView->TabIndex = 42;
			this->PersoView->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyFormPersoSelec::PersoView_Click);
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
			this->btnReturn->Click += gcnew System::EventHandler(this, &MyFormPersoSelec::Return_Click);
			// 
			// MyFormPersoSelec
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1056, 212);
			this->Controls->Add(this->btnSupPerso);
			this->Controls->Add(this->btnModPerso);
			this->Controls->Add(this->PersoView);
			this->Controls->Add(this->btnReturn);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyFormPersoSelec";
			this->Text = L"MyFormPersoSelec";
			this->Load += gcnew System::EventHandler(this, &MyFormPersoSelec::MyFormPersoSelec_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PersoView))->EndInit();
			this->ResumeLayout(false);

		}


#pragma endregion
	private: System::Void MyFormPersoSelec_Load(System::Object^ sender, System::EventArgs^ e) {
		this->oPersonnel = gcnew NS_Comp_Personnel::personnel();
		refreshTable();
	}
private: System::Void Return_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void ModPerso_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->PersoView->Rows[0]->Cells[1]->Value->ToString() == "False") {
		MessageBox::Show(L"Un personnel inactif ne peut être modifié !", L"Message",
		MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	else {
		this->Hide();
		MyFormPersoSelecMod^ Form = gcnew MyFormPersoSelecMod(this->idPerso);
		Form->ShowDialog();
		refreshTable();
		this->Show();
	}
}
private: System::Void SupPerso_Click(System::Object^ sender, System::EventArgs^ e) {	

	//Requette de Supression Tu Connais
	
	this->oPersonnel->supprimer(System::Convert::ToInt64(this->idPerso));
	if (this->PersoView->Rows[0]->Cells[1]->Value->ToString() == "False") {
		MessageBox::Show(L"Ce personnel est déjà supprimé !", L"Message",
		MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	else {
		MessageBox::Show(L"Personnel supprimé !", L"Message",
		MessageBoxButtons::OK, MessageBoxIcon::Warning);
		refreshTable();
	}
	
}
private: System::Void PersoView_Click(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
	   public: void MyFormPersoSelec::refreshTable(void) {
		   this->PersoView->Refresh();
		   this->oDs = this->oPersonnel->afficherUn("fu", System::Convert::ToInt64(this->idPerso));
		   this->PersoView->DataSource = this->oDs;
		   this->PersoView->DataMember = "fu";
	   }
};
}
