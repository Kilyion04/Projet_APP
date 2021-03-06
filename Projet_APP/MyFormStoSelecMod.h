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
	/// Description r?sum?e de MyFormStoSelecMod
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
		/// Nettoyage des ressources utilis?es.
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
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	


	protected:

	private:
		/// <summary>
		/// Variable n?cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M?thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m?thode avec l'?diteur de code.
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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnModSto
			// 
			this->btnModSto->BackColor = System::Drawing::Color::Transparent;
			this->btnModSto->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnModSto->Location = System::Drawing::Point(16, 78);
			this->btnModSto->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnModSto->Name = L"btnModSto";
			this->btnModSto->Size = System::Drawing::Size(100, 28);
			this->btnModSto->TabIndex = 41;
			this->btnModSto->Text = L"Modifier";
			this->btnModSto->UseVisualStyleBackColor = false;
			this->btnModSto->Click += gcnew System::EventHandler(this, &MyFormStoSelecMod::ModSto_Click);
			// 
			// btnReturn
			// 
			this->btnReturn->BackColor = System::Drawing::Color::Transparent;
			this->btnReturn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnReturn->Location = System::Drawing::Point(16, 15);
			this->btnReturn->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnReturn->Name = L"btnReturn";
			this->btnReturn->Size = System::Drawing::Size(100, 28);
			this->btnReturn->TabIndex = 47;
			this->btnReturn->Text = L"Retour";
			this->btnReturn->UseVisualStyleBackColor = false;
			this->btnReturn->Click += gcnew System::EventHandler(this, &MyFormStoSelecMod::Return_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(283, 15);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(453, 166);
			this->dataGridView1->TabIndex = 72;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyFormStoSelecMod::dataGridView1_CellContentClick);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Location = System::Drawing::Point(471, 206);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 16);
			this->label2->TabIndex = 73;
			this->label2->Text = L"Prix";
			this->label2->Click += gcnew System::EventHandler(this, &MyFormStoSelecMod::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(16, 204);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 16);
			this->label1->TabIndex = 74;
			this->label1->Text = L"Nom Article";
			this->label1->Click += gcnew System::EventHandler(this, &MyFormStoSelecMod::label1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Location = System::Drawing::Point(12, 263);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(192, 16);
			this->label3->TabIndex = 75;
			this->label3->Text = L"Seuil de R?approvisionnement";
			this->label3->Click += gcnew System::EventHandler(this, &MyFormStoSelecMod::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Location = System::Drawing::Point(304, 206);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(56, 16);
			this->label4->TabIndex = 76;
			this->label4->Text = L"Quantite";
			this->label4->Click += gcnew System::EventHandler(this, &MyFormStoSelecMod::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Location = System::Drawing::Point(621, 204);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(67, 16);
			this->label5->TabIndex = 77;
			this->label5->Text = L"Taux TVA";
			this->label5->Click += gcnew System::EventHandler(this, &MyFormStoSelecMod::label5_Click);
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Location = System::Drawing::Point(20, 224);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(243, 15);
			this->textBox1->TabIndex = 79;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyFormStoSelecMod::textBox1_TextChanged);
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->numericUpDown4->Location = System::Drawing::Point(16, 283);
			this->numericUpDown4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(120, 18);
			this->numericUpDown4->TabIndex = 86;
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->numericUpDown3->Location = System::Drawing::Point(307, 225);
			this->numericUpDown3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(120, 18);
			this->numericUpDown3->TabIndex = 85;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->numericUpDown1->DecimalPlaces = 2;
			this->numericUpDown1->Location = System::Drawing::Point(475, 225);
			this->numericUpDown1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, System::Int32::MinValue });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(112, 18);
			this->numericUpDown1->TabIndex = 84;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->numericUpDown2->DecimalPlaces = 2;
			this->numericUpDown2->Location = System::Drawing::Point(624, 224);
			this->numericUpDown2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, System::Int32::MinValue });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(112, 18);
			this->numericUpDown2->TabIndex = 83;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(487, 263);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(259, 91);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 87;
			this->pictureBox1->TabStop = false;
			// 
			// MyFormStoSelecMod
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(774, 378);
			this->Controls->Add(this->pictureBox1);
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
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"MyFormStoSelecMod";
			this->Text = L"MyFormStoSelecMod";
			this->Load += gcnew System::EventHandler(this, &MyFormStoSelecMod::MyFormStoSelecMod_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ModSto_Click(System::Object^ sender, System::EventArgs^ e) {
		System::String^ sql;
		if (this->numericUpDown1->Text == "" && this->numericUpDown4->Text == "" && this->numericUpDown3->Text == "" && this->numericUpDown2->Text == "" && this->textBox1->Text == "")
		{
			MessageBox::Show(L"Entrez le ou les param?tre(s) ? modifier.", L"Message",
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
			MessageBox::Show(L"Information(s) modifi?e(s) !", L"Message",
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
