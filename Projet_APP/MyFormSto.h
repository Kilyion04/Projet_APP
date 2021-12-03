#pragma once

#include "MyFormStoSelec.h"
#include "stock.h"
#include "cad.h"

namespace ProjetAPP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyFormSto
	/// </summary>
	public ref class MyFormSto : public System::Windows::Forms::Form
	{
	public:
		MyFormSto(void)
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
		~MyFormSto()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnReturn;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Button^ btnAffSto;
	private: System::Windows::Forms::Button^ btnCreSto;


	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ btnRecSto;
	private: System::Windows::Forms::TextBox^ textBox2;




	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;

	private: NS_Comp_Stock::stock^ oStock;
	private: System::Data::DataSet^ oDs;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown4;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown5;
	private: NS_Comp_Data::cad^ oCad;



	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void numericUpDown1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}













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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnAffSto = (gcnew System::Windows::Forms::Button());
			this->btnCreSto = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->btnRecSto = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			this->SuspendLayout();
			// 
			// btnReturn
			// 
			this->btnReturn->Location = System::Drawing::Point(16, 15);
			this->btnReturn->Margin = System::Windows::Forms::Padding(4);
			this->btnReturn->Name = L"btnReturn";
			this->btnReturn->Size = System::Drawing::Size(100, 28);
			this->btnReturn->TabIndex = 1;
			this->btnReturn->Text = L"Retour";
			this->btnReturn->UseVisualStyleBackColor = true;
			this->btnReturn->Click += gcnew System::EventHandler(this, &MyFormSto::return_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(36, 171);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(224, 28);
			this->button1->TabIndex = 41;
			this->button1->Text = L"Actualiser le stock";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyFormSto::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(4, 71);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(20, 16);
			this->label1->TabIndex = 40;
			this->label1->Text = L"ID";
			// 
			// btnAffSto
			// 
			this->btnAffSto->Location = System::Drawing::Point(28, 39);
			this->btnAffSto->Margin = System::Windows::Forms::Padding(4);
			this->btnAffSto->Name = L"btnAffSto";
			this->btnAffSto->Size = System::Drawing::Size(100, 28);
			this->btnAffSto->TabIndex = 38;
			this->btnAffSto->Text = L"Afficher";
			this->btnAffSto->UseVisualStyleBackColor = true;
			this->btnAffSto->Click += gcnew System::EventHandler(this, &MyFormSto::AffSto_Click);
			// 
			// btnCreSto
			// 
			this->btnCreSto->Location = System::Drawing::Point(405, 15);
			this->btnCreSto->Margin = System::Windows::Forms::Padding(4);
			this->btnCreSto->Name = L"btnCreSto";
			this->btnCreSto->Size = System::Drawing::Size(100, 28);
			this->btnCreSto->TabIndex = 37;
			this->btnCreSto->Text = L"Créer";
			this->btnCreSto->UseVisualStyleBackColor = true;
			this->btnCreSto->Click += gcnew System::EventHandler(this, &MyFormSto::CreSto_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(25, 225);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(877, 274);
			this->dataGridView1->TabIndex = 36;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyFormSto::dataGridView1_CellContentClick);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->numericUpDown5);
			this->groupBox1->Controls->Add(this->btnAffSto);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(736, 18);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(168, 128);
			this->groupBox1->TabIndex = 42;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Rechercher un article du stock";
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->Location = System::Drawing::Point(8, 94);
			this->numericUpDown5->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(120, 22);
			this->numericUpDown5->TabIndex = 57;
			// 
			// btnRecSto
			// 
			this->btnRecSto->Location = System::Drawing::Point(297, 15);
			this->btnRecSto->Margin = System::Windows::Forms::Padding(4);
			this->btnRecSto->Name = L"btnRecSto";
			this->btnRecSto->Size = System::Drawing::Size(100, 28);
			this->btnRecSto->TabIndex = 43;
			this->btnRecSto->Text = L"Rechercher";
			this->btnRecSto->UseVisualStyleBackColor = true;
			this->btnRecSto->Click += gcnew System::EventHandler(this, &MyFormSto::btnRecSto_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(106, 89);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(132, 22);
			this->textBox2->TabIndex = 44;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyFormSto::textBox2_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(22, 89);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 16);
			this->label2->TabIndex = 48;
			this->label2->Text = L"Nom Article";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(10, 130);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(93, 16);
			this->label3->TabIndex = 49;
			this->label3->Text = L"Quantié Article";
			this->label3->Click += gcnew System::EventHandler(this, &MyFormSto::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(452, 136);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(29, 16);
			this->label4->TabIndex = 50;
			this->label4->Text = L"Prix";
			this->label4->Click += gcnew System::EventHandler(this, &MyFormSto::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(289, 92);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(192, 16);
			this->label5->TabIndex = 51;
			this->label5->Text = L"Seuil de Réapprovisionnement";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(381, 171);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(100, 16);
			this->label6->TabIndex = 52;
			this->label6->Text = L"Taux de la TVA";
			this->label6->Click += gcnew System::EventHandler(this, &MyFormSto::label6_Click);
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->DecimalPlaces = 2;
			this->numericUpDown2->Location = System::Drawing::Point(488, 169);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, System::Int32::MinValue });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(112, 22);
			this->numericUpDown2->TabIndex = 53;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->DecimalPlaces = 2;
			this->numericUpDown1->Location = System::Drawing::Point(488, 134);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, System::Int32::MinValue });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(112, 22);
			this->numericUpDown1->TabIndex = 54;
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(106, 128);
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(120, 22);
			this->numericUpDown3->TabIndex = 55;
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Location = System::Drawing::Point(488, 90);
			this->numericUpDown4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(120, 22);
			this->numericUpDown4->TabIndex = 56;
			// 
			// MyFormSto
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(917, 513);
			this->Controls->Add(this->numericUpDown4);
			this->Controls->Add(this->numericUpDown3);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->btnRecSto);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btnCreSto);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->btnReturn);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyFormSto";
			this->Text = L"MyFormSto";
			this->Load += gcnew System::EventHandler(this, &MyFormSto::MyFormSto_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void return_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void MyFormSto_Load(System::Object^ sender, System::EventArgs^ e) {
		this->oStock = gcnew NS_Comp_Stock::stock();
		refreshStock();
		clearStock();
	}
	private: void clearStock() {
		this->numericUpDown1->Text = "";
		this->numericUpDown2->Text = "";
		this->numericUpDown3->Text = "";
		this->numericUpDown4->Text = "";
		this->numericUpDown5->Text = "";
	}

	
	private: System::Void AffSto_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->numericUpDown5->Text == "")
		{
			MessageBox::Show(L"ID manquant.", L"Message",
			MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else {
			this->dataGridView1->Refresh();
			this->oDs = this->oStock->afficherUnArticle("fu", System::Convert::ToInt64(this->numericUpDown5->Text));
			this->dataGridView1->DataSource = this->oDs;
			this->dataGridView1->DataMember = "fu";
			if (this->dataGridView1->Rows->Count == 1)
			{
				MessageBox::Show(L"ID inconnu.", L"Message",
				MessageBoxButtons::OK, MessageBoxIcon::Warning);
				refreshStock();
			}
			else {
				this->Hide();
				MyFormStoSelec^ Form = gcnew MyFormStoSelec(this->numericUpDown5->Text);
				Form->ShowDialog();
				refreshStock();
				this->Show();
			}
		}
	}
private: System::Void CreSto_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->textBox2->Text == "" || this->numericUpDown3->Text == "" || this->numericUpDown1->Text == "" || this->numericUpDown4->Text == "" || this->numericUpDown2->Text == "")
	{
		MessageBox::Show(L"Un ou plusieurs champs ne sont pas remplis !", L"Message",
		MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	else {
		if (System::Convert::ToInt64(this->numericUpDown3->Text) <= System::Convert::ToInt64(this->numericUpDown4->Text))
		{
			MessageBox::Show(L"La quantité doit être supérieure au seuil de réapprovisionnement.", L"Message",
			MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else {
			this->oStock->creer(this->textBox2->Text, float::Parse(this->numericUpDown1->Text), System::Convert::ToInt64(this->numericUpDown4->Text), System::Convert::ToInt64(this->numericUpDown3->Text), float::Parse(this->numericUpDown2->Text));
			MessageBox::Show(L"Article créé !", L"Message",
			MessageBoxButtons::OK, MessageBoxIcon::Warning);
			clearStock();
		}
		
	}
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	refreshStock();
}
	   private: void refreshStock() {
		   this->dataGridView1->Refresh();
		   this->oDs = this->oStock->afficherToutArticle("Rsl");
		   this->dataGridView1->DataSource = this->oDs;
		   this->dataGridView1->DataMember = "Rsl";
	   }
private: System::Void tetbBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tetbBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tetbBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tetbBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tetbBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnRecSto_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oCad = gcnew NS_Comp_Data::cad();
	this->dataGridView1->Refresh();

	System::String^ sql;

	sql = "SELECT * FROM stock WHERE idArticle = idArticle ";
	if (this->textBox2->Text != "") { sql += "AND nomArticle = '" + this->textBox2->Text + "' "; }
	if (this->numericUpDown1->Text != "") { sql += "AND prixArticle = " + this->numericUpDown1->Text + " "; }
	if (this->numericUpDown4->Text != "") { sql += "AND seuilReap = " + this->numericUpDown4->Text + " "; }
	if (this->numericUpDown3->Text != "") { sql += "AND quantiteArticle = " + this->numericUpDown3->Text + " "; }
	if (this->numericUpDown2->Text != "") { sql += "AND tauxTVA = " + this->numericUpDown2->Text + " "; }
	
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
