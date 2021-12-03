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
	/// Summary for MyFormCliAdrFac
	/// </summary>
	public ref class MyFormCliAdrFac : public System::Windows::Forms::Form
	{
	public:
		MyFormCliAdrFac(void)
		{
			InitializeComponent();
		}
		MyFormCliAdrFac(System::String^ idClient)
		{
			InitializeComponent();
			this->idClient = idClient;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyFormCliAdrFac()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ comboBox1;

	private: System::String^ idClient;
	private: System::Data::DataSet^ oDs;
	private: NS_Comp_Actualiser_Villes::actualiserVilles^ oActualiserVilles;
	private: NS_Comp_Data::cad^ oCad;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::NumericUpDown^ numericUpDown5;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyFormCliAdrFac::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(11, 39);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(889, 394);
			this->dataGridView1->TabIndex = 43;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyFormCliAdrFac::dataGridView1_CellContentClick);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Location = System::Drawing::Point(14, 499);
			this->button5->Margin = System::Windows::Forms::Padding(2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(61, 24);
			this->button5->TabIndex = 42;
			this->button5->Text = L"Modifier";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyFormCliAdrFac::button5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Location = System::Drawing::Point(79, 499);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(61, 24);
			this->button4->TabIndex = 41;
			this->button4->Text = L"Supprimer";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyFormCliAdrFac::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Location = System::Drawing::Point(10, 53);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(61, 24);
			this->button3->TabIndex = 40;
			this->button3->Text = L"Ajouter";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyFormCliAdrFac::button3_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Location = System::Drawing::Point(11, 11);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(61, 24);
			this->button1->TabIndex = 39;
			this->button1->Text = L"Retour";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyFormCliAdrFac::button1_Click);
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Location = System::Drawing::Point(243, 60);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(90, 21);
			this->button2->TabIndex = 38;
			this->button2->Text = L"Actualiser villes";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyFormCliAdrFac::button2_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Location = System::Drawing::Point(231, 454);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(458, 86);
			this->groupBox1->TabIndex = 37;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Adresse";
			// 
			// textBox4
			// 
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Location = System::Drawing::Point(348, 34);
			this->textBox4->Margin = System::Windows::Forms::Padding(2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(85, 13);
			this->textBox4->TabIndex = 25;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::White;
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Location = System::Drawing::Point(10, 35);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(38, 13);
			this->textBox5->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(7, 16);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(19, 13);
			this->label5->TabIndex = 21;
			this->label5->Text = L"N°";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(346, 16);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(63, 13);
			this->label8->TabIndex = 24;
			this->label8->Text = L"Code postal";
			this->label8->Click += gcnew System::EventHandler(this, &MyFormCliAdrFac::label8_Click);
			// 
			// textBox6
			// 
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Location = System::Drawing::Point(54, 35);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(183, 13);
			this->textBox6->TabIndex = 11;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(240, 16);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(26, 13);
			this->label7->TabIndex = 23;
			this->label7->Text = L"Ville";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(51, 16);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(67, 13);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Nom de voie";
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::White;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(243, 34);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(100, 21);
			this->comboBox1->TabIndex = 16;
			this->comboBox1->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MyFormCliAdrFac::comboBox1_KeyUp);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(11, 454);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 13);
			this->label1->TabIndex = 44;
			this->label1->Text = L"ID adresse";
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->numericUpDown5->Location = System::Drawing::Point(14, 472);
			this->numericUpDown5->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDown5->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(72, 16);
			this->numericUpDown5->TabIndex = 59;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(720, 472);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(180, 68);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 60;
			this->pictureBox1->TabStop = false;
			// 
			// MyFormCliAdrFac
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(912, 552);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->numericUpDown5);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyFormCliAdrFac";
			this->Text = L"MyFormCliAdrFac";
			this->Load += gcnew System::EventHandler(this, &MyFormCliAdrFac::MyFormCliAdrFac_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyFormCliAdrFac_Load(System::Object^ sender, System::EventArgs^ e) {
		this->oActualiserVilles = gcnew NS_Comp_Actualiser_Villes::actualiserVilles();
		this->oCad = gcnew NS_Comp_Data::cad();
		refreshTable();
		this->numericUpDown5->Text = "";
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->numericUpDown5->Text == "")
	{
		MessageBox::Show(L"ID manquant.", L"Message",
		MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	else {
		this->dataGridView1->Refresh();
		this->oDs = this->oCad->getRows("SELECT * FROM resider WHERE idClient  = " + this->idClient + " AND resider.idAdresse = " + this->numericUpDown5->Text + ";", "fu");
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
				sql += "UPDATE resider SET idAdresse = (SELECT idAdresse FROM adresse, ville WHERE adresse.numeroRue = '" + this->textBox5->Text + "' AND adresse.nomRue = '" + this->textBox6->Text + "' AND adresse.iDville = ville.idVille AND ville.ville = '" + this->comboBox1->Text + "' AND ville.codePostal = '" + this->textBox4->Text + "' ) WHERE idAdresse = " + this->numericUpDown5->Text + " AND idClient = " + this->idClient + ";";
				this->oCad->actionRows(sql);
				MessageBox::Show(L"Adresse modifiée !", L"Message",
				MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			else
			{
				MessageBox::Show(L"Vous n'avez pas entré toutes les informations.", L"Message",
				MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
		}
		refreshTable();
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->numericUpDown5->Text == "")
	{
		MessageBox::Show(L"ID manquant.", L"Message",
			MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	else {
		this->dataGridView1->Refresh();
		this->oDs = this->oCad->getRows("SELECT * FROM resider WHERE idClient  = " + this->idClient + " AND resider.idAdresse = " + this->numericUpDown5->Text + ";", "fu");
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "fu";
		if (this->dataGridView1->Rows->Count == 1)
		{
			MessageBox::Show(L"Aucune adresse correspondante !", L"Message",
				MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else {
			this->oCad->actionRows("DELETE FROM resider WHERE idAdresse = " + this->numericUpDown5->Text + " AND idClient = " + this->idClient + ";");
			MessageBox::Show(L"Adresse supprimée !", L"Message",
				MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		refreshTable();
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ sql;

	this->dataGridView1->Refresh();
	this->oDs = this->oCad->getRows("SELECT * FROM resider, adresse, ville WHERE adresseFacturation = 'True' AND idClient  = " + this->idClient + " AND resider.idAdresse = adresse.idAdresse AND adresse.numeroRue = '" + this->textBox5->Text + "' AND adresse.nomRue = '" + this->textBox6->Text + "' AND adresse.iDville = ville.idVille AND ville.ville = '" + this->comboBox1->Text + "' AND ville.codePostal = '" + this->textBox4->Text + "' ;", "fu");
	this->dataGridView1->DataSource = this->oDs;
	this->dataGridView1->DataMember = "fu";
	if (this->dataGridView1->Rows->Count == 2)
	{
		MessageBox::Show(L"Adresse déjà existante !", L"Message",
		MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	else {
		if (this->textBox5->Text != "" && this->textBox6->Text != "" && this->comboBox1->Text != "" && this->textBox4->Text != "")
		{
			sql += "IF NOT EXISTS((SELECT nomRue, numeroRue, ville, codePostal FROM adresse, ville WHERE adresse.idVille = ville.idVille AND nomRue = '" + this->textBox6->Text + "' AND numeroRue = '" + this->textBox5->Text + "' AND ville = '" + this->comboBox1->Text + "' AND codePostal = '" + this->textBox4->Text + "')) BEGIN INSERT INTO adresse(idVille, nomRue, numeroRue) SELECT idVille, '" + this->textBox6->Text + "', '" + this->textBox5->Text + "' FROM ville WHERE codePostal = '" + this->textBox4->Text + "' AND ville = '" + this->comboBox1->Text + "'; END ";
			sql += "INSERT INTO[test2].[dbo].[resider](idClient, idAdresse, adresseFacturation) SELECT " + this->idClient + ", adresse.idAdresse, 'True' FROM adresse, ville WHERE adresse.numeroRue = '" + this->textBox5->Text + "' AND adresse.nomRue = '" + this->textBox6->Text + "' AND adresse.iDville = ville.idVille AND ville.ville = '" + this->comboBox1->Text + "' AND ville.codePostal = '" + this->textBox4->Text + "' ; ";
			this->oCad->actionRows(sql);
			MessageBox::Show(L"Adresse de facturation créée !", L"Message",
			MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else
		{
			MessageBox::Show(L"Vous n'avez pas entré toutes les informations.", L"Message",
			MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}

		refreshTable();
	}
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
		refreshTable();
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
	   private: void MyFormCliAdrFac::refreshTable(void)
	   {
		   this->dataGridView1->Refresh();
		   this->oDs = this->oCad->getRows("SELECT adresse.idAdresse, adresse.numeroRue, adresse.nomRue, ville.ville, ville.codePostal FROM resider, adresse, ville WHERE resider.idClient = " + this->idClient + " AND resider.adresseFacturation = 'True' AND resider.idAdresse = adresse.idAdresse AND adresse.idVille = ville.idVille ;", "fu");
		   this->dataGridView1->DataSource = this->oDs;
		   this->dataGridView1->DataMember = "fu";
	   }
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox1_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	this->comboBox1->Text = "";
}
};
}
