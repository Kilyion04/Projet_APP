#pragma once

#include "MyFormPersoSelec.h"
#include "personnel.h"
#include "actualiserVilles.h"
#include "cad.h"

namespace ProjetAPP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	public ref class MyFormPerso : public System::Windows::Forms::Form
	{
	public:
		MyFormPerso(void)
		{
			InitializeComponent();
		}

	protected:
		~MyFormPerso()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnReturn;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Button^ btnAffPerso;
	private: System::Windows::Forms::Button^ btnCrePerso;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ btnRecPerso;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::TextBox^ textBox7;

	private: NS_Comp_Personnel::personnel^ oPersonnel;
	private: System::Data::DataSet^ oDs;
	private: NS_Comp_Actualiser_Villes::actualiserVilles^ oActualiserVilles;
	private: NS_Comp_Data::cad^ oCad;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyFormPerso::typeid));
			this->btnReturn = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnAffPerso = (gcnew System::Windows::Forms::Button());
			this->btnCrePerso = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->btnRecPerso = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			this->SuspendLayout();
			// 
			// btnReturn
			// 
			this->btnReturn->Location = System::Drawing::Point(13, 13);
			this->btnReturn->Name = L"btnReturn";
			this->btnReturn->Size = System::Drawing::Size(75, 23);
			this->btnReturn->TabIndex = 0;
			this->btnReturn->Text = L"Retour";
			this->btnReturn->UseVisualStyleBackColor = true;
			this->btnReturn->Click += gcnew System::EventHandler(this, &MyFormPerso::return_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(10, 431);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(126, 23);
			this->button1->TabIndex = 41;
			this->button1->Text = L"Afficher personnel";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyFormPerso::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 62);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(18, 13);
			this->label1->TabIndex = 40;
			this->label1->Text = L"ID";
			// 
			// btnAffPerso
			// 
			this->btnAffPerso->Location = System::Drawing::Point(6, 35);
			this->btnAffPerso->Name = L"btnAffPerso";
			this->btnAffPerso->Size = System::Drawing::Size(75, 23);
			this->btnAffPerso->TabIndex = 38;
			this->btnAffPerso->Text = L"Afficher";
			this->btnAffPerso->UseVisualStyleBackColor = true;
			this->btnAffPerso->Click += gcnew System::EventHandler(this, &MyFormPerso::AffPerso_Click);
			// 
			// btnCrePerso
			// 
			this->btnCrePerso->Location = System::Drawing::Point(310, 13);
			this->btnCrePerso->Name = L"btnCrePerso";
			this->btnCrePerso->Size = System::Drawing::Size(75, 23);
			this->btnCrePerso->TabIndex = 37;
			this->btnCrePerso->Text = L"Créer";
			this->btnCrePerso->UseVisualStyleBackColor = true;
			this->btnCrePerso->Click += gcnew System::EventHandler(this, &MyFormPerso::CrePerso_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(10, 202);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(700, 223);
			this->dataGridView1->TabIndex = 36;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyFormPerso::dataGridView1_CellContentClick);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->numericUpDown1);
			this->groupBox1->Controls->Add(this->btnAffPerso);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(606, 28);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(115, 107);
			this->groupBox1->TabIndex = 50;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Afficher un membre du personnel";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(5, 77);
			this->numericUpDown1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(90, 20);
			this->numericUpDown1->TabIndex = 58;
			// 
			// btnRecPerso
			// 
			this->btnRecPerso->Location = System::Drawing::Point(219, 13);
			this->btnRecPerso->Name = L"btnRecPerso";
			this->btnRecPerso->Size = System::Drawing::Size(75, 23);
			this->btnRecPerso->TabIndex = 36;
			this->btnRecPerso->Text = L"Rechercher";
			this->btnRecPerso->UseVisualStyleBackColor = true;
			this->btnRecPerso->Click += gcnew System::EventHandler(this, &MyFormPerso::btnRecPerso_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBox7);
			this->groupBox2->Controls->Add(this->textBox5);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->textBox6);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->comboBox1);
			this->groupBox2->Location = System::Drawing::Point(10, 115);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(458, 66);
			this->groupBox2->TabIndex = 52;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Adresse";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(348, 36);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(59, 20);
			this->textBox7->TabIndex = 46;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &MyFormPerso::textBox7_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(10, 35);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(38, 20);
			this->textBox5->TabIndex = 43;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyFormPerso::textBox5_TextChanged);
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
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(54, 35);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(183, 20);
			this->textBox6->TabIndex = 44;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyFormPerso::textBox6_TextChanged);
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
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(243, 34);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(100, 21);
			this->comboBox1->TabIndex = 45;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyFormPerso::comboBox1_SelectedIndexChanged);
			this->comboBox1->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MyFormPerso::comboBox1_KeyUp);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(256, 86);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(91, 13);
			this->label9->TabIndex = 51;
			this->label9->Text = L"Date d\'embauche";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(294, 56);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(52, 13);
			this->label4->TabIndex = 50;
			this->label4->Text = L"Supérieur";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(10, 89);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(43, 13);
			this->label3->TabIndex = 49;
			this->label3->Text = L"Prénom";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(20, 54);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 13);
			this->label2->TabIndex = 47;
			this->label2->Text = L"Nom";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"yyyy-MM-dd";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(349, 82);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(105, 20);
			this->dateTimePicker1->TabIndex = 46;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &MyFormPerso::dateTimePicker1_ValueChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(52, 86);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(183, 20);
			this->textBox3->TabIndex = 41;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyFormPerso::textBox3_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(52, 54);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(183, 20);
			this->textBox2->TabIndex = 40;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyFormPerso::textBox2_TextChanged);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(473, 136);
			this->button2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(88, 33);
			this->button2->TabIndex = 54;
			this->button2->Text = L"Actualiser villes";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyFormPerso::button2_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(458, 85);
			this->checkBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(15, 14);
			this->checkBox1->TabIndex = 55;
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(141, 436);
			this->checkBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(55, 17);
			this->checkBox2->TabIndex = 56;
			this->checkBox2->Text = L"Inactif";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(348, 54);
			this->numericUpDown3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(90, 20);
			this->numericUpDown3->TabIndex = 57;
			// 
			// MyFormPerso
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(748, 470);
			this->Controls->Add(this->numericUpDown3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->btnRecPerso);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btnCrePerso);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->btnReturn);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyFormPerso";
			this->Text = L"Gestion du Personnel";
			this->Load += gcnew System::EventHandler(this, &MyFormPerso::MyFormPerso_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void return_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: void clearPerso() {
		this->textBox2->Text = "";
		this->textBox3->Text = "";
		this->textBox5->Text = "";
		this->textBox6->Text = "";
		this->textBox7->Text = "";
		this->numericUpDown1->Text = "";
		this->numericUpDown3->Text = "";
		this->comboBox1->Text = "";
		
	}
	private: System::Void MyFormPerso_Load(System::Object^ sender, System::EventArgs^ e) {
		this->oPersonnel = gcnew NS_Comp_Personnel::personnel();
		this->oActualiserVilles = gcnew NS_Comp_Actualiser_Villes::actualiserVilles();
		refreshPersonnel();
		clearPerso();
	}
	private: System::Void CrePerso_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->textBox2->Text == "" || this->textBox3->Text == "" || this->numericUpDown3->Text == "" || this->textBox5->Text == "" || this->textBox6->Text == "" || this->comboBox1->Text == "")
		{
			MessageBox::Show(L"Un ou plusieurs champs ne sont pas remplis !", L"Message",
			MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else {
			this->oPersonnel->creer(this->textBox2->Text, this->textBox3->Text, System::Convert::ToInt64(this->numericUpDown3->Text), this->textBox5->Text, this->textBox6->Text, this->comboBox1->Text, this->textBox7->Text, this->dateTimePicker1->Text);
			MessageBox::Show(L"Personnel créé !", L"Message",
			MessageBoxButtons::OK, MessageBoxIcon::Warning);
			refreshPersonnel();
			clearPerso();
		}
		//this->label1->Text = this->dateTimePicker1->Text;
	}
	private: System::Void AffPerso_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->numericUpDown1->Text == "")
		{
			MessageBox::Show(L"ID manquant.", L"Message",
			MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else {
			this->dataGridView1->Refresh();
			this->oDs = this->oPersonnel->afficherUn("fu", System::Convert::ToInt64(this->numericUpDown1->Text));
			this->dataGridView1->DataSource = this->oDs;
			this->dataGridView1->DataMember = "fu";
			if (this->dataGridView1->Rows->Count == 1)
			{
				MessageBox::Show(L"ID inconnu.", L"Message",
				MessageBoxButtons::OK, MessageBoxIcon::Warning);
				refreshPersonnel();
			}
			else {
				this->Hide();
				MyFormPersoSelec^ Forma = gcnew MyFormPersoSelec(this->numericUpDown1->Text);
				Forma->ShowDialog();
				refreshPersonnel();
				this->Show();
			}
		}
	}
	private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void numericUpDown3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		refreshPersonnel();
	}
	private: void refreshPersonnel() {
		this->dataGridView1->Refresh();
		this->oDs = this->oPersonnel->afficherTout("Rsl", this->checkBox2->Checked);
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "Rsl";
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dataGridView1->Refresh();
		this->comboBox1->Items->Clear();
	
		this->oDs = this->oActualiserVilles->afficher("Rsl", this->textBox7->Text);
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "Rsl";
		//this->label1->Text = System::Convert::ToString(this->dataGridView1->Rows->Count);
		if (this->dataGridView1->Rows->Count == 1)
		{
			MessageBox::Show(L"Code postal incorrect !", L"Message",
			MessageBoxButtons::OK, MessageBoxIcon::Warning);
			refreshPersonnel();
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
	private: System::Void numericUpDown1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnRecPerso_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oCad = gcnew NS_Comp_Data::cad();
	
		this->dataGridView1->Refresh();
	
		System::String^ sql;
	
		sql = "SELECT * FROM personnel, adresse, ville, dates WHERE adresse.idVille = ville.idVille AND adresse.idAdresse = personnel.adressePersonnel AND personnel.dateEmbauche = idDate ";
		if (this->textBox2->Text != "") {sql += "AND nomPersonnel = '" + this->textBox2->Text + "' ";}
		if (this->textBox3->Text != "") {sql += "AND prenomPersonnel = '" + this->textBox3->Text + "' ";}
		if (this->numericUpDown3->Text != "") {sql += "AND supHierarchique = '" + this->numericUpDown3->Text + "' ";}
		if (this->textBox5->Text != "") {sql += "AND adresse.numeroRue = '" + this->textBox5->Text + "' ";}
		if (this->textBox6->Text != "") {sql += "AND adresse.nomRue = '" + this->textBox6->Text + "' ";}
		if (this->comboBox1->Text != "") {sql += "AND ville.ville = '" + this->comboBox1->Text + "' ";}
		if (this->textBox7->Text != "") {sql += "AND ville.codePostal = '" + this->textBox7->Text + "' ";}
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


private: System::Void comboBox1_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	this->comboBox1->Text = "";
}
};
}
