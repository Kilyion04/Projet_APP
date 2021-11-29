#pragma once

#include "actualiserVilles.h"
#include "cad.h"
#include "personnel.h"

namespace ProjetAPP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyFormPersoSelecMod
	/// </summary>
	public ref class MyFormPersoSelecMod : public System::Windows::Forms::Form
	{
	public:
		MyFormPersoSelecMod(void)
		{
			InitializeComponent();
		}

		MyFormPersoSelecMod(System::String^ idPerso)
		{
			InitializeComponent();
			this->idPerso = idPerso;
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyFormPersoSelecMod()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnModCli;
	private: System::Windows::Forms::Button^ btnReturn;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ textBox7;
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

	private: NS_Comp_Actualiser_Villes::actualiserVilles^ oActualiserVilles;
	private: NS_Comp_Data::cad^ oCad;
	private: System::String^ idPerso;
	private: System::Data::DataSet^ oDs;
	private: NS_Comp_Personnel::personnel^ oPersonnel;

	private: System::Windows::Forms::DataGridView^ dataGridView1;
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
			this->btnModCli = (gcnew System::Windows::Forms::Button());
			this->btnReturn = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnModCli
			// 
			this->btnModCli->Location = System::Drawing::Point(16, 71);
			this->btnModCli->Margin = System::Windows::Forms::Padding(4);
			this->btnModCli->Name = L"btnModCli";
			this->btnModCli->Size = System::Drawing::Size(100, 28);
			this->btnModCli->TabIndex = 41;
			this->btnModCli->Text = L"Modifier";
			this->btnModCli->UseVisualStyleBackColor = true;
			this->btnModCli->Click += gcnew System::EventHandler(this, &MyFormPersoSelecMod::ModCli_Click);
			// 
			// btnReturn
			// 
			this->btnReturn->Location = System::Drawing::Point(16, 15);
			this->btnReturn->Margin = System::Windows::Forms::Padding(4);
			this->btnReturn->Name = L"btnReturn";
			this->btnReturn->Size = System::Drawing::Size(100, 28);
			this->btnReturn->TabIndex = 47;
			this->btnReturn->Text = L"retour";
			this->btnReturn->UseVisualStyleBackColor = true;
			this->btnReturn->Click += gcnew System::EventHandler(this, &MyFormPersoSelecMod::Return_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(327, 340);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(117, 41);
			this->button2->TabIndex = 70;
			this->button2->Text = L"Actualiser villes";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyFormPersoSelecMod::button2_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(327, 219);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(49, 22);
			this->textBox4->TabIndex = 62;
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
			this->groupBox2->Location = System::Drawing::Point(3, 252);
			this->groupBox2->Margin = System::Windows::Forms::Padding(4);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(4);
			this->groupBox2->Size = System::Drawing::Size(611, 81);
			this->groupBox2->TabIndex = 69;
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
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(13, 43);
			this->textBox5->Margin = System::Windows::Forms::Padding(4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(49, 22);
			this->textBox5->TabIndex = 43;
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
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(12, 346);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(36, 16);
			this->label9->TabIndex = 68;
			this->label9->Text = L"Date";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(323, 199);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(65, 16);
			this->label4->TabIndex = 66;
			this->label4->Text = L"Supérieur";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 199);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(54, 16);
			this->label3->TabIndex = 65;
			this->label3->Text = L"Prénom";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 139);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(36, 16);
			this->label2->TabIndex = 64;
			this->label2->Text = L"Nom";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"yyyy-MM-dd";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(16, 365);
			this->dateTimePicker1->Margin = System::Windows::Forms::Padding(4);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(139, 22);
			this->dateTimePicker1->TabIndex = 63;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(16, 219);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(243, 22);
			this->textBox3->TabIndex = 60;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(16, 159);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(243, 22);
			this->textBox2->TabIndex = 59;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(326, 15);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(288, 166);
			this->dataGridView1->TabIndex = 71;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyFormPersoSelecMod::dataGridView1_CellContentClick);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(162, 370);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(18, 17);
			this->checkBox1->TabIndex = 47;
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyFormPersoSelecMod::checkBox1_CheckedChanged);
			// 
			// MyFormPersoSelecMod
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(637, 416);
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
			this->Controls->Add(this->btnReturn);
			this->Controls->Add(this->btnModCli);
			this->Controls->Add(this->dataGridView1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyFormPersoSelecMod";
			this->Text = L"MyFormPersoSelecMod";
			this->Load += gcnew System::EventHandler(this, &MyFormPersoSelecMod::MyFormPersoSelecMod_Load);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void MyFormPersoSelecMod_Load(System::Object^ sender, System::EventArgs^ e) {
		this->oCad = gcnew NS_Comp_Data::cad();
		this->oActualiserVilles = gcnew NS_Comp_Actualiser_Villes::actualiserVilles();
		this->oPersonnel = gcnew NS_Comp_Personnel::personnel();

		this->dataGridView1->Refresh();
		this->oDs = this->oPersonnel->afficherUn("fu", System::Convert::ToInt64(this->idPerso));
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "fu";

		MessageBox::Show(L"N'oubliez pas d'entrer l'adresse complète pour la modifier.", L"Message",
		MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}

	private: System::Void Return_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void ModCli_Click(System::Object^ sender, System::EventArgs^ e) {
		//la requete SQL tu connais
		System::String^ sql;
		
		if(this->checkBox1->Checked == true)
		{
			sql = "IF ('" + this->dateTimePicker1->Text + "' NOT IN (SELECT date FROM dates)) BEGIN INSERT INTO dates(date) VALUES('" + this->dateTimePicker1->Text + "'); END ";
		}
		if (this->textBox5->Text != "" && this->textBox6->Text != "" && this->comboBox1->Text != "" && this->textBox7->Text != "")
		{
			sql += "IF NOT EXISTS((SELECT nomRue, numeroRue, ville, codePostal FROM adresse, ville WHERE adresse.idVille = ville.idVille AND nomRue = '" + this->textBox6->Text + "' AND numeroRue = '" + this->textBox5->Text + "' AND ville = '" + this->comboBox1->Text + "' AND codePostal = '" + this->textBox7->Text + "')) BEGIN INSERT INTO adresse(idVille, nomRue, numeroRue) SELECT idVille, '" + this->textBox6->Text + "', '" + this->textBox5->Text + "' FROM ville WHERE codePostal = '" + this->textBox7->Text + "' AND ville = '" + this->comboBox1->Text + "'; END ";
		}
		sql += "UPDATE personnel SET ";
		if (this->textBox2->Text != "") { sql += "nomPersonnel = '" + this->textBox2->Text + "', "; }
		if (this->textBox3->Text != "") { sql += "prenomPersonnel = '" + this->textBox3->Text + "', "; }
		if (this->textBox4->Text != "") { sql += "supHierarchique = '" + this->textBox4->Text + "', "; }
		if (this->textBox5->Text != "" && this->textBox6->Text != "" && this->comboBox1->Text != "" && this->textBox7->Text != "")
		{
			sql += "adressePersonnel = (SELECT idAdresse FROM adresse, ville WHERE adresse.numeroRue = '" + this->textBox5->Text + "' AND adresse.nomRue = '" + this->textBox6->Text + "' AND adresse.iDville = ville.idVille AND ville.ville = '" + this->comboBox1->Text + "' AND ville.codePostal = '" + this->textBox7->Text + "' ), ";
		}
		
		if (this->checkBox1->Checked == true){sql += "dateEmbauche = (SELECT idDate FROM dates WHERE date = '" + this->dateTimePicker1->Text + "'), ";}
		sql += "personnelActif = 'True' WHERE idPersonnel = " +this->idPerso+"; ";

		this->oCad->actionRows(sql);
		
		
			MessageBox::Show(L"Information(s) modifiée(s) !", L"Message",
			MessageBoxButtons::OK, MessageBoxIcon::Warning);
			//this->label2->Text = sql;
			this->Close();
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
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
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
