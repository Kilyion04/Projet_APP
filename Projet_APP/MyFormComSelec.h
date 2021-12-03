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
	private: System::Windows::Forms::PictureBox^ pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyFormComSelec::typeid));
			this->btnSupCom = (gcnew System::Windows::Forms::Button());
			this->btnModCom = (gcnew System::Windows::Forms::Button());
			this->ComView = (gcnew System::Windows::Forms::DataGridView());
			this->btnReturn = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ComView))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnSupCom
			// 
			this->btnSupCom->BackColor = System::Drawing::Color::Transparent;
			this->btnSupCom->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSupCom->Location = System::Drawing::Point(100, 116);
			this->btnSupCom->Name = L"btnSupCom";
			this->btnSupCom->Size = System::Drawing::Size(75, 23);
			this->btnSupCom->TabIndex = 44;
			this->btnSupCom->Text = L"Supprimer";
			this->btnSupCom->UseVisualStyleBackColor = false;
			this->btnSupCom->Click += gcnew System::EventHandler(this, &MyFormComSelec::SupCom_Click);
			// 
			// btnModCom
			// 
			this->btnModCom->BackColor = System::Drawing::Color::Transparent;
			this->btnModCom->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnModCom->Location = System::Drawing::Point(19, 116);
			this->btnModCom->Name = L"btnModCom";
			this->btnModCom->Size = System::Drawing::Size(75, 23);
			this->btnModCom->TabIndex = 43;
			this->btnModCom->Text = L"Modifier";
			this->btnModCom->UseVisualStyleBackColor = false;
			this->btnModCom->Click += gcnew System::EventHandler(this, &MyFormComSelec::ModCom_Click);
			// 
			// ComView
			// 
			this->ComView->BackgroundColor = System::Drawing::Color::White;
			this->ComView->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ComView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->ComView->Location = System::Drawing::Point(12, 41);
			this->ComView->Name = L"ComView";
			this->ComView->RowHeadersWidth = 51;
			this->ComView->Size = System::Drawing::Size(758, 69);
			this->ComView->TabIndex = 42;
			this->ComView->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyFormComSelec::ComView_Click);
			// 
			// btnReturn
			// 
			this->btnReturn->BackColor = System::Drawing::Color::Transparent;
			this->btnReturn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnReturn->Location = System::Drawing::Point(12, 12);
			this->btnReturn->Name = L"btnReturn";
			this->btnReturn->Size = System::Drawing::Size(75, 23);
			this->btnReturn->TabIndex = 41;
			this->btnReturn->Text = L"retour";
			this->btnReturn->UseVisualStyleBackColor = false;
			this->btnReturn->Click += gcnew System::EventHandler(this, &MyFormComSelec::Return_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(181, 116);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(102, 23);
			this->button1->TabIndex = 45;
			this->button1->Text = L"Date d\'émission";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyFormComSelec::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(289, 116);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(105, 23);
			this->button2->TabIndex = 46;
			this->button2->Text = L"Date de livraison";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyFormComSelec::button2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(678, 116);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(108, 35);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 73;
			this->pictureBox1->TabStop = false;
			// 
			// MyFormComSelec
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(785, 150);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btnSupCom);
			this->Controls->Add(this->btnModCom);
			this->Controls->Add(this->ComView);
			this->Controls->Add(this->btnReturn);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyFormComSelec";
			this->Text = L"MyFormComSelec";
			this->Load += gcnew System::EventHandler(this, &MyFormComSelec::MyFormComSelec_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ComView))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
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
