#pragma once

#include "MyFormStoSelecMod.h"
#include "stock.h"

namespace ProjetAPP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyFormStoSelec
	/// </summary>
	public ref class MyFormStoSelec : public System::Windows::Forms::Form
	{
	public:
		MyFormStoSelec(void)
		{
			InitializeComponent();
		}
	MyFormStoSelec(System::String^ idArticle)
	{
		InitializeComponent();
		this->idArticle = idArticle;
	}
	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyFormStoSelec()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnReturn;
	private: System::Windows::Forms::DataGridView^ StoView;

	private: System::Windows::Forms::Button^ btnSupSto;
	private: System::Windows::Forms::Button^ btnModSto;
	protected:

	private: NS_Comp_Stock::stock^ oStock;
	private: System::Data::DataSet^ oDs;

	private: System::String^ idArticle;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;

	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnSupSto = (gcnew System::Windows::Forms::Button());
			this->btnModSto = (gcnew System::Windows::Forms::Button());
			this->StoView = (gcnew System::Windows::Forms::DataGridView());
			this->btnReturn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->StoView))->BeginInit();
			this->SuspendLayout();
			// 
			// btnSupSto
			// 
			this->btnSupSto->Location = System::Drawing::Point(93, 96);
			this->btnSupSto->Name = L"btnSupSto";
			this->btnSupSto->Size = System::Drawing::Size(75, 23);
			this->btnSupSto->TabIndex = 44;
			this->btnSupSto->Text = L"Supprimer";
			this->btnSupSto->UseVisualStyleBackColor = true;
			this->btnSupSto->Click += gcnew System::EventHandler(this, &MyFormStoSelec::SupSto_Click);
			// 
			// btnModSto
			// 
			this->btnModSto->Location = System::Drawing::Point(12, 96);
			this->btnModSto->Name = L"btnModSto";
			this->btnModSto->Size = System::Drawing::Size(75, 23);
			this->btnModSto->TabIndex = 43;
			this->btnModSto->Text = L"Modifier";
			this->btnModSto->UseVisualStyleBackColor = true;
			this->btnModSto->Click += gcnew System::EventHandler(this, &MyFormStoSelec::ModSto_Click);
			// 
			// StoView
			// 
			this->StoView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->StoView->Location = System::Drawing::Point(12, 41);
			this->StoView->Name = L"StoView";
			this->StoView->Size = System::Drawing::Size(758, 49);
			this->StoView->TabIndex = 42;
			this->StoView->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyFormStoSelec::StoView_Click);
			// 
			// btnReturn
			// 
			this->btnReturn->Location = System::Drawing::Point(12, 12);
			this->btnReturn->Name = L"btnReturn";
			this->btnReturn->Size = System::Drawing::Size(75, 23);
			this->btnReturn->TabIndex = 41;
			this->btnReturn->Text = L"retour";
			this->btnReturn->UseVisualStyleBackColor = true;
			this->btnReturn->Click += gcnew System::EventHandler(this, &MyFormStoSelec::Return_Click);
			// 
			// MyFormStoSelec
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(793, 137);
			this->Controls->Add(this->btnSupSto);
			this->Controls->Add(this->btnModSto);
			this->Controls->Add(this->StoView);
			this->Controls->Add(this->btnReturn);
			this->Name = L"MyFormStoSelec";
			this->Text = L"MyFormStoSelec";
			this->Load += gcnew System::EventHandler(this, &MyFormStoSelec::MyFormStoSelec_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->StoView))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyFormStoSelec_Load(System::Object^ sender, System::EventArgs^ e) {
		this->oStock = gcnew NS_Comp_Stock::stock();
		refreshTable();
	}
private: System::Void Return_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void ModSto_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	MyFormStoSelecMod^ Form = gcnew MyFormStoSelecMod(this->idArticle);
	Form->ShowDialog();
	refreshTable();
	this->Show();
}
private: System::Void SupSto_Click(System::Object^ sender, System::EventArgs^ e) {	
	
		this->oStock->supprimer(System::Convert::ToInt64(this->idArticle));
		MessageBox::Show(L"Article supprimé !", L"Message",
		MessageBoxButtons::OK, MessageBoxIcon::Warning);
		this->Close();
	
}
private: System::Void StoView_Click(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: void MyFormStoSelec::refreshTable(void) {
	this->StoView->Refresh();
	this->oDs = this->oStock->afficherUnArticle("fu", System::Convert::ToInt64(this->idArticle));
	this->StoView->DataSource = this->oDs;
	this->StoView->DataMember = "fu";
}
};
}
