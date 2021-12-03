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
			   this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			   this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->button5 = (gcnew System::Windows::Forms::Button());
			   this->button4 = (gcnew System::Windows::Forms::Button());
			   this->button3 = (gcnew System::Windows::Forms::Button());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // dataGridView1
			   // 
			   this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			   this->dataGridView1->Location = System::Drawing::Point(160, 12);
			   this->dataGridView1->Name = L"dataGridView1";
			   this->dataGridView1->RowHeadersWidth = 51;
			   this->dataGridView1->RowTemplate->Height = 24;
			   this->dataGridView1->Size = System::Drawing::Size(444, 101);
			   this->dataGridView1->TabIndex = 37;
			   // 
			   // button1
			   // 
			   this->button1->Location = System::Drawing::Point(12, 12);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(81, 29);
			   this->button1->TabIndex = 38;
			   this->button1->Text = L"Retour";
			   this->button1->UseVisualStyleBackColor = true;
			   this->button1->Click += gcnew System::EventHandler(this, &MyFormDateEm::button1_Click);
			   // 
			   // dateTimePicker1
			   // 
			   this->dateTimePicker1->CustomFormat = L"yyyy-MM-dd";
			   this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			   this->dateTimePicker1->Location = System::Drawing::Point(49, 158);
			   this->dateTimePicker1->Margin = System::Windows::Forms::Padding(4);
			   this->dateTimePicker1->Name = L"dateTimePicker1";
			   this->dateTimePicker1->Size = System::Drawing::Size(152, 22);
			   this->dateTimePicker1->TabIndex = 39;
			   // 
			   // textBox1
			   // 
			   this->textBox1->Location = System::Drawing::Point(416, 167);
			   this->textBox1->Name = L"textBox1";
			   this->textBox1->Size = System::Drawing::Size(68, 22);
			   this->textBox1->TabIndex = 44;
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Location = System::Drawing::Point(413, 148);
			   this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(48, 16);
			   this->label1->TabIndex = 43;
			   this->label1->Text = L"Id date";
			   // 
			   // button5
			   // 
			   this->button5->Location = System::Drawing::Point(512, 189);
			   this->button5->Name = L"button5";
			   this->button5->Size = System::Drawing::Size(81, 29);
			   this->button5->TabIndex = 42;
			   this->button5->Text = L"Modifier";
			   this->button5->UseVisualStyleBackColor = true;
			   this->button5->Click += gcnew System::EventHandler(this, &MyFormDateEm::button5_Click);
			   // 
			   // button4
			   // 
			   this->button4->Location = System::Drawing::Point(512, 142);
			   this->button4->Name = L"button4";
			   this->button4->Size = System::Drawing::Size(81, 29);
			   this->button4->TabIndex = 41;
			   this->button4->Text = L"Supprimer";
			   this->button4->UseVisualStyleBackColor = true;
			   this->button4->Click += gcnew System::EventHandler(this, &MyFormDateEm::button4_Click);
			   // 
			   // button3
			   // 
			   this->button3->Location = System::Drawing::Point(220, 157);
			   this->button3->Name = L"button3";
			   this->button3->Size = System::Drawing::Size(81, 29);
			   this->button3->TabIndex = 40;
			   this->button3->Text = L"Ajouter";
			   this->button3->UseVisualStyleBackColor = true;
			   this->button3->Click += gcnew System::EventHandler(this, &MyFormDateEm::button3_Click);
			   // 
			   // MyFormDateEm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(627, 257);
			   this->Controls->Add(this->textBox1);
			   this->Controls->Add(this->label1);
			   this->Controls->Add(this->button5);
			   this->Controls->Add(this->button4);
			   this->Controls->Add(this->button3);
			   this->Controls->Add(this->dateTimePicker1);
			   this->Controls->Add(this->button1);
			   this->Controls->Add(this->dataGridView1);
			   this->Name = L"MyFormDateEm";
			   this->Text = L"MyFormDateEm";
			   this->Load += gcnew System::EventHandler(this, &MyFormDateEm::MyFormDateEm_Load);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
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
