#pragma once

#include "MyFormPerso.h"
#include "MyFormSto.h"
#include "MyFormCli.h"
#include "MyFormCom.h"
#include "MyFormStat.h"

namespace ProjetAPP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnGestPerso;
	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::Button^ btnSto;

	private: System::Windows::Forms::Button^ btnCom;

	private: System::Windows::Forms::Button^ btnCli;
	private: System::Windows::Forms::Button^ btnStat;
	private: System::Windows::Forms::PictureBox^ pictureBox1;



	protected:




	private: System::ComponentModel::IContainer^ components;
	protected:

	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->btnGestPerso = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->btnSto = (gcnew System::Windows::Forms::Button());
			this->btnCom = (gcnew System::Windows::Forms::Button());
			this->btnCli = (gcnew System::Windows::Forms::Button());
			this->btnStat = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnGestPerso
			// 
			this->btnGestPerso->BackColor = System::Drawing::Color::Transparent;
			this->btnGestPerso->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnGestPerso->Location = System::Drawing::Point(12, 226);
			this->btnGestPerso->Name = L"btnGestPerso";
			this->btnGestPerso->Size = System::Drawing::Size(201, 23);
			this->btnGestPerso->TabIndex = 0;
			this->btnGestPerso->Text = L"Gestion Personnel";
			this->btnGestPerso->UseVisualStyleBackColor = false;
			this->btnGestPerso->Click += gcnew System::EventHandler(this, &MyForm::Perso_Click);
			// 
			// btnExit
			// 
			this->btnExit->BackColor = System::Drawing::Color::Transparent;
			this->btnExit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnExit->Location = System::Drawing::Point(12, 12);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(117, 23);
			this->btnExit->TabIndex = 1;
			this->btnExit->Text = L"Quitter l\'application ";
			this->btnExit->UseVisualStyleBackColor = false;
			this->btnExit->Click += gcnew System::EventHandler(this, &MyForm::Exit_Click);
			// 
			// btnSto
			// 
			this->btnSto->BackColor = System::Drawing::Color::Transparent;
			this->btnSto->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSto->Location = System::Drawing::Point(12, 197);
			this->btnSto->Name = L"btnSto";
			this->btnSto->Size = System::Drawing::Size(201, 23);
			this->btnSto->TabIndex = 2;
			this->btnSto->Text = L"Gestion Stock";
			this->btnSto->UseVisualStyleBackColor = false;
			this->btnSto->Click += gcnew System::EventHandler(this, &MyForm::Sto_Click);
			// 
			// btnCom
			// 
			this->btnCom->BackColor = System::Drawing::Color::Transparent;
			this->btnCom->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCom->Location = System::Drawing::Point(12, 168);
			this->btnCom->Name = L"btnCom";
			this->btnCom->Size = System::Drawing::Size(201, 23);
			this->btnCom->TabIndex = 3;
			this->btnCom->Text = L"Gestion Commandes";
			this->btnCom->UseVisualStyleBackColor = false;
			this->btnCom->Click += gcnew System::EventHandler(this, &MyForm::Com_Click);
			// 
			// btnCli
			// 
			this->btnCli->BackColor = System::Drawing::Color::Transparent;
			this->btnCli->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCli->Location = System::Drawing::Point(12, 139);
			this->btnCli->Name = L"btnCli";
			this->btnCli->Size = System::Drawing::Size(201, 23);
			this->btnCli->TabIndex = 4;
			this->btnCli->Text = L"Gestion Clients";
			this->btnCli->UseVisualStyleBackColor = false;
			this->btnCli->Click += gcnew System::EventHandler(this, &MyForm::Cli_Click);
			// 
			// btnStat
			// 
			this->btnStat->BackColor = System::Drawing::Color::Transparent;
			this->btnStat->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnStat->Location = System::Drawing::Point(402, 12);
			this->btnStat->Name = L"btnStat";
			this->btnStat->Size = System::Drawing::Size(116, 23);
			this->btnStat->TabIndex = 5;
			this->btnStat->Text = L"Statistiques";
			this->btnStat->UseVisualStyleBackColor = false;
			this->btnStat->Click += gcnew System::EventHandler(this, &MyForm::Stat_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(324, 168);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(194, 81);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(530, 261);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btnStat);
			this->Controls->Add(this->btnCli);
			this->Controls->Add(this->btnCom);
			this->Controls->Add(this->btnSto);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnGestPerso);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Acceuil";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Perso_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		MyFormPerso^ Form = gcnew MyFormPerso;
		Form->ShowDialog();
		this->Show();
	}
	private: System::Void Sto_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		MyFormSto^ Form = gcnew MyFormSto;
		Form->ShowDialog();
		this->Show();
	}
	private: System::Void Com_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		MyFormCom^ Form = gcnew MyFormCom;
		Form->ShowDialog();
		this->Show();
	}
	private: System::Void Cli_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		MyFormCli^ Form = gcnew MyFormCli;
		Form->ShowDialog();
		this->Show();
	}
	private: System::Void Stat_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		MyFormStat^ Form = gcnew MyFormStat;
		Form->ShowDialog();
		this->Show();
	}
	private: System::Void Exit_Click(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("Voulez-vous quitter l'application?", "Quitter l'application", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes)
			Application::Exit();
	}
	private: System::Void notifyIcon1_MouseDoubleClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
