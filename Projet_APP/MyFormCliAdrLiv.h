#pragma once

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
	/// Summary for MyFormCliAdrLiv
	/// </summary>
	public ref class MyFormCliAdrLiv : public System::Windows::Forms::Form
	{
	public:
		MyFormCliAdrLiv(void)
		{
			InitializeComponent();
		}
		MyFormCliAdrLiv(System::String^ idClient)
		{
			InitializeComponent();
			this->idClient = idClient;
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyFormCliAdrLiv()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2;
	protected:
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::DataGridView^ dataGridView1;

	private: System::String^ idClient;
	private: System::Data::DataSet^ oDs;
	private: NS_Comp_Actualiser_Villes::actualiserVilles^ oActualiserVilles;
	private: NS_Comp_Data::cad^ oCad;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(357, 221);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(120, 26);
			this->button2->TabIndex = 31;
			this->button2->Text = L"Actualiser villes";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyFormCliAdrLiv::button2_Click);
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
			this->groupBox1->Location = System::Drawing::Point(26, 133);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(611, 81);
			this->groupBox1->TabIndex = 30;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Adresse";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyFormCliAdrLiv::groupBox1_Enter);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(464, 42);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(112, 22);
			this->textBox4->TabIndex = 25;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(13, 43);
			this->textBox5->Margin = System::Windows::Forms::Padding(4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(49, 22);
			this->textBox5->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(9, 20);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(21, 16);
			this->label5->TabIndex = 21;
			this->label5->Text = L"N�";
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
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(72, 43);
			this->textBox6->Margin = System::Windows::Forms::Padding(4);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(243, 22);
			this->textBox6->TabIndex = 11;
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
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(324, 42);
			this->comboBox1->Margin = System::Windows::Forms::Padding(4);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(132, 24);
			this->comboBox1->TabIndex = 16;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(26, 23);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(81, 29);
			this->button1->TabIndex = 32;
			this->button1->Text = L"Retour";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyFormCliAdrLiv::button1_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(39, 280);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(81, 29);
			this->button3->TabIndex = 33;
			this->button3->Text = L"Ajouter";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyFormCliAdrLiv::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(331, 265);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(81, 29);
			this->button4->TabIndex = 34;
			this->button4->Text = L"Supprimer";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyFormCliAdrLiv::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(331, 312);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(81, 29);
			this->button5->TabIndex = 35;
			this->button5->Text = L"Modifier";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyFormCliAdrLiv::button5_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(177, 20);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(444, 101);
			this->dataGridView1->TabIndex = 36;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyFormCliAdrLiv::dataGridView1_CellContentClick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(232, 271);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 16);
			this->label1->TabIndex = 37;
			this->label1->Text = L"Id adresse";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(235, 290);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(68, 22);
			this->textBox1->TabIndex = 38;
			// 
			// MyFormCliAdrLiv
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(679, 382);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyFormCliAdrLiv";
			this->Text = L"MyFormCliAdrLiv";
			this->Load += gcnew System::EventHandler(this, &MyFormCliAdrLiv::MyFormCliAdrLiv_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyFormCliAdrLiv_Load(System::Object^ sender, System::EventArgs^ e) {
		this->oActualiserVilles = gcnew NS_Comp_Actualiser_Villes::actualiserVilles();
		this->oCad = gcnew NS_Comp_Data::cad();
		refreshTable();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridView1->Refresh();
	this->oDs = this->oCad->getRows("SELECT * FROM resider WHERE idClient  = " + this->idClient + " AND resider.idAdresse = " + this->textBox1->Text + ";", "fu");
	this->dataGridView1->DataSource = this->oDs;
	this->dataGridView1->DataMember = "fu";
	if (this->dataGridView1->Rows->Count == 1)
	{
		MessageBox::Show(L"Aucune adresse correspondante !", L"Message",
		MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	else {
		if (this->textBox5->Text != "" && this->textBox6->Text != "" && this->comboBox1->Text != "" && this->textBox4->Text != "")
		{
			System::String^ sql;

			sql += "IF NOT EXISTS((SELECT nomRue, numeroRue, ville, codePostal FROM adresse, ville WHERE adresse.idVille = ville.idVille AND nomRue = '" + this->textBox6->Text + "' AND numeroRue = '" + this->textBox5->Text + "' AND ville = '" + this->comboBox1->Text + "' AND codePostal = '" + this->textBox4->Text + "')) BEGIN INSERT INTO adresse(idVille, nomRue, numeroRue) SELECT idVille, '" + this->textBox6->Text + "', '" + this->textBox5->Text + "' FROM ville WHERE codePostal = '" + this->textBox4->Text + "' AND ville = '" + this->comboBox1->Text + "'; END ";
			sql += "UPDATE resider SET idAdresse = (SELECT idAdresse FROM adresse, ville WHERE adresse.numeroRue = '" + this->textBox5->Text + "' AND adresse.nomRue = '" + this->textBox6->Text + "' AND adresse.iDville = ville.idVille AND ville.ville = '" + this->comboBox1->Text + "' AND ville.codePostal = '" + this->textBox4->Text + "' ) WHERE idAdresse = " + this->textBox1->Text + " AND idClient = " + this->idClient + ";";
			this->oCad->actionRows(sql);
			MessageBox::Show(L"Adresse modifi�e !", L"Message",
			MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else
		{
			MessageBox::Show(L"Vous n'avez pas entr� toutes les informations.", L"Message",
			MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	refreshTable();
	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridView1->Refresh();
	this->oDs = this->oCad->getRows("SELECT * FROM resider WHERE idClient  = " + this->idClient + " AND resider.idAdresse = "+this->textBox1->Text+";", "fu");
	this->dataGridView1->DataSource = this->oDs;
	this->dataGridView1->DataMember = "fu";
	if (this->dataGridView1->Rows->Count == 1) 
	{
		MessageBox::Show(L"Aucune adresse correspondante !", L"Message",
		MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	else {
		this->oCad->actionRows("DELETE FROM resider WHERE idAdresse = " + this->textBox1->Text + " AND idClient = " + this->idClient + ";");
		MessageBox::Show(L"Adresse supprim�e !", L"Message",
		MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	refreshTable();
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ sql;

	if (this->textBox5->Text != "" && this->textBox6->Text != "" && this->comboBox1->Text != "" && this->textBox4->Text != "")
	{
		sql += "IF NOT EXISTS((SELECT nomRue, numeroRue, ville, codePostal FROM adresse, ville WHERE adresse.idVille = ville.idVille AND nomRue = '" + this->textBox6->Text + "' AND numeroRue = '" + this->textBox5->Text + "' AND ville = '" + this->comboBox1->Text + "' AND codePostal = '" + this->textBox4->Text + "')) BEGIN INSERT INTO adresse(idVille, nomRue, numeroRue) SELECT idVille, '" + this->textBox6->Text + "', '" + this->textBox5->Text + "' FROM ville WHERE codePostal = '" + this->textBox4->Text + "' AND ville = '" + this->comboBox1->Text + "'; END ";
		sql += "INSERT INTO[test2].[dbo].[resider](idClient, idAdresse, adresseFacturation) SELECT " + this->idClient + ", adresse.idAdresse, 'False' FROM adresse, ville WHERE adresse.numeroRue = '" + this->textBox5->Text + "' AND adresse.nomRue = '" + this->textBox6->Text + "' AND adresse.iDville = ville.idVille AND ville.ville = '" + this->comboBox1->Text + "' AND ville.codePostal = '" + this->textBox4->Text + "' ; ";
		this->oCad->actionRows(sql);
		MessageBox::Show(L"Adresse de livraison cr��e !", L"Message",
		MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	else
	{
		MessageBox::Show(L"Vous n'avez pas entr� toutes les informations.", L"Message",
		MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	
	refreshTable();
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
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
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: void MyFormCliAdrLiv::refreshTable(void)
	{
		this->dataGridView1->Refresh();
		this->oDs = this->oCad->getRows("SELECT adresse.idAdresse, adresse.numeroRue, adresse.nomRue, ville.ville, ville.codePostal FROM resider, adresse, ville WHERE resider.idClient = " + this->idClient + " AND resider.adresseFacturation = 'False' AND resider.idAdresse = adresse.idAdresse AND adresse.idVille = ville.idVille ;", "fu");
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "fu";
	}
};
}