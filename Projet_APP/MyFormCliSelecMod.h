#pragma once

#include "actualiserVilles.h"
#include "cad.h"
#include "client.h"

namespace ProjetAPP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyFormCliSelecMod
	/// </summary>
	public ref class MyFormCliSelecMod : public System::Windows::Forms::Form
	{
	public:
		MyFormCliSelecMod(void)
		{
			InitializeComponent();
		}
		MyFormCliSelecMod(System::String^ idClient)
		{
			InitializeComponent();
			this->idClient = idClient;
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyFormCliSelecMod()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:








	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::Button^ btnModCli;
	private: System::Windows::Forms::Button^ btnReturn;

	private: NS_Comp_Actualiser_Villes::actualiserVilles^ oActualiserVilles;
	private: NS_Comp_Data::cad^ oCad;
	private: System::String^ idClient;
	private: System::Data::DataSet^ oDs;
	private: NS_Comp_Client::client^ oClient;

	private: System::Windows::Forms::CheckBox^ checkBox1;

	private: System::Windows::Forms::DataGridView^ dataGridView1;


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
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->btnModCli = (gcnew System::Windows::Forms::Button());
			this->btnReturn = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(13, 106);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(120, 16);
			this->label9->TabIndex = 36;
			this->label9->Text = L"Date de naissance";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(295, 60);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(54, 16);
			this->label3->TabIndex = 34;
			this->label3->Text = L"Prénom";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 60);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(36, 16);
			this->label2->TabIndex = 32;
			this->label2->Text = L"Nom";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"yyyy-MM-dd";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(16, 126);
			this->dateTimePicker1->Margin = System::Windows::Forms::Padding(4);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(152, 22);
			this->dateTimePicker1->TabIndex = 30;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(298, 80);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(243, 22);
			this->textBox3->TabIndex = 29;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(16, 80);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(243, 22);
			this->textBox2->TabIndex = 28;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyFormCliSelecMod::textBox2_TextChanged);
			// 
			// btnModCli
			// 
			this->btnModCli->Location = System::Drawing::Point(441, 124);
			this->btnModCli->Margin = System::Windows::Forms::Padding(4);
			this->btnModCli->Name = L"btnModCli";
			this->btnModCli->Size = System::Drawing::Size(100, 28);
			this->btnModCli->TabIndex = 40;
			this->btnModCli->Text = L"Modifier";
			this->btnModCli->UseVisualStyleBackColor = true;
			this->btnModCli->Click += gcnew System::EventHandler(this, &MyFormCliSelecMod::ModCli_Click);
			// 
			// btnReturn
			// 
			this->btnReturn->Location = System::Drawing::Point(16, 15);
			this->btnReturn->Margin = System::Windows::Forms::Padding(4);
			this->btnReturn->Name = L"btnReturn";
			this->btnReturn->Size = System::Drawing::Size(100, 28);
			this->btnReturn->TabIndex = 41;
			this->btnReturn->Text = L"Retour";
			this->btnReturn->UseVisualStyleBackColor = true;
			this->btnReturn->Click += gcnew System::EventHandler(this, &MyFormCliSelecMod::Return_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(175, 131);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(18, 17);
			this->checkBox1->TabIndex = 42;
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 170);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(595, 121);
			this->dataGridView1->TabIndex = 44;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyFormCliSelecMod::dataGridView1_CellContentClick);
			// 
			// MyFormCliSelecMod
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(623, 310);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->btnReturn);
			this->Controls->Add(this->btnModCli);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyFormCliSelecMod";
			this->Text = L"MyFormCliSelecMod";
			this->Load += gcnew System::EventHandler(this, &MyFormCliSelecMod::MyFormCliSelecMod_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyFormCliSelecMod_Load(System::Object^ sender, System::EventArgs^ e) {
		this->oCad = gcnew NS_Comp_Data::cad();
		this->oActualiserVilles = gcnew NS_Comp_Actualiser_Villes::actualiserVilles();
		this->oClient = gcnew NS_Comp_Client::client();

		this->dataGridView1->Refresh();
		this->oDs = this->oClient->afficherUn("fu", System::Convert::ToInt64(this->idClient));
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "fu";
	}

	private: System::Void Return_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void ModCli_Click(System::Object^ sender, System::EventArgs^ e) {
	//la requete SQL tu connais
	System::String^ sql;

	if (this->checkBox1->Checked == true)
	{
		sql = "IF ('" + this->dateTimePicker1->Text + "' NOT IN (SELECT date FROM dates)) BEGIN INSERT INTO dates(date) VALUES('" + this->dateTimePicker1->Text + "'); END ";
	}

	sql += "UPDATE client SET ";
	if (this->textBox2->Text != "") { sql += "nomClient = '" + this->textBox2->Text + "', "; }
	if (this->textBox3->Text != "") { sql += "prenomClient = '" + this->textBox3->Text + "', "; }
	if (this->checkBox1->Checked == true){sql += "dateNaissance = (SELECT idDate FROM dates WHERE date = '" + this->dateTimePicker1->Text + "'), ";}
	sql += "clientActif = 'True' WHERE idClient = " + this->idClient +"; ";

	this->oCad->actionRows(sql);

	MessageBox::Show(L"Information(s) modifiée(s) !", L"Message",
	MessageBoxButtons::OK, MessageBoxIcon::Warning);
	this->Close();
	
	}

private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}

private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
