#pragma once

#include "MyFormCliAdrFac.h"
#include "MyFormCliAdrLiv.h"
#include "MyFormComSelec.h"
#include "commande.h"
#include "actualiserVilles.h"
#include "cad.h"
#include "client.h"
#include "MyFormCli.h"
#include "MyFormSto.h"
#include "stock.h"

namespace ProjetAPP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyFormCom
	/// </summary>
	public ref class MyFormCom : public System::Windows::Forms::Form
	{
	public:
		MyFormCom(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyFormCom()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnReturn;
	private: System::Windows::Forms::Label^ label1;




	private: System::Windows::Forms::Button^ btnAffCom;
	private: System::Windows::Forms::Button^ btnCreCom;


	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ btnRecCom;


	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::CheckBox^ checkBox2;

	private: NS_Comp_Commande::commande^ oCommande;
	private: NS_Comp_Stock::stock^ oStock;
	private: NS_Comp_Client::client^ oClient;
	private: System::Data::DataSet^ oDs;
	private: System::Data::DataSet^ oDs2;
	private: NS_Comp_Actualiser_Villes::actualiserVilles^ oActualiserVilles;
	private: NS_Comp_Data::cad^ oCad;

	typedef ref struct article{
	 int idArticle =0;
	 int quantite =0;
	} article;
	private: article^ hangar;

	private: array<article^, 1>^ panier;
	private: 
	private: int size;


	private: System::Windows::Forms::Label^ label10;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown4;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown5;




	private:


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyFormCom::typeid));
			this->btnReturn = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnAffCom = (gcnew System::Windows::Forms::Button());
			this->btnCreCom = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->btnRecCom = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit();
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
			this->btnReturn->Click += gcnew System::EventHandler(this, &MyFormCom::return_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(18, 13);
			this->label1->TabIndex = 34;
			this->label1->Text = L"ID";
			this->label1->Click += gcnew System::EventHandler(this, &MyFormCom::label1_Click);
			// 
			// btnAffCom
			// 
			this->btnAffCom->Location = System::Drawing::Point(6, 19);
			this->btnAffCom->Name = L"btnAffCom";
			this->btnAffCom->Size = System::Drawing::Size(75, 23);
			this->btnAffCom->TabIndex = 29;
			this->btnAffCom->Text = L"Afficher";
			this->btnAffCom->UseVisualStyleBackColor = true;
			this->btnAffCom->Click += gcnew System::EventHandler(this, &MyFormCom::AffCom_Click);
			// 
			// btnCreCom
			// 
			this->btnCreCom->Location = System::Drawing::Point(287, 12);
			this->btnCreCom->Name = L"btnCreCom";
			this->btnCreCom->Size = System::Drawing::Size(75, 23);
			this->btnCreCom->TabIndex = 28;
			this->btnCreCom->Text = L"Créer";
			this->btnCreCom->UseVisualStyleBackColor = true;
			this->btnCreCom->Click += gcnew System::EventHandler(this, &MyFormCom::CreCom_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(23, 292);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(662, 308);
			this->dataGridView1->TabIndex = 27;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(20, 262);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(168, 23);
			this->button1->TabIndex = 35;
			this->button1->Text = L"Afficher Commandes";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyFormCom::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->btnAffCom);
			this->groupBox1->Controls->Add(this->numericUpDown4);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(584, 11);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(136, 89);
			this->groupBox1->TabIndex = 36;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Afficher une commande";
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Location = System::Drawing::Point(8, 66);
			this->numericUpDown4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->numericUpDown4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(73, 20);
			this->numericUpDown4->TabIndex = 73;
			// 
			// btnRecCom
			// 
			this->btnRecCom->Location = System::Drawing::Point(190, 12);
			this->btnRecCom->Name = L"btnRecCom";
			this->btnRecCom->Size = System::Drawing::Size(75, 23);
			this->btnRecCom->TabIndex = 37;
			this->btnRecCom->Text = L"Rechercher";
			this->btnRecCom->UseVisualStyleBackColor = true;
			this->btnRecCom->Click += gcnew System::EventHandler(this, &MyFormCom::btnRecCom_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(288, 134);
			this->checkBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(148, 17);
			this->checkBox1->TabIndex = 40;
			this->checkBox1->Text = L"Paiement en plusieurs fois";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyFormCom::checkBox1_CheckedChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(10, 64);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 13);
			this->label2->TabIndex = 41;
			this->label2->Text = L"ID Client";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(18, 117);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 13);
			this->label3->TabIndex = 42;
			this->label3->Text = L"Date de commande";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(20, 186);
			this->comboBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(204, 21);
			this->comboBox1->TabIndex = 43;
			this->comboBox1->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MyFormCom::comboBox1_KeyUp);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(18, 171);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(41, 13);
			this->label4->TabIndex = 44;
			this->label4->Text = L"Articles";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(317, 183);
			this->button2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(68, 25);
			this->button2->TabIndex = 45;
			this->button2->Text = L"Ajouter";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyFormCom::button2_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(243, 170);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(47, 13);
			this->label5->TabIndex = 47;
			this->label5->Text = L"Quantité";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(581, 231);
			this->button3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(104, 28);
			this->button3->TabIndex = 48;
			this->button3->Text = L"Afficher panier";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyFormCom::button3_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(148, 132);
			this->comboBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(134, 21);
			this->comboBox2->TabIndex = 49;
			this->comboBox2->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MyFormCom::comboBox2_KeyUp);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(146, 117);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(100, 13);
			this->label6->TabIndex = 50;
			this->label6->Text = L"Moyen de paiement";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(400, 190);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(69, 20);
			this->textBox5->TabIndex = 51;
			this->textBox5->Text = L"0";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(474, 190);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(71, 20);
			this->textBox6->TabIndex = 52;
			this->textBox6->Text = L"0";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(624, 190);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(68, 20);
			this->textBox7->TabIndex = 53;
			this->textBox7->Text = L"0";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(398, 174);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(64, 13);
			this->label7->TabIndex = 54;
			this->label7->Text = L"Montant HT";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(472, 174);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(70, 13);
			this->label8->TabIndex = 55;
			this->label8->Text = L"Montant TVA";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(622, 174);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(70, 13);
			this->label9->TabIndex = 56;
			this->label9->Text = L"Montant TTC";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"yyyy-MM-dd";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->dateTimePicker1->Location = System::Drawing::Point(20, 132);
			this->dateTimePicker1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(76, 20);
			this->dateTimePicker1->TabIndex = 57;
			this->dateTimePicker1->TabStop = false;
			this->dateTimePicker1->Value = System::DateTime(2021, 11, 30, 14, 43, 45, 0);
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &MyFormCom::dateTimePicker1_ValueChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(100, 136);
			this->checkBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(15, 14);
			this->checkBox2->TabIndex = 58;
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(146, 62);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(100, 13);
			this->label10->TabIndex = 60;
			this->label10->Text = L"ID Adresse livraison";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(328, 64);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(112, 13);
			this->label11->TabIndex = 62;
			this->label11->Text = L"ID Adresse facturation";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(380, 11);
			this->button4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(88, 24);
			this->button4->TabIndex = 0;
			this->button4->Text = L"Gestion clients";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyFormCom::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(20, 220);
			this->button5->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(104, 28);
			this->button5->TabIndex = 63;
			this->button5->Text = L"Actualiser articles";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyFormCom::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(477, 11);
			this->button6->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(88, 24);
			this->button6->TabIndex = 64;
			this->button6->Text = L"Gestion stock";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyFormCom::button6_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(245, 186);
			this->numericUpDown1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(38, 20);
			this->numericUpDown1->TabIndex = 65;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(462, 231);
			this->button7->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(104, 28);
			this->button7->TabIndex = 66;
			this->button7->Text = L"Supprimer panier";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyFormCom::button7_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(548, 174);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(59, 13);
			this->label12->TabIndex = 68;
			this->label12->Text = L"Remise (%)";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(550, 190);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(68, 20);
			this->textBox4->TabIndex = 67;
			this->textBox4->Text = L"0";
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(331, 89);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(160, 23);
			this->button8->TabIndex = 69;
			this->button8->Text = L"Afficher Adresse(s) Facturation";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyFormCom::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(148, 89);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(152, 23);
			this->button9->TabIndex = 70;
			this->button9->Text = L"Afficher Adresse(s) Livraison";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyFormCom::button9_Click);
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(245, 62);
			this->numericUpDown3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(54, 20);
			this->numericUpDown3->TabIndex = 71;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(436, 60);
			this->numericUpDown2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(60, 20);
			this->numericUpDown2->TabIndex = 72;
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->Location = System::Drawing::Point(56, 64);
			this->numericUpDown5->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->numericUpDown5->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(60, 20);
			this->numericUpDown5->TabIndex = 74;
			// 
			// MyFormCom
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(756, 617);
			this->Controls->Add(this->numericUpDown5);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->numericUpDown3);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->btnRecCom);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btnCreCom);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->btnReturn);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyFormCom";
			this->Text = L"MyFormCom";
			this->Load += gcnew System::EventHandler(this, &MyFormCom::MyFormCom_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyFormCom_Load(System::Object^ sender, System::EventArgs^ e) {
		size = 6;
		this->panier = gcnew array<article^,1>(size);
		
		this->oCommande = gcnew NS_Comp_Commande::commande();
		this->oClient = gcnew NS_Comp_Client::client();
		this->oActualiserVilles = gcnew NS_Comp_Actualiser_Villes::actualiserVilles();
		this->oCad = gcnew NS_Comp_Data::cad();
		this->oStock = gcnew NS_Comp_Stock::stock();

		for (int h = 0; h < size; h++) {
			panier[h] = gcnew article;
		}
		for (int h = 0; h < size; h++) {
			this->panier[h]->idArticle = 0;
			this->panier[h]->quantite = 0;
		}
		refreshMoyensPaiement();
		refreshArticles();
		refreshCommande();
		this->numericUpDown4->Text = "";
		this->numericUpDown5->Text = "";
		this->numericUpDown2->Text = "";
		this->numericUpDown3->Text = "";
	}
	public: void clearCommande() {
		this->numericUpDown4->Text = "";
		this->numericUpDown5->Text = "";
		this->numericUpDown2->Text = "";
		this->textBox5->Text = "0";
		this->textBox5->Text = "0";
		this->textBox6->Text = "0";
		this->textBox7->Text = "0";
		this->numericUpDown3->Text = "";
		this->comboBox1->Text = "";
		this->comboBox2->Text = "";
	}
	public: void MyFormCom::refreshArticles() {
		this->comboBox1->Items->Clear();
		this->dataGridView1->Refresh();
		this->oDs = this->oStock->afficherToutArticle("Rsl");
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "Rsl";

		int i;
		for (i = 0; i < (dataGridView1->Rows->Count) - 1; i++)
		{
			this->comboBox1->Items->Add(this->dataGridView1->Rows[i]->Cells[0]->Value->ToString() + " " + this->dataGridView1->Rows[i]->Cells[1]->Value->ToString());
		}
		
	}

	public: void MyFormCom::refreshMoyensPaiement() {
		this->comboBox2->Items->Clear();
		this->dataGridView1->Refresh();
		this->oDs = this->oCad->getRows("SELECT modePaiement FROM moyen_paiement;", "Rsl");
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "Rsl";

		int i;
		for (i = 0; i < (dataGridView1->Rows->Count) - 1; i++)
		{
		 this->comboBox2->Items->Add(this->dataGridView1->Rows[i]->Cells[0]->Value->ToString());
		}
	}

	private: System::Void return_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		refreshCommande();
	}
private: System::Void CreCom_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->panier[0]->idArticle == 0) {
		MessageBox::Show(L"Pas d'articles dans le panier.", L"Message",
		MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	else{
	if (this->numericUpDown5->Text == "" || this->numericUpDown2->Text == "" || this->numericUpDown3->Text == "" || this->comboBox2->Text == "")
	{
		MessageBox::Show(L"Un ou plusieurs champs ne sont pas remplis !", L"Message",
		MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}

	else {
		this->dataGridView1->Refresh();
		this->oDs = this->oClient->afficherUn("fu", System::Convert::ToInt64(this->numericUpDown5->Text));
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "fu";
		if (this->dataGridView1->Rows->Count == 1)
		{
			MessageBox::Show(L"Client inconnu.", L"Message",
			MessageBoxButtons::OK, MessageBoxIcon::Warning);
			refreshCommande();
		}
		else {
			this->dataGridView1->Refresh();
			this->oDs = this->oClient->afficherAdresseLivraison("fu", System::Convert::ToInt64(this->numericUpDown5->Text), System::Convert::ToInt64(this->numericUpDown3->Text));
			this->dataGridView1->DataSource = this->oDs;
			this->dataGridView1->DataMember = "fu";
			if (this->dataGridView1->Rows->Count == 1)
			{
				MessageBox::Show(L"Adresse de livraison inconnue.", L"Message",
				MessageBoxButtons::OK, MessageBoxIcon::Warning);
				refreshCommande();
			}
			else {
				this->dataGridView1->Refresh();
				this->oDs = this->oClient->afficherAdresseFacturation("fu", System::Convert::ToInt64(this->numericUpDown5->Text), System::Convert::ToInt64(this->numericUpDown2->Text));
				this->dataGridView1->DataSource = this->oDs;
				this->dataGridView1->DataMember = "fu";
				if (this->dataGridView1->Rows->Count == 1)
				{
					MessageBox::Show(L"Adresse de facturation inconnue.", L"Message",
					MessageBoxButtons::OK, MessageBoxIcon::Warning);
					refreshCommande();
				}
				else {
					System::String^ sql;

					System::String^ date = this->dateTimePicker1->Text + " " + this->dateTimePicker1->Value.ToShortTimeString();
					sql = this->oCommande->creer(System::Convert::ToInt64(this->numericUpDown5->Text), date, System::Convert::ToInt64(this->numericUpDown3->Text), System::Convert::ToInt64(this->numericUpDown2->Text), System::Convert::ToBoolean(this->checkBox1->Checked));
					sql += " DECLARE @idCommande INT = SCOPE_IDENTITY(); ";
					for (int k = 0; k < this->size; k++) {
						if (this->panier[k]->idArticle != 0)
						{
							sql += "INSERT INTO composer(idCommande, idArticle, quantite) SELECT @idCommande, " + this->panier[k]->idArticle + ", " + this->panier[k]->quantite + "; ";
							sql += "UPDATE stock SET quantiteArticle = quantiteArticle - " + this->panier[k]->quantite + " WHERE idArticle = " + this->panier[k]->idArticle + "; ";
						}
					}
					if (this->checkBox1->Checked == false) {

						sql += "INSERT INTO paiement (datePaiement, montantPaiement, idClient, idMoyenPaiement, idCommande) VALUES((SELECT dateCommande FROM commande WHERE idCommande = @idCommande), " + this->textBox7->Text + ", " + this->numericUpDown5->Text + ", (SELECT idMoyenPaiement FROM moyen_paiement WHERE modePaiement = '" + this->comboBox2->Text + "'), @idCommande); ";
					}
					else {
						int nbPaiements = 3;
						int intervalle = 1;
						sql += "DECLARE @counter INT, @dateDep DATETIME; SET @counter = 1 SET @dateDep = (SELECT dateCommande FROM commande WHERE idCommande = @idCommande); WHILE(@counter <= " + nbPaiements + ") BEGIN INSERT INTO paiement(datePaiement, montantPaiement, idClient, idMoyenPaiement, idCommande) VALUES (@dateDep, " + this->textBox7->Text + "/"+nbPaiements+", " + this->numericUpDown5->Text + ", (SELECT idMoyenPaiement FROM moyen_paiement WHERE modePaiement = '" + this->comboBox2->Text + "'), @idCommande) SET @dateDep = DATEADD(MONTH, " + intervalle + ", @dateDep) SET @counter = @counter + 1 END; ";
					}
					sql += " UPDATE commande SET nombreArticles = " + this->nbArticles + ", montantHT = "+this->textBox5->Text+", montantTVA = "+this->textBox6->Text+", montantTTC = "+this->textBox7->Text+", refCommande = (SELECT(UPPER(SUBSTRING(prenomClient, 1, 2) + SUBSTRING(nomClient, 1, 2) + CONVERT(varchar(5), YEAR('" + date + "')) + SUBSTRING(ville.ville, 1, 3) + CONVERT(varchar(10), @idCommande))) FROM client, ville, adresse WHERE idClient = " + this->numericUpDown5->Text + " AND adresse.idAdresse = " + this->numericUpDown3->Text + " AND adresse.idVille = ville.idVille) WHERE idCommande = @idCommande; ";
					sql += "INSERT INTO facture (idClient, idCommande, idSociete) VALUES (" + this->numericUpDown5->Text + ", @idCommande, 1); ";
					this->oCad->actionRows(sql);
				
					MessageBox::Show(L"Commande créée !", L"Message",
					MessageBoxButtons::OK, MessageBoxIcon::Warning);

					for (int h = 0; h < size; h++) {
						this->panier[h]->idArticle = 0;
						this->panier[h]->quantite = 0;
					}
					clearCommande();

					refreshCommande();
					this->i = 0;
					this->nbArticles = 0;
					
				}
			}
		}
	}
	}
}
private: System::Void AffCom_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->numericUpDown4->Text == "")
	{
		MessageBox::Show(L"ID manquant.", L"Message",
		MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	else {
		this->dataGridView1->Refresh();
		this->oDs = this->oCommande->afficherUne("Rsl", System::Convert::ToInt64(this->numericUpDown4->Text));
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "Rsl";
		if (this->dataGridView1->Rows->Count == 1)
		{
			MessageBox::Show(L"ID inconnu.", L"Message",
			MessageBoxButtons::OK, MessageBoxIcon::Warning);
			refreshCommande();
		}
		else {
			this->Hide();
			MyFormComSelec^ Form = gcnew MyFormComSelec(this->numericUpDown4->Text);
			Form->ShowDialog();
			refreshCommande();
			this->Show();
		}
	}
}
private: System::Void numericUpDown4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	MyFormCli^ Form = gcnew MyFormCli;
	Form->ShowDialog();
	this->Show();
}
private: System::Void btnRecCom_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oCad = gcnew NS_Comp_Data::cad();
	this->dataGridView1->Refresh();

	System::String^ sql;

	sql = "SELECT * FROM commande WHERE idCommande = idCommande ";
	if (this->numericUpDown3->Text != "") { sql += "AND adresseLivraison = '" + this->numericUpDown3->Text + "' "; }
	if (this->numericUpDown2->Text != "") { sql += "AND adresseFacturation = '" + this->numericUpDown2->Text + "' "; }
	if (this->checkBox2->Checked == true)
	{
		sql += "AND dateCommande = '" + this->dateTimePicker1->Text + "' ";
	}
	if (this->checkBox1->Checked == true)
	{
		sql += "AND plusieursPaiments = '" + this->checkBox1->Checked + "' ";
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
int i = 0;
int f = 0;
int m = 0;
int nbArticles = 0;
int quantiteDeBase;
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->numericUpDown5->Text == "") {
			MessageBox::Show(L"N'oubliez pas de préciser <ID client> pour appliquer la remise.", L"Message",
			MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	else{
	if (this->comboBox1->Text == "")
	{
		MessageBox::Show(L"Choisissez un article.", L"Message",
		MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	else {
		if (this->nbArticles == size) {
			MessageBox::Show(L"Nombre d'articles maximum atteint.", L"Message",
				MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else {
			if (System::Convert::ToInt64(this->numericUpDown1->Text) > 0) {
				this->f = 0;
				this->m = 0;
				int actuel = 0;
				while (f < System::Convert::ToInt64(this->numericUpDown1->Text) && m <= size) {
					if (this->nbArticles == size) {
						MessageBox::Show(L"Nombre d'articles maximum atteint.", L"Message",
							MessageBoxButtons::OK, MessageBoxIcon::Warning);
						m = size + 1;
					}
					else {
						bool existant = false;
						int position = System::Convert::ToInt64(this->comboBox1->Text->IndexOf(" "));
						for (int d = 0; d <= i; d++)
						{
							if (System::Convert::ToInt64(this->comboBox1->Text->Substring(0, position)) == this->panier[d]->idArticle)
							{
								actuel = d;
								existant = true;
							}
						}
						if (existant == true)
						{
							ajoutArticles(actuel);
						}
						else
						{
							this->panier[i]->idArticle = System::Convert::ToInt64(this->comboBox1->Text->Substring(0, position));
							ajoutArticles(i);
							i++;
						}

					}
				}

			}
			else {
				MessageBox::Show(L"Quantité non précisée.", L"Message",
					MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
		}
	}
	}
}
	   private: void ajoutArticles(int indice)
	   {
		   int position = System::Convert::ToInt64(this->comboBox1->Text->IndexOf(" "));
		   this->dataGridView1->Refresh();
		   this->oDs = this->oStock->afficherUnArticle("Rsl", System::Convert::ToInt64(this->comboBox1->Text->Substring(0, position)));
		   this->dataGridView1->DataSource = this->oDs;
		   this->dataGridView1->DataMember = "Rsl";
		   if (f == 0) {
			   this->quantiteDeBase = this->panier[indice]->quantite;
		   }
		   if (System::Convert::ToInt64(this->dataGridView1->Rows[0]->Cells[3]->Value->ToString()) <= this->panier[indice]->quantite
			   || (System::Convert::ToInt64(this->dataGridView1->Rows[0]->Cells[3]->Value->ToString()) - this->quantiteDeBase) < System::Convert::ToInt64(this->numericUpDown1->Text)) {
			   MessageBox::Show(L"Quantité hors stock.", L"Message",
			   MessageBoxButtons::OK, MessageBoxIcon::Warning);
			   m = size + 1;
		   }
		   else {
			   if (f == 0) {
				   MessageBox::Show(L"Article(s) ajouté(s).", L"Message",
				   MessageBoxButtons::OK, MessageBoxIcon::Warning);
			   }
			   float remise;
			   //MontantHT
			   this->dataGridView1->Refresh();
			   this->oDs = this->oStock->afficherPrix("Rsl", this->panier[indice]->idArticle);
			   this->dataGridView1->DataSource = this->oDs;
			   this->dataGridView1->DataMember = "Rsl";
			   float montantHT = float::Parse(this->dataGridView1->Rows[0]->Cells[2]->Value->ToString());
			   this->textBox5->Text = System::Convert::ToString (float::Parse(this->textBox5->Text) + montantHT);

			   //TVA
			   this->dataGridView1->Refresh();
			   this->oDs = this->oStock->afficherTVA("Rsl", this->panier[indice]->idArticle);
			   this->dataGridView1->DataSource = this->oDs;
			   this->dataGridView1->DataMember = "Rsl";

			   this->textBox6->Text = System::Convert::ToString(float::Parse(this->textBox6->Text) + (float::Parse(this->dataGridView1->Rows[0]->Cells[5]->Value->ToString()) * montantHT));
			   //Remise(s)
			   if (this->numericUpDown5->Text == "") {
				   if (f == 0) {
					   MessageBox::Show(L"N'oubliez pas de préciser <ID client> pour appliquer la remise.", L"Message",
		  			   MessageBoxButtons::OK, MessageBoxIcon::Warning);
				   }
			   }
			   else
			   {
				   
				   //Remise anniversaire
				   this->dataGridView1->Refresh();
				   this->oDs = this->oCad->getRows("IF(SELECT MONTH(dates.date) FROM client, dates WHERE idClient = " + this->numericUpDown5->Text + " AND idDate = dateNaissance) = MONTH('" + this->dateTimePicker1->Text + "') AND (SELECT DAY(dates.date) FROM client, dates WHERE idClient = " + this->numericUpDown5->Text + " AND idDate = dateNaissance) = DAY('" + this->dateTimePicker1->Text + "') BEGIN SELECT 0.1; END ;", "Rsl");
				   this->dataGridView1->DataSource = this->oDs;
				   this->dataGridView1->DataMember = "Rsl";
				   
				   if (this->dataGridView1->Rows->Count > 1)
				   {
					   remise = float::Parse(this->dataGridView1->Rows[0]->Cells[1]->Value->ToString());
					   
					   
				   }
				   else {
					   //Remise première commande
					   this->dataGridView1->Refresh();
					   this->oDs = this->oCad->getRows("IF (SELECT MONTH(MIN(dateCommande)) FROM client, commande, paiement WHERE client.idClient = " + this->numericUpDown5->Text + " AND client.idClient = paiement.idClient AND paiement.idCommande = commande.idCommande) = MONTH('" + this->dateTimePicker1->Text + "') AND (SELECT DAY(MIN(dateCommande)) FROM client, commande, paiement WHERE client.idClient = " + this->numericUpDown5->Text + " AND client.idClient = paiement.idClient AND paiement.idCommande = commande.idCommande) = DAY('" + this->dateTimePicker1->Text + "') BEGIN SELECT 0.05; END ;", "Rsl");
					   this->dataGridView1->DataSource = this->oDs;
					   this->dataGridView1->DataMember = "Rsl";

					   if (this->dataGridView1->Rows->Count > 1)
					   {
						   remise = float::Parse(this->dataGridView1->Rows[0]->Cells[1]->Value->ToString());
					   }
					   else {
						   remise = 0;
					   }
				   }
				   this->textBox4->Text = System::Convert::ToString(remise*100);
			   }


			   this->textBox7->Text = System::Convert::ToString(float::Parse(this->textBox5->Text) + float::Parse(this->textBox6->Text));
			   this->textBox7->Text = System::Convert::ToString(float::Parse(this->textBox7->Text) - (float::Parse(this->textBox7->Text)*remise));

			   this->panier[indice]->quantite++;
			   this->nbArticles++;

			   refreshPanier();
			   m++;
			   f++;
		   }
	   }
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	refreshArticles();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	refreshPanier();

}
private: void refreshPanier() {
	this->dataGridView1->Refresh();

	System::String^ sql = "";


	//if (this->numericUpDown5->Text != "") { sql += "AND idClient = '" + this->numericUpDown5->Text + "' "; }
	if (this->panier[0]->idArticle == 0) {
		MessageBox::Show(L"Pas d'articles dans le panier.", L"Message",
		MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	else {
		sql = "SELECT * FROM stock WHERE idArticle != 0 ";
		sql += " AND idArticle = " + this->panier[0]->idArticle + " ";
		for (int k = 1; k < this->panier[0]->quantite; k++)
		{
			sql += "UNION ALL SELECT * FROM stock WHERE idArticle = " + this->panier[0]->idArticle + " ";
		}
		

		for (int j = 1; j < this->size; j++)
		{
			if (this->panier[j]->idArticle != 0) 
			{
				for (int z = 0; z < this->panier[j]->quantite; z++)
				{
					sql += "UNION ALL SELECT * FROM stock WHERE idArticle = " + this->panier[j]->idArticle + " ";
				}
			}
		}

		sql += ";";
		
		this->oDs = this->oCad->getRows(sql, "Rsl");
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "Rsl";
	}
}
///////////////
// Suppression
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->panier[0]->idArticle == 0) {
		MessageBox::Show(L"Pas d'articles dans le panier.", L"Message",
		MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	else {
		for (int h = 0; h < size; h++) {
			this->panier[h]->idArticle = 0;
			this->panier[h]->quantite = 0;
		}
		MessageBox::Show(L"Panier supprimé !", L"Message",
		MessageBoxButtons::OK, MessageBoxIcon::Warning);
		this->nbArticles = 0;
		this->i = 0;
	}
}
private: void refreshCommande() {
	this->dataGridView1->Refresh();
	this->oDs = this->oCommande->afficherTout("Rsl");
	this->dataGridView1->DataSource = this->oDs;
	this->dataGridView1->DataMember = "Rsl";
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	MyFormSto^ Form = gcnew MyFormSto;
	Form->ShowDialog();
	this->Show();
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->numericUpDown5->Text == "")
	{
		MessageBox::Show(L"ID manquant.", L"Message",
		MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	else {
		this->dataGridView1->Refresh();
		this->oDs = this->oClient->afficherUn("Rsl", System::Convert::ToInt64(this->numericUpDown5->Text));
		this->dataGridView1->DataSource = this->oDs;
		this->dataGridView1->DataMember = "Rsl";
		if (this->dataGridView1->Rows->Count == 1)
		{
			MessageBox::Show(L"ID inconnu.", L"Message",
			MessageBoxButtons::OK, MessageBoxIcon::Warning);
			refreshCommande();
		}
		else {
			this->Hide();
			MyFormCliAdrLiv^ Form = gcnew MyFormCliAdrLiv(this->numericUpDown5->Text);
			Form->ShowDialog();
			this->Show();
		}
	}
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
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
		}
		else {
			this->Hide();
			MyFormCliAdrFac^ Form = gcnew MyFormCliAdrFac(this->numericUpDown5->Text);
			Form->ShowDialog();
			this->Show();
		}
	}
}
private: System::Void comboBox1_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	this->comboBox1->Text = "";
}
private: System::Void comboBox2_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	this->comboBox2->Text = "";
}
};
}
