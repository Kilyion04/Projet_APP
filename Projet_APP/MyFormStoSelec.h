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
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyFormStoSelec::typeid));
			this->btnSupSto = (gcnew System::Windows::Forms::Button());
			this->btnModSto = (gcnew System::Windows::Forms::Button());
			this->StoView = (gcnew System::Windows::Forms::DataGridView());
			this->btnReturn = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->StoView))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnSupSto
			// 
			this->btnSupSto->BackColor = System::Drawing::Color::Transparent;
			this->btnSupSto->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnSupSto->Location = System::Drawing::Point(150, 174);
			this->btnSupSto->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnSupSto->Name = L"btnSupSto";
			this->btnSupSto->Size = System::Drawing::Size(100, 28);
			this->btnSupSto->TabIndex = 44;
			this->btnSupSto->Text = L"Supprimer";
			this->btnSupSto->UseVisualStyleBackColor = false;
			this->btnSupSto->Click += gcnew System::EventHandler(this, &MyFormStoSelec::SupSto_Click);
			// 
			// btnModSto
			// 
			this->btnModSto->BackColor = System::Drawing::Color::Transparent;
			this->btnModSto->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnModSto->Location = System::Drawing::Point(16, 174);
			this->btnModSto->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnModSto->Name = L"btnModSto";
			this->btnModSto->Size = System::Drawing::Size(100, 28);
			this->btnModSto->TabIndex = 43;
			this->btnModSto->Text = L"Modifier";
			this->btnModSto->UseVisualStyleBackColor = false;
			this->btnModSto->Click += gcnew System::EventHandler(this, &MyFormStoSelec::ModSto_Click);
			// 
			// StoView
			// 
			this->StoView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->StoView->Location = System::Drawing::Point(16, 50);
			this->StoView->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->StoView->Name = L"StoView";
			this->StoView->RowHeadersWidth = 51;
			this->StoView->Size = System::Drawing::Size(1011, 94);
			this->StoView->TabIndex = 42;
			this->StoView->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyFormStoSelec::StoView_Click);
			// 
			// btnReturn
			// 
			this->btnReturn->BackColor = System::Drawing::Color::Transparent;
			this->btnReturn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnReturn->Location = System::Drawing::Point(16, 15);
			this->btnReturn->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnReturn->Name = L"btnReturn";
			this->btnReturn->Size = System::Drawing::Size(100, 28);
			this->btnReturn->TabIndex = 41;
			this->btnReturn->Text = L"Retour";
			this->btnReturn->UseVisualStyleBackColor = false;
			this->btnReturn->Click += gcnew System::EventHandler(this, &MyFormStoSelec::Return_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(786, 152);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(259, 91);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 45;
			this->pictureBox1->TabStop = false;
			// 
			// MyFormStoSelec
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1075, 256);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btnSupSto);
			this->Controls->Add(this->btnModSto);
			this->Controls->Add(this->StoView);
			this->Controls->Add(this->btnReturn);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"MyFormStoSelec";
			this->Text = L"MyFormStoSelec";
			this->Load += gcnew System::EventHandler(this, &MyFormStoSelec::MyFormStoSelec_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->StoView))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
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
