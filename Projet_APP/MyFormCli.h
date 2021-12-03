#pragma once

#include "MyFormCliSelec.h"
#include "client.h"
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
	/// Description résumée de MyFormCli
	/// </summary>
	public ref class MyFormCli : public System::Windows::Forms::Form
	{
	public:
		MyFormCli(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyFormCli()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnReturn;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ btnCreCli;
	private: System::Windows::Forms::Button^ btnAffCli;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;


	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;



	private: System::Windows::Forms::Label^ label3;





	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ btnRecCli;

	private: NS_Comp_Client::client^ oClient;
	private: System::Data::DataSet^ oDs;
	private: NS_Comp_Actualiser_Villes::actualiserVilles^ oActualiserVilles;
	private: NS_Comp_Data::cad^ oCad;


	private: System::Windows::Forms::CheckBox^ checkBox1;

	private: System::Windows::Forms::NumericUpDown^ numericUpDown5;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyFormCli::typeid));
			this->btnReturn = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->btnCreCli = (gcnew System::Windows::Forms::Button());
			this->btnAffCli = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->btnRecCli = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnReturn
			// 
			this->btnReturn->BackColor = System::Drawing::Color::Transparent;
			this->btnReturn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnReturn->Location = System::Drawing::Point(16, 15);
			this->btnReturn->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnReturn->Name = L"btnReturn";
			this->btnReturn->Size = System::Drawing::Size(100, 28);
			this->btnReturn->TabIndex = 0;
			this->btnReturn->Text = L"Retour";
			this->btnReturn->UseVisualStyleBackColor = false;
			this->btnReturn->Click += gcnew System::EventHandler(this, &MyFormCli::return_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(16, 134);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(907, 325);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyFormCli::dataGridView1_CellContentClick);
			// 
			// btnCreCli
			// 
			this->btnCreCli->BackColor = System::Drawing::Color::Transparent;
			this->btnCreCli->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnCreCli->Location = System::Drawing::Point(412, 15);
			this->btnCreCli->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnCreCli->Name = L"btnCreCli";
			this->btnCreCli->Size = System::Drawing::Size(100, 28);
			this->btnCreCli->TabIndex = 2;
			this->btnCreCli->Text = L"Créer";
			this->btnCreCli->UseVisualStyleBackColor = false;
			this->btnCreCli->Click += gcnew System::EventHandler(this, &MyFormCli::CreCli_Click);
			// 
			// btnAffCli
			// 
			this->btnAffCli->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnAffCli->Location = System::Drawing::Point(8, 23);
			this->btnAffCli->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnAffCli->Name = L"btnAffCli";
			this->btnAffCli->Size = System::Drawing::Size(100, 28);
			this->btnAffCli->TabIndex = 3;
			this->btnAffCli->Text = L"Afficher";
			this->btnAffCli->UseVisualStyleBackColor = true;
			this->btnAffCli->UseWaitCursor = true;
			this->btnAffCli->Click += gcnew System::EventHandler(this, &MyFormCli::AffCli_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Location = System::Drawing::Point(16, 466);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(167, 28);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Afficher Clients";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyFormCli::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Location = System::Drawing::Point(16, 90);
			this->textBox2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(244, 15);
			this->textBox2->TabIndex = 6;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyFormCli::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::White;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Location = System::Drawing::Point(268, 90);
			this->textBox3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(244, 15);
			this->textBox3->TabIndex = 7;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"yyyy-MM-dd";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(525, 89);
			this->dateTimePicker1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(100, 22);
			this->dateTimePicker1->TabIndex = 10;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &MyFormCli::dateTimePicker1_ValueChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(4, 55);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(20, 16);
			this->label1->TabIndex = 14;
			this->label1->Text = L"ID";
			this->label1->UseWaitCursor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Location = System::Drawing::Point(12, 70);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(36, 16);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Nom";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Location = System::Drawing::Point(264, 70);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(54, 16);
			this->label3->TabIndex = 19;
			this->label3->Text = L"Prénom";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Location = System::Drawing::Point(521, 69);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(120, 16);
			this->label9->TabIndex = 25;
			this->label9->Text = L"Date de naissance";
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::Transparent;
			this->groupBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->groupBox2->Controls->Add(this->numericUpDown5);
			this->groupBox2->Controls->Add(this->btnAffCli);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox2->ForeColor = System::Drawing::Color::Black;
			this->groupBox2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->groupBox2->Location = System::Drawing::Point(765, 14);
			this->groupBox2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox2->Size = System::Drawing::Size(157, 113);
			this->groupBox2->TabIndex = 27;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Afficher un client";
			this->groupBox2->UseWaitCursor = true;
			this->groupBox2->Enter += gcnew System::EventHandler(this, &MyFormCli::groupBox2_Enter);
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->numericUpDown5->Location = System::Drawing::Point(7, 76);
			this->numericUpDown5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->numericUpDown5->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(120, 18);
			this->numericUpDown5->TabIndex = 58;
			this->numericUpDown5->UseWaitCursor = true;
			// 
			// btnRecCli
			// 
			this->btnRecCli->BackColor = System::Drawing::Color::Transparent;
			this->btnRecCli->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnRecCli->Location = System::Drawing::Point(304, 15);
			this->btnRecCli->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btnRecCli->Name = L"btnRecCli";
			this->btnRecCli->Size = System::Drawing::Size(100, 28);
			this->btnRecCli->TabIndex = 28;
			this->btnRecCli->Text = L"Rechercher";
			this->btnRecCli->UseVisualStyleBackColor = false;
			this->btnRecCli->Click += gcnew System::EventHandler(this, &MyFormCli::button2_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::Color::Transparent;
			this->checkBox1->Location = System::Drawing::Point(633, 95);
			this->checkBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(18, 17);
			this->checkBox1->TabIndex = 30;
			this->checkBox1->UseVisualStyleBackColor = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(664, 466);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(259, 91);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 31;
			this->pictureBox1->TabStop = false;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->BackColor = System::Drawing::Color::Transparent;
			this->checkBox2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->checkBox2->Location = System::Drawing::Point(190, 471);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(60, 20);
			this->checkBox2->TabIndex = 32;
			this->checkBox2->Text = L"Inactif";
			this->checkBox2->UseVisualStyleBackColor = false;
			// 
			// MyFormCli
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(940, 569);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->btnRecCli);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btnCreCli);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->btnReturn);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"MyFormCli";
			this->Text = L"MyFormCli";
			this->Load += gcnew System::EventHandler(this, &MyFormCli::MyFormCli_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void return_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void MyFormCli_Load(System::Object^ sender, System::EventArgs^ e) {
		this->oClient = gcnew NS_Comp_Client::client();
		this->oActualiserVilles = gcnew NS_Comp_Actualiser_Villes::actualiserVilles();
		refreshClient();
		clearClient();
	}
private: void clearClient() {
	this->textBox2->Text = "";
	this->textBox3->Text = "";
	this->numericUpDown5->Text = "";
}
	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void AffCli_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->numericUpDown5->Text == "")
	{
		MessageBox::Show(L"ID manquant.", L"Message",
		MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	else {
		this->dataGridView1->Refresh();
		this->oDs = this->oClient->afficherUn("fu", System::Convert::ToInt64(this->numericUpDown5->Text));
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "fu";
		if (this->dataGridView1->Rows->Count == 1)
		{
			MessageBox::Show(L"ID inconnu.", L"Message",
			MessageBoxButtons::OK, MessageBoxIcon::Warning);
			refreshClient();
		}
		else {
			this->Hide();
			MyFormCliSelec^ Form = gcnew MyFormCliSelec(this->numericUpDown5->Text);
			Form->ShowDialog();
			refreshClient();
			this->Show();
		}
	}
}
private: System::Void CreCli_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->textBox2->Text == "" || this->textBox3->Text == "")
	{
		MessageBox::Show(L"Un ou plusieurs champs ne sont pas remplis !", L"Message",
		MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	else {
		this->oClient->creer(this->textBox2->Text, this->textBox3->Text, this->dateTimePicker1->Text);
		MessageBox::Show(L"Client créé !", L"Message",
		MessageBoxButtons::OK, MessageBoxIcon::Warning);
		refreshClient();
		clearClient();
	}
}
private: System::Void groupBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oCad = gcnew NS_Comp_Data::cad();

	this->dataGridView1->Refresh();

	System::String^ sql;

	sql = "SELECT * FROM client, dates WHERE client.dateNaissance = idDate ";
	if (this->textBox2->Text != "") { sql += "AND nomClient = '" + this->textBox2->Text + "' "; }
	if (this->textBox3->Text != "") { sql += "AND prenomClient = '" + this->textBox3->Text + "' "; }
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


private: System::Void numericUpDown5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	refreshClient();
}
private: void refreshClient() {
	this->dataGridView1->Refresh();
	this->oDs = this->oClient->afficherTout("Rsl", this->checkBox2->Checked);
	this->dataGridView1->DataSource = this->oDs;
	this->dataGridView1->DataMember = "Rsl";
}

private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
