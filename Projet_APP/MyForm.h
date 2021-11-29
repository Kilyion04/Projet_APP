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
			this->SuspendLayout();
			// 
			// btnGestPerso
			// 
			this->btnGestPerso->Location = System::Drawing::Point(16, 278);
			this->btnGestPerso->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnGestPerso->Name = L"btnGestPerso";
			this->btnGestPerso->Size = System::Drawing::Size(268, 28);
			this->btnGestPerso->TabIndex = 0;
			this->btnGestPerso->Text = L"Gestion Personnel";
			this->btnGestPerso->UseVisualStyleBackColor = true;
			this->btnGestPerso->Click += gcnew System::EventHandler(this, &MyForm::Perso_Click);
			// 
			// btnExit
			// 
			this->btnExit->Location = System::Drawing::Point(16, 15);
			this->btnExit->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(156, 28);
			this->btnExit->TabIndex = 1;
			this->btnExit->Text = L"Quitter l\'application ";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &MyForm::Exit_Click);
			// 
			// btnSto
			// 
			this->btnSto->Location = System::Drawing::Point(16, 242);
			this->btnSto->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnSto->Name = L"btnSto";
			this->btnSto->Size = System::Drawing::Size(268, 28);
			this->btnSto->TabIndex = 2;
			this->btnSto->Text = L"Gestion Stock";
			this->btnSto->UseVisualStyleBackColor = true;
			this->btnSto->Click += gcnew System::EventHandler(this, &MyForm::Sto_Click);
			// 
			// btnCom
			// 
			this->btnCom->Location = System::Drawing::Point(16, 207);
			this->btnCom->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnCom->Name = L"btnCom";
			this->btnCom->Size = System::Drawing::Size(268, 28);
			this->btnCom->TabIndex = 3;
			this->btnCom->Text = L"Gestion Commandes";
			this->btnCom->UseVisualStyleBackColor = true;
			this->btnCom->Click += gcnew System::EventHandler(this, &MyForm::Com_Click);
			// 
			// btnCli
			// 
			this->btnCli->Location = System::Drawing::Point(16, 171);
			this->btnCli->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnCli->Name = L"btnCli";
			this->btnCli->Size = System::Drawing::Size(268, 28);
			this->btnCli->TabIndex = 4;
			this->btnCli->Text = L"Gestion Clients";
			this->btnCli->UseVisualStyleBackColor = true;
			this->btnCli->Click += gcnew System::EventHandler(this, &MyForm::Cli_Click);
			// 
			// btnStat
			// 
			this->btnStat->Location = System::Drawing::Point(536, 15);
			this->btnStat->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnStat->Name = L"btnStat";
			this->btnStat->Size = System::Drawing::Size(155, 28);
			this->btnStat->TabIndex = 5;
			this->btnStat->Text = L"Statistiques";
			this->btnStat->UseVisualStyleBackColor = true;
			this->btnStat->Click += gcnew System::EventHandler(this, &MyForm::Stat_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(707, 321);
			this->Controls->Add(this->btnStat);
			this->Controls->Add(this->btnCli);
			this->Controls->Add(this->btnCom);
			this->Controls->Add(this->btnSto);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnGestPerso);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"MyForm";
			this->Text = L"Acceuil";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
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
