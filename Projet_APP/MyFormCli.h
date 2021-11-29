#pragma once

#include "MyFormCliSelec.h"
#include "client.h"
#include "actualiserVilles.h"
#include "cad.h"

namespace ProjetAPP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyFormCli
	/// </summary>
	public ref class MyFormCli : public System::Windows::Forms::Form
	{
	public:
		MyFormCli(void)
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
		~MyFormCli()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnReturn;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ btnCreCli;
	private: System::Windows::Forms::Button^ btnAffCli;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;

	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::TextBox^ textBox6;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBox1;


	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ btnRecCli;

	private: NS_Comp_Client::client^ oClient;
	private: System::Data::DataSet^ oDs;
	private: NS_Comp_Actualiser_Villes::actualiserVilles^ oActualiserVilles;
	private: NS_Comp_Data::cad^ oCad;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::CheckBox^ checkBox1;

	protected:

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->btnCreCli = (gcnew System::Windows::Forms::Button());
			this->btnAffCli = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->btnRecCli = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnReturn
			// 
			this->btnReturn->Location = System::Drawing::Point(17, 16);
			this->btnReturn->Margin = System::Windows::Forms::Padding(4);
			this->btnReturn->Name = L"btnReturn";
			this->btnReturn->Size = System::Drawing::Size(100, 28);
			this->btnReturn->TabIndex = 0;
			this->btnReturn->Text = L"Retour";
			this->btnReturn->UseVisualStyleBackColor = true;
			this->btnReturn->Click += gcnew System::EventHandler(this, &MyFormCli::return_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(17, 53);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(337, 439);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyFormCli::dataGridView1_CellContentClick);
			// 
			// btnCreCli
			// 
			this->btnCreCli->Location = System::Drawing::Point(376, 96);
			this->btnCreCli->Margin = System::Windows::Forms::Padding(4);
			this->btnCreCli->Name = L"btnCreCli";
			this->btnCreCli->Size = System::Drawing::Size(100, 28);
			this->btnCreCli->TabIndex = 2;
			this->btnCreCli->Text = L"Créer";
			this->btnCreCli->UseVisualStyleBackColor = true;
			this->btnCreCli->Click += gcnew System::EventHandler(this, &MyFormCli::CreCli_Click);
			// 
			// btnAffCli
			// 
			this->btnAffCli->Location = System::Drawing::Point(8, 23);
			this->btnAffCli->Margin = System::Windows::Forms::Padding(4);
			this->btnAffCli->Name = L"btnAffCli";
			this->btnAffCli->Size = System::Drawing::Size(100, 28);
			this->btnAffCli->TabIndex = 3;
			this->btnAffCli->Text = L"Afficher";
			this->btnAffCli->UseVisualStyleBackColor = true;
			this->btnAffCli->Click += gcnew System::EventHandler(this, &MyFormCli::AffCli_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(749, 15);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(224, 28);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Actualiser la Base de Données";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyFormCli::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(8, 75);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(132, 22);
			this->textBox1->TabIndex = 5;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyFormCli::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(376, 185);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(243, 22);
			this->textBox2->TabIndex = 6;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyFormCli::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(376, 245);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(243, 22);
			this->textBox3->TabIndex = 7;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(13, 43);
			this->textBox5->Margin = System::Windows::Forms::Padding(4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(49, 22);
			this->textBox5->TabIndex = 9;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"yyyy-MM-dd";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(376, 391);
			this->dateTimePicker1->Margin = System::Windows::Forms::Padding(4);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(100, 22);
			this->dateTimePicker1->TabIndex = 10;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &MyFormCli::dateTimePicker1_ValueChanged);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(72, 43);
			this->textBox6->Margin = System::Windows::Forms::Padding(4);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(243, 22);
			this->textBox6->TabIndex = 11;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(4, 55);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(20, 16);
			this->label1->TabIndex = 14;
			this->label1->Text = L"ID";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(372, 165);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(36, 16);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Nom";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(324, 42);
			this->comboBox1->Margin = System::Windows::Forms::Padding(4);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(132, 24);
			this->comboBox1->TabIndex = 16;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(372, 225);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(54, 16);
			this->label3->TabIndex = 19;
			this->label3->Text = L"Prénom";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(9, 20);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(21, 16);
			this->label5->TabIndex = 21;
			this->label5->Text = L"N°";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(68, 20);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(84, 16);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Nom de voie";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(320, 20);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(33, 16);
			this->label7->TabIndex = 23;
			this->label7->Text = L"Ville";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(461, 20);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(80, 16);
			this->label8->TabIndex = 24;
			this->label8->Text = L"Code postal";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(372, 372);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(36, 16);
			this->label9->TabIndex = 25;
			this->label9->Text = L"Date";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Location = System::Drawing::Point(363, 278);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(611, 81);
			this->groupBox1->TabIndex = 26;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Adresse";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(464, 42);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(112, 22);
			this->textBox4->TabIndex = 25;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->btnAffCli);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Location = System::Drawing::Point(816, 53);
			this->groupBox2->Margin = System::Windows::Forms::Padding(4);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(4);
			this->groupBox2->Size = System::Drawing::Size(157, 113);
			this->groupBox2->TabIndex = 27;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Afficher un client";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &MyFormCli::groupBox2_Enter);
			// 
			// btnRecCli
			// 
			this->btnRecCli->Location = System::Drawing::Point(376, 53);
			this->btnRecCli->Margin = System::Windows::Forms::Padding(4);
			this->btnRecCli->Name = L"btnRecCli";
			this->btnRecCli->Size = System::Drawing::Size(100, 28);
			this->btnRecCli->TabIndex = 28;
			this->btnRecCli->Text = L"Rechercher";
			this->btnRecCli->UseVisualStyleBackColor = true;
			this->btnRecCli->Click += gcnew System::EventHandler(this, &MyFormCli::button2_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(705, 362);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(105, 51);
			this->button2->TabIndex = 29;
			this->button2->Text = L"Actualiser villes";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyFormCli::button2_Click_1);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(490, 392);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(18, 17);
			this->checkBox1->TabIndex = 30;
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// MyFormCli
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(989, 548);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->btnRecCli);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btnCreCli);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->btnReturn);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyFormCli";
			this->Text = L"MyFormCli";
			this->Load += gcnew System::EventHandler(this, &MyFormCli::MyFormCli_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void return_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void MyFormCli_Load(System::Object^ sender, System::EventArgs^ e) {
		this->oClient = gcnew NS_Comp_Client::client();
		this->oActualiserVilles = gcnew NS_Comp_Actualiser_Villes::actualiserVilles();
	}
	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void AffCli_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->textBox1->Text == "")
	{
		MessageBox::Show(L"ID manquant.", L"Message",
			MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	else {
		this->dataGridView1->Refresh();
		this->oDs = this->oClient->afficherUn("fu", System::Convert::ToInt64(this->textBox1->Text));
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "fu";
		if (this->dataGridView1->Rows->Count == 1)
		{
			MessageBox::Show(L"ID inconnu.", L"Message",
				MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else {
			this->Hide();
			MyFormCliSelec^ Form = gcnew MyFormCliSelec(this->textBox1->Text);
			Form->ShowDialog();
			this->Show();
		}
	}
}
private: System::Void CreCli_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->textBox2->Text == "" || this->textBox3->Text == "")
	{
		MessageBox::Show(L"Un ou plusieurs champs ne sont pas remplis !", L"Message",
		MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	else {
		this->oClient->creer(this->textBox2->Text, this->textBox3->Text, this->dateTimePicker1->Text);
		MessageBox::Show(L"Client créé !", L"Message",
		MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
}
private: System::Void groupBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oCad = gcnew NS_Comp_Data::cad();

	this->dataGridView1->Refresh();

	System::String^ sql;

	sql = "SELECT * FROM client, dates WHERE client.dateNaissance = idDate ";
	if (this->textBox2->Text != "") { sql += "AND nomClient = '" + this->textBox2->Text + "' "; }
	if (this->textBox3->Text != "") { sql += "AND prenomClient = '" + this->textBox3->Text + "' "; }
	if (this->checkBox1->Checked == true)
	{
		sql += "AND dates.date = '" + this->dateTimePicker1->Text + "' ";
	}
	sql += ";";

	this->oDs = this->oCad->getRows(sql, "Rsl");
	this->dataGridView1->DataSource = this->oDs;
	this->dataGridView1->DataMember = "Rsl";

	if (this->dataGridView1->Rows->Count == 1)
	{
		MessageBox::Show(L"Aucun résultat.", L"Message",
		MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
}


private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridView1->Refresh();
	this->oDs = this->oClient->afficherTout("Rsl");
	this->dataGridView1->DataSource = this->oDs;
	this->dataGridView1->DataMember = "Rsl";
}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridView1->Refresh();
	this->comboBox1->Items->Clear();

	this->oDs = this->oActualiserVilles->afficher("Rsl", this->textBox4->Text);
	this->dataGridView1->DataSource = this->oDs;
	this->dataGridView1->DataMember = "Rsl";
	//this->label1->Text = System::Convert::ToString(this->dataGridView1->Rows->Count);
	if (this->dataGridView1->Rows->Count == 1)
	{
		MessageBox::Show(L"Code postal incorrect !", L"Message",
			MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	else
	{
		int i;
		for (i = 0; i < (dataGridView1->Rows->Count) - 1; i++)
		{
			this->comboBox1->Items->Add(this->dataGridView1->Rows[i]->Cells[0]->Value->ToString());
		}
	}
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
