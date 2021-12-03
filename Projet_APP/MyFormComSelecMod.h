#pragma once

#include "cad.h"
#include "commande.h"

namespace ProjetAPP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyFormComSelecMod
	/// </summary>
	public ref class MyFormComSelecMod : public System::Windows::Forms::Form
	{
	public:
		MyFormComSelecMod(void)
		{
			InitializeComponent();
		}
		MyFormComSelecMod(System::String^ idCommande)
		{
			InitializeComponent();
			this->idCommande = idCommande;
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyFormComSelecMod()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnReturn;
	protected:


	private: System::Windows::Forms::Button^ btnModCli;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;

	
	private: NS_Comp_Data::cad^ oCad;
	private: System::String^ idCommande;
	private: System::Data::DataSet^ oDs;
	private: NS_Comp_Commande::commande^ oCommande;
	
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
			this->btnReturn = (gcnew System::Windows::Forms::Button());
			this->btnModCli = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnReturn
			// 
			this->btnReturn->Location = System::Drawing::Point(16, 15);
			this->btnReturn->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnReturn->Name = L"btnReturn";
			this->btnReturn->Size = System::Drawing::Size(100, 28);
			this->btnReturn->TabIndex = 44;
			this->btnReturn->Text = L"Retour";
			this->btnReturn->UseVisualStyleBackColor = true;
			this->btnReturn->Click += gcnew System::EventHandler(this, &MyFormComSelecMod::Return_Click);
			// 
			// btnModCli
			// 
			this->btnModCli->Location = System::Drawing::Point(517, 307);
			this->btnModCli->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnModCli->Name = L"btnModCli";
			this->btnModCli->Size = System::Drawing::Size(100, 28);
			this->btnModCli->TabIndex = 45;
			this->btnModCli->Text = L"Modifier";
			this->btnModCli->UseVisualStyleBackColor = true;
			this->btnModCli->Click += gcnew System::EventHandler(this, &MyFormComSelecMod::ModCli_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(19, 218);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(138, 16);
			this->label11->TabIndex = 70;
			this->label11->Text = L"ID Adresse facturation";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(23, 169);
			this->textBox8->Margin = System::Windows::Forms::Padding(4);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(71, 22);
			this->textBox8->TabIndex = 69;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(20, 149);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(127, 16);
			this->label10->TabIndex = 68;
			this->label10->Text = L"ID Adresse livraison";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(23, 238);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(71, 22);
			this->textBox3->TabIndex = 67;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(133, 104);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(18, 17);
			this->checkBox2->TabIndex = 66;
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"yyyy-MM-dd";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->dateTimePicker1->Location = System::Drawing::Point(19, 102);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(100, 22);
			this->dateTimePicker1->TabIndex = 65;
			this->dateTimePicker1->TabStop = false;
			this->dateTimePicker1->Value = System::DateTime(2021, 11, 30, 14, 43, 45, 0);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(16, 83);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(126, 16);
			this->label3->TabIndex = 63;
			this->label3->Text = L"Date de commande";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(214, 15);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(403, 273);
			this->dataGridView1->TabIndex = 71;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyFormComSelecMod::dataGridView1_CellContentClick);
			// 
			// MyFormComSelecMod
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(633, 348);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->btnModCli);
			this->Controls->Add(this->btnReturn);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"MyFormComSelecMod";
			this->Text = L"MyFormComSelecMod";
			this->Load += gcnew System::EventHandler(this, &MyFormComSelecMod::MyFormComSelecMod_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void MyFormComSelecMod_Load(System::Object^ sender, System::EventArgs^ e) {
			this->oCad = gcnew NS_Comp_Data::cad();
			this->oCommande = gcnew NS_Comp_Commande::commande();

			this->dataGridView1->Refresh();
			this->oDs = this->oCommande->afficherUne("fu", System::Convert::ToInt64(this->idCommande));
			this->dataGridView1->DataSource = this->oDs;
			this->dataGridView1->DataMember = "fu";
		}

	private: System::Void Return_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void ModCli_Click(System::Object^ sender, System::EventArgs^ e) {
			   //la requete SQL tu connais
		System::String^ sql;

		if (this->checkBox2->Checked == true)
		{
			sql = "IF ('" + this->dateTimePicker1->Text + "' NOT IN (SELECT date FROM dates)) BEGIN INSERT INTO dates(date) VALUES('" + this->dateTimePicker1->Text + "'); END ";
		}

		sql += "UPDATE commande SET ";
		if (this->textBox8->Text != "") { sql += "adresseLivraison = " + this->textBox8->Text + ", "; }
		if (this->textBox3->Text != "") { sql += "adresseFacturation = " + this->textBox3->Text + ", "; }
		if (this->checkBox2->Checked == true) { sql += "dateCommande =  '" +this->dateTimePicker1->Text + " "+ this->dateTimePicker1->Value.ToShortTimeString() + "', "; }
		sql += "refCommande = refCommande WHERE idCommande = " + this->idCommande + "; ";

		this->oCad->actionRows(sql);

		MessageBox::Show(L"Information(s) modifiée(s) !", L"Message",
		MessageBoxButtons::OK, MessageBoxIcon::Warning);
		this->Close();
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
