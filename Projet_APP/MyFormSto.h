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
	/// Description r�sum�e de MyFormSto
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
		/// Nettoyage des ressources utilis�es.
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
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyFormSto::typeid));
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
			this->btnReturn->Location = System::Drawing::Point(12, 12);
			this->btnReturn->Name = L"btnReturn";
			this->btnReturn->Size = System::Drawing::Size(75, 23);
			this->btnReturn->TabIndex = 1;
			this->btnReturn->Text = L"Retour";
			this->btnReturn->UseVisualStyleBackColor = true;
			this->btnReturn->Click += gcnew System::EventHandler(this, &MyFormSto::return_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(27, 139);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(168, 23);
			this->button1->TabIndex = 41;
			this->button1->Text = L"Actualiser le stock";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyFormSto::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 58);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(18, 13);
			this->label1->TabIndex = 40;
			this->label1->Text = L"ID";
			// 
			// btnAffSto
			// 
			this->btnAffSto->Location = System::Drawing::Point(21, 32);
			this->btnAffSto->Name = L"btnAffSto";
			this->btnAffSto->Size = System::Drawing::Size(75, 23);
			this->btnAffSto->TabIndex = 38;
			this->btnAffSto->Text = L"Afficher";
			this->btnAffSto->UseVisualStyleBackColor = true;
			this->btnAffSto->Click += gcnew System::EventHandler(this, &MyFormSto::AffSto_Click);
			// 
			// btnCreSto
			// 
			this->btnCreSto->Location = System::Drawing::Point(304, 12);
			this->btnCreSto->Name = L"btnCreSto";
			this->btnCreSto->Size = System::Drawing::Size(75, 23);
			this->btnCreSto->TabIndex = 37;
			this->btnCreSto->Text = L"Cr�er";
			this->btnCreSto->UseVisualStyleBackColor = true;
			this->btnCreSto->Click += gcnew System::EventHandler(this, &MyFormSto::CreSto_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(19, 183);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(658, 223);
			this->dataGridView1->TabIndex = 36;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyFormSto::dataGridView1_CellContentClick);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->numericUpDown5);
			this->groupBox1->Controls->Add(this->btnAffSto);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(552, 15);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(126, 104);
			this->groupBox1->TabIndex = 42;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Rechercher un article du stock";
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->Location = System::Drawing::Point(6, 76);
			this->numericUpDown5->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->numericUpDown5->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(90, 20);
			this->numericUpDown5->TabIndex = 57;
			// 
			// btnRecSto
			// 
			this->btnRecSto->Location = System::Drawing::Point(223, 12);
			this->btnRecSto->Name = L"btnRecSto";
			this->btnRecSto->Size = System::Drawing::Size(75, 23);
			this->btnRecSto->TabIndex = 43;
			this->btnRecSto->Text = L"Rechercher";
			this->btnRecSto->UseVisualStyleBackColor = true;
			this->btnRecSto->Click += gcnew System::EventHandler(this, &MyFormSto::btnRecSto_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(80, 72);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 44;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyFormSto::textBox2_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(16, 72);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 13);
			this->label2->TabIndex = 48;
			this->label2->Text = L"Nom Article";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(8, 106);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(76, 13);
			this->label3->TabIndex = 49;
			this->label3->Text = L"Quanti� Article";
			this->label3->Click += gcnew System::EventHandler(this, &MyFormSto::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(339, 110);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(24, 13);
			this->label4->TabIndex = 50;
			this->label4->Text = L"Prix";
			this->label4->Click += gcnew System::EventHandler(this, &MyFormSto::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(217, 75);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(151, 13);
			this->label5->TabIndex = 51;
			this->label5->Text = L"Seuil de R�approvisionnement";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(286, 139);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(81, 13);
			this->label6->TabIndex = 52;
			this->label6->Text = L"Taux de la TVA";
			this->label6->Click += gcnew System::EventHandler(this, &MyFormSto::label6_Click);
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->DecimalPlaces = 2;
			this->numericUpDown2->Location = System::Drawing::Point(366, 137);
			this->numericUpDown2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, System::Int32::MinValue });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(84, 20);
			this->numericUpDown2->TabIndex = 53;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->DecimalPlaces = 2;
			this->numericUpDown1->Location = System::Drawing::Point(366, 109);
			this->numericUpDown1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, System::Int32::MinValue });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(84, 20);
			this->numericUpDown1->TabIndex = 54;
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(80, 104);
			this->numericUpDown3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(90, 20);
			this->numericUpDown3->TabIndex = 55;
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Location = System::Drawing::Point(366, 73);
			this->numericUpDown4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->numericUpDown4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(90, 20);
			this->numericUpDown4->TabIndex = 56;
			// 
			// MyFormSto
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(688, 417);
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
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
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
			MessageBox::Show(L"La quantit� doit �tre sup�rieure au seuil de r�approvisionnement.", L"Message",
			MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else {
			this->oStock->creer(this->textBox2->Text, float::Parse(this->numericUpDown1->Text), System::Convert::ToInt64(this->numericUpDown4->Text), System::Convert::ToInt64(this->numericUpDown3->Text), float::Parse(this->numericUpDown2->Text));
			MessageBox::Show(L"Article cr�� !", L"Message",
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
		MessageBox::Show(L"Aucun r�sultat.", L"Message",
		MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
}
};
}
