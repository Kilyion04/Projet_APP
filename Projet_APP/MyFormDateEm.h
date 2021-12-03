#pragma once

#include "cad.h"

namespace ProjetAPP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyFormDateEm
	/// </summary>
	public ref class MyFormDateEm : public System::Windows::Forms::Form
	{
	public:
		MyFormDateEm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		MyFormDateEm(System::String^ idCommande)
		{
			InitializeComponent();
			this->idCommande = idCommande;
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyFormDateEm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::String^ idCommande;
	private: System::Data::DataSet^ oDs;
	private: NS_Comp_Data::cad^ oCad;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
		   /// <summary>
		/// Required designer variable.
		/// </summary>
		   System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Required method for Designer support - do not modify
		   /// the contents of this method with the code editor.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyFormDateEm::typeid));
			   this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			   this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->button5 = (gcnew System::Windows::Forms::Button());
			   this->button4 = (gcnew System::Windows::Forms::Button());
			   this->button3 = (gcnew System::Windows::Forms::Button());
			   this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // dataGridView1
			   // 
			   this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			   this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			   this->dataGridView1->Location = System::Drawing::Point(120, 10);
			   this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			   this->dataGridView1->Name = L"dataGridView1";
			   this->dataGridView1->RowHeadersWidth = 51;
			   this->dataGridView1->RowTemplate->Height = 24;
			   this->dataGridView1->Size = System::Drawing::Size(333, 82);
			   this->dataGridView1->TabIndex = 37;
			   // 
			   // button1
			   // 
			   this->button1->BackColor = System::Drawing::Color::Transparent;
			   this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->button1->Location = System::Drawing::Point(9, 10);
			   this->button1->Margin = System::Windows::Forms::Padding(2);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(61, 24);
			   this->button1->TabIndex = 38;
			   this->button1->Text = L"Retour";
			   this->button1->UseVisualStyleBackColor = false;
			   this->button1->Click += gcnew System::EventHandler(this, &MyFormDateEm::button1_Click);
			   // 
			   // dateTimePicker1
			   // 
			   this->dateTimePicker1->CustomFormat = L"yyyy-MM-dd";
			   this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			   this->dateTimePicker1->Location = System::Drawing::Point(37, 128);
			   this->dateTimePicker1->Name = L"dateTimePicker1";
			   this->dateTimePicker1->Size = System::Drawing::Size(115, 20);
			   this->dateTimePicker1->TabIndex = 39;
			   // 
			   // textBox1
			   // 
			   this->textBox1->Location = System::Drawing::Point(312, 136);
			   this->textBox1->Margin = System::Windows::Forms::Padding(2);
			   this->textBox1->Name = L"textBox1";
			   this->textBox1->Size = System::Drawing::Size(52, 20);
			   this->textBox1->TabIndex = 44;
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->BackColor = System::Drawing::Color::Transparent;
			   this->label1->Location = System::Drawing::Point(310, 120);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(40, 13);
			   this->label1->TabIndex = 43;
			   this->label1->Text = L"Id date";
			   // 
			   // button5
			   // 
			   this->button5->BackColor = System::Drawing::Color::Transparent;
			   this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->button5->Location = System::Drawing::Point(384, 154);
			   this->button5->Margin = System::Windows::Forms::Padding(2);
			   this->button5->Name = L"button5";
			   this->button5->Size = System::Drawing::Size(61, 24);
			   this->button5->TabIndex = 42;
			   this->button5->Text = L"Modifier";
			   this->button5->UseVisualStyleBackColor = false;
			   this->button5->Click += gcnew System::EventHandler(this, &MyFormDateEm::button5_Click);
			   // 
			   // button4
			   // 
			   this->button4->BackColor = System::Drawing::Color::Transparent;
			   this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->button4->Location = System::Drawing::Point(384, 115);
			   this->button4->Margin = System::Windows::Forms::Padding(2);
			   this->button4->Name = L"button4";
			   this->button4->Size = System::Drawing::Size(61, 24);
			   this->button4->TabIndex = 41;
			   this->button4->Text = L"Supprimer";
			   this->button4->UseVisualStyleBackColor = false;
			   this->button4->Click += gcnew System::EventHandler(this, &MyFormDateEm::button4_Click);
			   // 
			   // button3
			   // 
			   this->button3->BackColor = System::Drawing::Color::Transparent;
			   this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->button3->Location = System::Drawing::Point(165, 128);
			   this->button3->Margin = System::Windows::Forms::Padding(2);
			   this->button3->Name = L"button3";
			   this->button3->Size = System::Drawing::Size(61, 24);
			   this->button3->TabIndex = 40;
			   this->button3->Text = L"Ajouter";
			   this->button3->UseVisualStyleBackColor = false;
			   this->button3->Click += gcnew System::EventHandler(this, &MyFormDateEm::button3_Click);
			   // 
			   // pictureBox1
			   // 
			   this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			   this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			   this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			   this->pictureBox1->Location = System::Drawing::Point(9, 156);
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->Size = System::Drawing::Size(135, 41);
			   this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			   this->pictureBox1->TabIndex = 73;
			   this->pictureBox1->TabStop = false;
			   // 
			   // MyFormDateEm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			   this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->ClientSize = System::Drawing::Size(470, 209);
			   this->Controls->Add(this->pictureBox1);
			   this->Controls->Add(this->textBox1);
			   this->Controls->Add(this->label1);
			   this->Controls->Add(this->button5);
			   this->Controls->Add(this->button4);
			   this->Controls->Add(this->button3);
			   this->Controls->Add(this->dateTimePicker1);
			   this->Controls->Add(this->button1);
			   this->Controls->Add(this->dataGridView1);
			   this->DoubleBuffered = true;
			   this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			   this->Margin = System::Windows::Forms::Padding(2);
			   this->Name = L"MyFormDateEm";
			   this->Text = L"MyFormDateEm";
			   this->Load += gcnew System::EventHandler(this, &MyFormDateEm::MyFormDateEm_Load);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
	private: System::Void MyFormDateEm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->oCad = gcnew NS_Comp_Data::cad();
		refreshTable();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}


	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->textBox1->Text == "")
		{
			MessageBox::Show(L"ID manquant.", L"Message",
			MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else {
			this->dataGridView1->Refresh();
			this->oDs = this->oCad->getRows("SELECT * FROM commande WHERE idCommande  = " + this->idCommande + " AND dateEmission = " + this->textBox1->Text + ";", "fu");
			this->dataGridView1->DataSource = this->oDs;
			this->dataGridView1->DataMember = "fu";
			if (this->dataGridView1->Rows->Count == 1)
			{
				MessageBox::Show(L"Aucune date à modifier !", L"Message",
					MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			else {
				System::String^ sql;
				sql += "IF('" + this->dateTimePicker1->Text + "' NOT IN(SELECT date FROM dates)) BEGIN INSERT INTO dates(date) VALUES('" + this->dateTimePicker1->Text + "'); END ";
				sql += "UPDATE commande SET dateEmission = (SELECT idDate FROM dates WHERE date = '" + this->dateTimePicker1->Text + "') WHERE idCommande = " + this->idCommande + ";";
				this->oCad->actionRows(sql);
				MessageBox::Show(L"Date modifiée !", L"Message",
				MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			refreshTable();
		}
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->textBox1->Text == "")
		{
			MessageBox::Show(L"ID manquant.", L"Message",
			MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else {
			this->dataGridView1->Refresh();
			this->oDs = this->oCad->getRows("SELECT * FROM commande WHERE idCommande  = " + this->idCommande + " AND dateEmission = " + this->textBox1->Text + "; ", "fu");
			this->dataGridView1->DataSource = this->oDs;
			this->dataGridView1->DataMember = "fu";
			if (this->dataGridView1->Rows->Count == 1)
			{
				MessageBox::Show(L"Aucune date à supprimer !", L"Message",
				MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			else {
				System::String^ sql;

				sql += "UPDATE commande SET dateEmission = NULL WHERE idCommande = " + this->idCommande + ";";
				this->oCad->actionRows(sql);
				MessageBox::Show(L"Date suprimmée !", L"Message",
				MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			refreshTable();
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		System::String^ sql;

		this->dataGridView1->Refresh();
		this->oDs = this->oCad->getRows("SELECT dateEmission FROM commande WHERE idCommande  = " + this->idCommande + ";", "fu");
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "fu";
		if (this->dataGridView1->Rows[0]->Cells[1]->Value->ToString() != "") {
			MessageBox::Show(L"Une date est déjà renseignée !", L"Message",
			MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else {
			sql += "IF('" + this->dateTimePicker1->Text + "' NOT IN(SELECT date FROM dates)) BEGIN INSERT INTO dates(date) VALUES('" + this->dateTimePicker1->Text + "'); END ";
			sql += "UPDATE commande SET dateEmission = (SELECT idDate FROM dates WHERE date = '" + this->dateTimePicker1->Text + "') WHERE idCommande = " + this->idCommande + " ;";
			this->oCad->actionRows(sql);
			MessageBox::Show(L"Date d'émission ajoutée !", L"Message",
				MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}

		refreshTable();
	}
	private: void MyFormDateEm::refreshTable(void)
	{
		this->dataGridView1->Refresh();
		this->oDs = this->oCad->getRows("SELECT idCommande, dateEmission FROM commande WHERE idCommande = "+this->idCommande+" ; ", "fu");
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "fu";
	}


};
}
