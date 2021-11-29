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
	private: System::Windows::Forms::TextBox^ textBox1;
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
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox7;

	private: NS_Comp_Personnel::personnel^ oPersonnel;
	private: System::Data::DataSet^ oDs;
	private: NS_Comp_Actualiser_Villes::actualiserVilles^ oActualiserVilles;
	private: NS_Comp_Data::cad^ oCad;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyFormPerso::typeid));
			this->btnReturn = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->btnAffPerso = (gcnew System::Windows::Forms::Button());
			this->btnCrePerso = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
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
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
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
			this->btnReturn->Click += gcnew System::EventHandler(this, &MyFormPerso::return_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(735, 16);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(224, 28);
			this->button1->TabIndex = 41;
			this->button1->Text = L"Actualiser la Base de Données";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyFormPerso::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(4, 76);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(20, 16);
			this->label1->TabIndex = 40;
			this->label1->Text = L"ID";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(8, 96);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(132, 22);
			this->textBox1->TabIndex = 39;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyFormPerso::textBox1_TextChanged);
			// 
			// btnAffPerso
			// 
			this->btnAffPerso->Location = System::Drawing::Point(8, 43);
			this->btnAffPerso->Margin = System::Windows::Forms::Padding(4);
			this->btnAffPerso->Name = L"btnAffPerso";
			this->btnAffPerso->Size = System::Drawing::Size(100, 28);
			this->btnAffPerso->TabIndex = 38;
			this->btnAffPerso->Text = L"Afficher";
			this->btnAffPerso->UseVisualStyleBackColor = true;
			this->btnAffPerso->Click += gcnew System::EventHandler(this, &MyFormPerso::AffPerso_Click);
			// 
			// btnCrePerso
			// 
			this->btnCrePerso->Location = System::Drawing::Point(375, 95);
			this->btnCrePerso->Margin = System::Windows::Forms::Padding(4);
			this->btnCrePerso->Name = L"btnCrePerso";
			this->btnCrePerso->Size = System::Drawing::Size(100, 28);
			this->btnCrePerso->TabIndex = 37;
			this->btnCrePerso->Text = L"Créer";
			this->btnCrePerso->UseVisualStyleBackColor = true;
			this->btnCrePerso->Click += gcnew System::EventHandler(this, &MyFormPerso::CrePerso_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(17, 52);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(337, 439);
			this->dataGridView1->TabIndex = 36;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyFormPerso::dataGridView1_CellContentClick);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->btnAffPerso);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(806, 66);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(153, 132);
			this->groupBox1->TabIndex = 50;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Afficher un membre du personnel";
			// 
			// btnRecPerso
			// 
			this->btnRecPerso->Location = System::Drawing::Point(375, 52);
			this->btnRecPerso->Margin = System::Windows::Forms::Padding(4);
			this->btnRecPerso->Name = L"btnRecPerso";
			this->btnRecPerso->Size = System::Drawing::Size(100, 28);
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
			this->groupBox2->Location = System::Drawing::Point(362, 317);
			this->groupBox2->Margin = System::Windows::Forms::Padding(4);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(4);
			this->groupBox2->Size = System::Drawing::Size(611, 81);
			this->groupBox2->TabIndex = 52;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Adresse";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(464, 44);
			this->textBox7->Margin = System::Windows::Forms::Padding(4);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(77, 22);
			this->textBox7->TabIndex = 46;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &MyFormPerso::textBox7_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(13, 43);
			this->textBox5->Margin = System::Windows::Forms::Padding(4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(49, 22);
			this->textBox5->TabIndex = 43;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyFormPerso::textBox5_TextChanged);
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
			this->textBox6->TabIndex = 44;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyFormPerso::textBox6_TextChanged);
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
			this->comboBox1->TabIndex = 45;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyFormPerso::comboBox1_SelectedIndexChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(371, 411);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(36, 16);
			this->label9->TabIndex = 51;
			this->label9->Text = L"Date";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(682, 264);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(65, 16);
			this->label4->TabIndex = 50;
			this->label4->Text = L"Supérieur";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(371, 264);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(54, 16);
			this->label3->TabIndex = 49;
			this->label3->Text = L"Prénom";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(371, 204);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(36, 16);
			this->label2->TabIndex = 47;
			this->label2->Text = L"Nom";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"yyyy-MM-dd";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(375, 430);
			this->dateTimePicker1->Margin = System::Windows::Forms::Padding(4);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(139, 22);
			this->dateTimePicker1->TabIndex = 46;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &MyFormPerso::dateTimePicker1_ValueChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(375, 284);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(243, 22);
			this->textBox3->TabIndex = 41;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyFormPerso::textBox3_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(375, 224);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(243, 22);
			this->textBox2->TabIndex = 40;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyFormPerso::textBox2_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(686, 284);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(49, 22);
			this->textBox4->TabIndex = 42;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyFormPerso::textBox4_TextChanged);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(686, 405);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(117, 41);
			this->button2->TabIndex = 54;
			this->button2->Text = L"Actualiser villes";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyFormPerso::button2_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(523, 432);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(18, 17);
			this->checkBox1->TabIndex = 55;
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// MyFormPerso
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(997, 775);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox4);
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
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyFormPerso";
			this->Text = L"Gestion du Personnel";
			this->Load += gcnew System::EventHandler(this, &MyFormPerso::MyFormPerso_Load);
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
	private: System::Void MyFormPerso_Load(System::Object^ sender, System::EventArgs^ e) {
		this->oPersonnel = gcnew NS_Comp_Personnel::personnel();
		this->oActualiserVilles = gcnew NS_Comp_Actualiser_Villes::actualiserVilles();
	}
	private: System::Void CrePerso_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->textBox2->Text == "" || this->textBox3->Text == "" || this->textBox4->Text == "" || this->textBox5->Text == "" || this->textBox6->Text == "" || this->comboBox1->Text == "")
		{
			MessageBox::Show(L"Un ou plusieurs champs ne sont pas remplis !", L"Message",
			MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else {
			this->oPersonnel->creer(this->textBox2->Text, this->textBox3->Text, System::Convert::ToInt64(this->textBox4->Text), this->textBox5->Text, this->textBox6->Text, this->comboBox1->Text, this->textBox7->Text, this->dateTimePicker1->Text);
			MessageBox::Show(L"Personnel créé !", L"Message",
			MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		//this->label1->Text = this->dateTimePicker1->Text;
	}
	private: System::Void AffPerso_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->textBox1->Text == "")
		{
			MessageBox::Show(L"ID manquant.", L"Message",
			MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else {
			this->dataGridView1->Refresh();
			this->oDs = this->oPersonnel->afficherUn("fu", System::Convert::ToInt64(this->textBox1->Text));
			this->dataGridView1->DataSource = this->oDs;
			this->dataGridView1->DataMember = "fu";
			if (this->dataGridView1->Rows->Count == 1)
			{
				MessageBox::Show(L"ID inconnu.", L"Message",
				MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			else {
				this->Hide();
				MyFormPersoSelec^ Form = gcnew MyFormPersoSelec(this->textBox1->Text);
				Form->ShowDialog();
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
	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
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
		this->dataGridView1->Refresh();
		this->oDs = this->oPersonnel->afficherTout("Rsl");
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
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnRecPerso_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oCad = gcnew NS_Comp_Data::cad();
	
		this->dataGridView1->Refresh();
	
		System::String^ sql;
	
		sql = "SELECT * FROM personnel, adresse, ville, dates WHERE adresse.idVille = ville.idVille AND adresse.idAdresse = personnel.adressePersonnel AND personnel.dateEmbauche = idDate ";
		if (this->textBox2->Text != "") {sql += "AND nomPersonnel = '" + this->textBox2->Text + "' ";}
		if (this->textBox3->Text != "") {sql += "AND prenomPersonnel = '" + this->textBox3->Text + "' ";}
		if (this->textBox4->Text != "") {sql += "AND supHierarchique = '" + this->textBox4->Text + "' ";}
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
};
}
