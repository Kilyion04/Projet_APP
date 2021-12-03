#pragma once

#include "cad.h"
#include "stock.h"

namespace ProjetAPP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyFormStoSelecMod
	/// </summary>
	public ref class MyFormStoSelecMod : public System::Windows::Forms::Form
	{
	public:
		MyFormStoSelecMod(void)
		{
			InitializeComponent();
		}
		MyFormStoSelecMod(System::String^ idArticle)
		{
			InitializeComponent();
			this->idArticle = idArticle;
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyFormStoSelecMod()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnModSto;
	private: System::Windows::Forms::Button^ btnReturn;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::TextBox^ textBox1;




	private: NS_Comp_Data::cad^ oCad;
	private: System::String^ idArticle;
	private: System::Data::DataSet^ oDs;
	private: NS_Comp_Stock::stock^ oStock;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown4;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;

	


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyFormStoSelecMod::typeid));
			this->btnModSto = (gcnew System::Windows::Forms::Button());
			this->btnReturn = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			this->SuspendLayout();
			// 
			// btnModSto
			// 
			this->btnModSto->Location = System::Drawing::Point(12, 63);
			this->btnModSto->Name = L"btnModSto";
			this->btnModSto->Size = System::Drawing::Size(75, 23);
			this->btnModSto->TabIndex = 41;
			this->btnModSto->Text = L"Modifier";
			this->btnModSto->UseVisualStyleBackColor = true;
			this->btnModSto->Click += gcnew System::EventHandler(this, &MyFormStoSelecMod::ModSto_Click);
			// 
			// btnReturn
			// 
			this->btnReturn->Location = System::Drawing::Point(12, 12);
			this->btnReturn->Name = L"btnReturn";
			this->btnReturn->Size = System::Drawing::Size(75, 23);
			this->btnReturn->TabIndex = 47;
			this->btnReturn->Text = L"retour";
			this->btnReturn->UseVisualStyleBackColor = true;
			this->btnReturn->Click += gcnew System::EventHandler(this, &MyFormStoSelecMod::Return_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(212, 12);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(216, 135);
			this->dataGridView1->TabIndex = 72;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyFormStoSelecMod::dataGridView1_CellContentClick);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 250);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(24, 13);
			this->label2->TabIndex = 73;
			this->label2->Text = L"Prix";
			this->label2->Click += gcnew System::EventHandler(this, &MyFormStoSelecMod::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 166);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(61, 13);
			this->label1->TabIndex = 74;
			this->label1->Text = L"Nom Article";
			this->label1->Click += gcnew System::EventHandler(this, &MyFormStoSelecMod::label1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 347);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(151, 13);
			this->label3->TabIndex = 75;
			this->label3->Text = L"Seuil de Réapprovisionnement";
			this->label3->Click += gcnew System::EventHandler(this, &MyFormStoSelecMod::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(244, 250);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(47, 13);
			this->label4->TabIndex = 76;
			this->label4->Text = L"Quantite";
			this->label4->Click += gcnew System::EventHandler(this, &MyFormStoSelecMod::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(244, 347);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(55, 13);
			this->label5->TabIndex = 77;
			this->label5->Text = L"Taux TVA";
			this->label5->Click += gcnew System::EventHandler(this, &MyFormStoSelecMod::label5_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(15, 182);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(183, 20);
			this->textBox1->TabIndex = 79;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyFormStoSelecMod::textBox1_TextChanged);
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Location = System::Drawing::Point(15, 363);
			this->numericUpDown4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->numericUpDown4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(90, 20);
			this->numericUpDown4->TabIndex = 86;
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(246, 266);
			this->numericUpDown3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(90, 20);
			this->numericUpDown3->TabIndex = 85;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->DecimalPlaces = 2;
			this->numericUpDown1->Location = System::Drawing::Point(15, 266);
			this->numericUpDown1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, System::Int32::MinValue });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(84, 20);
			this->numericUpDown1->TabIndex = 84;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->DecimalPlaces = 2;
			this->numericUpDown2->Location = System::Drawing::Point(246, 363);
			this->numericUpDown2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, System::Int32::MinValue });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(84, 20);
			this->numericUpDown2->TabIndex = 83;
			// 
			// MyFormStoSelecMod
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(456, 437);
			this->Controls->Add(this->numericUpDown4);
			this->Controls->Add(this->numericUpDown3);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->btnReturn);
			this->Controls->Add(this->btnModSto);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyFormStoSelecMod";
			this->Text = L"MyFormStoSelecMod";
			this->Load += gcnew System::EventHandler(this, &MyFormStoSelecMod::MyFormStoSelecMod_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ModSto_Click(System::Object^ sender, System::EventArgs^ e) {
		System::String^ sql;
		if (this->numericUpDown1->Text == "" && this->numericUpDown4->Text == "" && this->numericUpDown3->Text == "" && this->numericUpDown2->Text == "" && this->textBox1->Text == "")
		{
			MessageBox::Show(L"Entrez le ou les paramètre(s) à modifier.", L"Message",
			MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else {
			bool hg = false;
			sql += "UPDATE stock SET ";
			if (this->textBox1->Text != "") { 
					sql += "nomArticle = '" + this->textBox1->Text + "' ";
					hg = true;
			}
			if (this->numericUpDown1->Text != "") { 
				if (hg == false) {
					sql += "prixArticle = " + this->numericUpDown1->Text + " ";
					hg = true;
				}
				else {
					sql += ", prixArticle = " + this->numericUpDown1->Text + " ";
				}
			}
			if (this->numericUpDown4->Text != "") {
				if (hg == false) {
					sql += "seuilReap = " + this->numericUpDown4->Text + " ";
					hg = true;
				}
				else {
					sql += ", seuilReap = " + this->numericUpDown4->Text + " ";
				}
			}
			if (this->numericUpDown3->Text != "") { 
				if (hg == false) {
					sql += "quantiteArticle = " + this->numericUpDown3->Text + " ";
					hg = true;
				}
				else {
					sql += ", quantiteArticle = " + this->numericUpDown3->Text + " ";
				}
			}
			if (this->numericUpDown2->Text != "") {
				if (hg == false) {
					sql += "tauxTVA = " + this->numericUpDown2->Text + " ";
					hg = true;
				}
				else {
					sql += ", tauxTVA = " + this->numericUpDown2->Text + " ";
				}
			}

			sql += " WHERE idArticle = " + this->idArticle + " ;";

			this->oCad->actionRows(sql);
			MessageBox::Show(L"Information(s) modifiée(s) !", L"Message",
			MessageBoxButtons::OK, MessageBoxIcon::Warning);
			//this->label2->Text = sql;
			this->Close();
		}
	}
	private: System::Void Return_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void MyFormStoSelecMod_Load(System::Object^ sender, System::EventArgs^ e) {
		this->oCad = gcnew NS_Comp_Data::cad();
		this->oStock = gcnew NS_Comp_Stock::stock;
		this->dataGridView1->Refresh();
		this->oDs = this->oStock->afficherUnArticle("fu", System::Convert::ToInt64(this->idArticle));
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "fu";
		this->numericUpDown1->Text = "";
		this->numericUpDown2->Text = "";
		this->numericUpDown3->Text = "";
		this->numericUpDown4->Text = "";
		
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void numericUpDown1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void numericUpDown2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void numericUpDown4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void numericUpDown3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
