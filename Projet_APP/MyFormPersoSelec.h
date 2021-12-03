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
	private: System::Windows::Forms::PictureBox^ pictureBox1;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyFormPersoSelec::typeid));
			this->btnSupPerso = (gcnew System::Windows::Forms::Button());
			this->btnModPerso = (gcnew System::Windows::Forms::Button());
			this->PersoView = (gcnew System::Windows::Forms::DataGridView());
			this->btnReturn = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PersoView))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnSupPerso
			// 
			this->btnSupPerso->BackColor = System::Drawing::Color::Transparent;
			this->btnSupPerso->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnSupPerso->Location = System::Drawing::Point(146, 180);
			this->btnSupPerso->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnSupPerso->Name = L"btnSupPerso";
			this->btnSupPerso->Size = System::Drawing::Size(100, 28);
			this->btnSupPerso->TabIndex = 44;
			this->btnSupPerso->Text = L"Supprimer";
			this->btnSupPerso->UseVisualStyleBackColor = false;
			this->btnSupPerso->Click += gcnew System::EventHandler(this, &MyFormPersoSelec::SupPerso_Click);
			// 
			// btnModPerso
			// 
			this->btnModPerso->BackColor = System::Drawing::Color::Transparent;
			this->btnModPerso->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnModPerso->Location = System::Drawing::Point(17, 180);
			this->btnModPerso->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnModPerso->Name = L"btnModPerso";
			this->btnModPerso->Size = System::Drawing::Size(100, 28);
			this->btnModPerso->TabIndex = 43;
			this->btnModPerso->Text = L"Modifier";
			this->btnModPerso->UseVisualStyleBackColor = false;
			this->btnModPerso->Click += gcnew System::EventHandler(this, &MyFormPersoSelec::ModPerso_Click);
			// 
			// PersoView
			// 
			this->PersoView->BackgroundColor = System::Drawing::Color::White;
			this->PersoView->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->PersoView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->PersoView->Location = System::Drawing::Point(16, 51);
			this->PersoView->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->PersoView->Name = L"PersoView";
			this->PersoView->RowHeadersWidth = 51;
			this->PersoView->Size = System::Drawing::Size(1027, 104);
			this->PersoView->TabIndex = 42;
			this->PersoView->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyFormPersoSelec::PersoView_Click);
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
			this->btnReturn->Click += gcnew System::EventHandler(this, &MyFormPersoSelec::Return_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(794, 161);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(259, 100);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 59;
			this->pictureBox1->TabStop = false;
			// 
			// MyFormPersoSelec
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1081, 274);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btnSupPerso);
			this->Controls->Add(this->btnModPerso);
			this->Controls->Add(this->PersoView);
			this->Controls->Add(this->btnReturn);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"MyFormPersoSelec";
			this->Text = L"MyFormPersoSelec";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyFormPersoSelec::MyFormPersoSelec_FormClosing);
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MyFormPersoSelec::MyFormPersoSelec_FormClosed);
			this->Load += gcnew System::EventHandler(this, &MyFormPersoSelec::MyFormPersoSelec_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PersoView))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
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
private: System::Void MyFormPersoSelec_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	
	
}
private: System::Void MyFormPersoSelec_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
	
}
};
}
