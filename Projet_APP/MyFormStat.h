#pragma once

#include "cad.h"
#include "client.h"


namespace ProjetAPP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyFormStat
	/// </summary>
	public ref class MyFormStat : public System::Windows::Forms::Form
	{
	public:
		MyFormStat(void)
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
		~MyFormStat()
		{
			if (components)
			{
				delete components;
			}
		}
	private: NS_Comp_Client::client^ oClient;
	private: System::Windows::Forms::Button^ btnReturn;
	private: System::Windows::Forms::Button^ btnStat1;
	private: System::Windows::Forms::Button^ btnStat2;
	private: System::Windows::Forms::Button^ btnStat3;
	private: System::Windows::Forms::Button^ btnStat4;
	private: System::Windows::Forms::Button^ btnStat5;
	private: System::Windows::Forms::Button^ btnStat6;
	private: System::Windows::Forms::Button^ btnStat7;
	private: System::Windows::Forms::Button^ btnStat8;
	private: System::Windows::Forms::Button^ btnStat9;
	private: System::Windows::Forms::DataGridView^ StatView;

	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;


	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;

	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::ComboBox^ comboBox5;
	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;

	private: System::Windows::Forms::ComboBox^ comboBox9;
	private: System::Windows::Forms::ComboBox^ comboBox10;
	private: System::Windows::Forms::ComboBox^ comboBox11;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::ComboBox^ comboBox6;
	private: System::Windows::Forms::ComboBox^ comboBox7;
	private: System::Windows::Forms::ComboBox^ comboBox8;
	private: System::Windows::Forms::Label^ label14;

	private: NS_Comp_Data::cad^ oCad;
	private: System::Data::DataSet^ oDs;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown4;


	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->btnReturn = (gcnew System::Windows::Forms::Button());
			this->btnStat1 = (gcnew System::Windows::Forms::Button());
			this->btnStat2 = (gcnew System::Windows::Forms::Button());
			this->btnStat3 = (gcnew System::Windows::Forms::Button());
			this->btnStat4 = (gcnew System::Windows::Forms::Button());
			this->btnStat5 = (gcnew System::Windows::Forms::Button());
			this->btnStat6 = (gcnew System::Windows::Forms::Button());
			this->btnStat7 = (gcnew System::Windows::Forms::Button());
			this->btnStat8 = (gcnew System::Windows::Forms::Button());
			this->btnStat9 = (gcnew System::Windows::Forms::Button());
			this->StatView = (gcnew System::Windows::Forms::DataGridView());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->comboBox9 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox10 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox11 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox7 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox8 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->StatView))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"01", L"02", L"03", L"04", L"05", L"06", L"07",
					L"08", L"09", L"10", L"11", L"12"
			});
			this->comboBox1->Location = System::Drawing::Point(9, 78);
			this->comboBox1->Margin = System::Windows::Forms::Padding(4);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(151, 24);
			this->comboBox1->TabIndex = 14;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyFormStat::comboBox1_SelectedIndexChanged);
			this->comboBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyFormStat::comboBox1_KeyDown);
			this->comboBox1->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MyFormStat::comboBox1_KeyUp);
			// 
			// btnReturn
			// 
			this->btnReturn->Location = System::Drawing::Point(16, 15);
			this->btnReturn->Margin = System::Windows::Forms::Padding(4);
			this->btnReturn->Name = L"btnReturn";
			this->btnReturn->Size = System::Drawing::Size(100, 28);
			this->btnReturn->TabIndex = 2;
			this->btnReturn->Text = L"Retour";
			this->btnReturn->UseVisualStyleBackColor = true;
			this->btnReturn->Click += gcnew System::EventHandler(this, &MyFormStat::Return_Click);
			// 
			// btnStat1
			// 
			this->btnStat1->Location = System::Drawing::Point(24, 50);
			this->btnStat1->Margin = System::Windows::Forms::Padding(4);
			this->btnStat1->Name = L"btnStat1";
			this->btnStat1->Size = System::Drawing::Size(331, 28);
			this->btnStat1->TabIndex = 4;
			this->btnStat1->Text = L"Stat1";
			this->btnStat1->UseVisualStyleBackColor = true;
			this->btnStat1->Click += gcnew System::EventHandler(this, &MyFormStat::Stat1_Click);
			// 
			// btnStat2
			// 
			this->btnStat2->Location = System::Drawing::Point(8, 23);
			this->btnStat2->Margin = System::Windows::Forms::Padding(4);
			this->btnStat2->Name = L"btnStat2";
			this->btnStat2->Size = System::Drawing::Size(331, 28);
			this->btnStat2->TabIndex = 5;
			this->btnStat2->Text = L"Stat2";
			this->btnStat2->UseVisualStyleBackColor = true;
			this->btnStat2->Click += gcnew System::EventHandler(this, &MyFormStat::Stat2_Click);
			// 
			// btnStat3
			// 
			this->btnStat3->Location = System::Drawing::Point(24, 220);
			this->btnStat3->Margin = System::Windows::Forms::Padding(4);
			this->btnStat3->Name = L"btnStat3";
			this->btnStat3->Size = System::Drawing::Size(331, 28);
			this->btnStat3->TabIndex = 6;
			this->btnStat3->Text = L"Stat3";
			this->btnStat3->UseVisualStyleBackColor = true;
			this->btnStat3->Click += gcnew System::EventHandler(this, &MyFormStat::Stat3_Click);
			// 
			// btnStat4
			// 
			this->btnStat4->Location = System::Drawing::Point(24, 256);
			this->btnStat4->Margin = System::Windows::Forms::Padding(4);
			this->btnStat4->Name = L"btnStat4";
			this->btnStat4->Size = System::Drawing::Size(124, 28);
			this->btnStat4->TabIndex = 7;
			this->btnStat4->Text = L"Stat4";
			this->btnStat4->UseVisualStyleBackColor = true;
			this->btnStat4->Click += gcnew System::EventHandler(this, &MyFormStat::Stat4_Click);
			// 
			// btnStat5
			// 
			this->btnStat5->Location = System::Drawing::Point(24, 292);
			this->btnStat5->Margin = System::Windows::Forms::Padding(4);
			this->btnStat5->Name = L"btnStat5";
			this->btnStat5->Size = System::Drawing::Size(331, 28);
			this->btnStat5->TabIndex = 8;
			this->btnStat5->Text = L"Stat5";
			this->btnStat5->UseVisualStyleBackColor = true;
			this->btnStat5->Click += gcnew System::EventHandler(this, &MyFormStat::Stat5_Click);
			// 
			// btnStat6
			// 
			this->btnStat6->Location = System::Drawing::Point(24, 327);
			this->btnStat6->Margin = System::Windows::Forms::Padding(4);
			this->btnStat6->Name = L"btnStat6";
			this->btnStat6->Size = System::Drawing::Size(331, 28);
			this->btnStat6->TabIndex = 9;
			this->btnStat6->Text = L"Stat6";
			this->btnStat6->UseVisualStyleBackColor = true;
			this->btnStat6->Click += gcnew System::EventHandler(this, &MyFormStat::Stat6_Click);
			// 
			// btnStat7
			// 
			this->btnStat7->Location = System::Drawing::Point(24, 363);
			this->btnStat7->Margin = System::Windows::Forms::Padding(4);
			this->btnStat7->Name = L"btnStat7";
			this->btnStat7->Size = System::Drawing::Size(331, 28);
			this->btnStat7->TabIndex = 10;
			this->btnStat7->Text = L"Stat7";
			this->btnStat7->UseVisualStyleBackColor = true;
			this->btnStat7->Click += gcnew System::EventHandler(this, &MyFormStat::Stat7_Click);
			// 
			// btnStat8
			// 
			this->btnStat8->Location = System::Drawing::Point(24, 399);
			this->btnStat8->Margin = System::Windows::Forms::Padding(4);
			this->btnStat8->Name = L"btnStat8";
			this->btnStat8->Size = System::Drawing::Size(331, 28);
			this->btnStat8->TabIndex = 11;
			this->btnStat8->Text = L"Stat8";
			this->btnStat8->UseVisualStyleBackColor = true;
			this->btnStat8->Click += gcnew System::EventHandler(this, &MyFormStat::Stat8_Click);
			// 
			// btnStat9
			// 
			this->btnStat9->Location = System::Drawing::Point(8, 23);
			this->btnStat9->Margin = System::Windows::Forms::Padding(4);
			this->btnStat9->Name = L"btnStat9";
			this->btnStat9->Size = System::Drawing::Size(331, 28);
			this->btnStat9->TabIndex = 12;
			this->btnStat9->Text = L"Stat9";
			this->btnStat9->UseVisualStyleBackColor = true;
			this->btnStat9->Click += gcnew System::EventHandler(this, &MyFormStat::Stat9_Click);
			// 
			// StatView
			// 
			this->StatView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->StatView->Location = System::Drawing::Point(373, 15);
			this->StatView->Margin = System::Windows::Forms::Padding(4);
			this->StatView->Name = L"StatView";
			this->StatView->RowHeadersWidth = 51;
			this->StatView->Size = System::Drawing::Size(981, 412);
			this->StatView->TabIndex = 13;
			this->StatView->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyFormStat::StatView_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"2019", L"2020", L"2021", L"2022", L"2023", L"2024",
					L"2025", L"2026", L"2027", L"2028", L"2029", L"2030"
			});
			this->comboBox2->Location = System::Drawing::Point(187, 78);
			this->comboBox2->Margin = System::Windows::Forms::Padding(4);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(151, 24);
			this->comboBox2->TabIndex = 15;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyFormStat::comboBox2_SelectedIndexChanged);
			this->comboBox2->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MyFormStat::comboBox2_KeyUp);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(11, 54);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(36, 16);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Mois";
			this->label1->Click += gcnew System::EventHandler(this, &MyFormStat::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(183, 54);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(46, 16);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Année";
			this->label2->Click += gcnew System::EventHandler(this, &MyFormStat::label2_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->btnStat2);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->comboBox2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(16, 86);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(349, 118);
			this->groupBox1->TabIndex = 20;
			this->groupBox1->TabStop = false;
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyFormStat::groupBox1_Enter);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->groupBox5);
			this->groupBox2->Controls->Add(this->groupBox4);
			this->groupBox2->Controls->Add(this->groupBox3);
			this->groupBox2->Controls->Add(this->btnStat9);
			this->groupBox2->Location = System::Drawing::Point(16, 434);
			this->groupBox2->Margin = System::Windows::Forms::Padding(4);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(4);
			this->groupBox2->Size = System::Drawing::Size(665, 298);
			this->groupBox2->TabIndex = 21;
			this->groupBox2->TabStop = false;
			this->groupBox2->Enter += gcnew System::EventHandler(this, &MyFormStat::groupBox2_Enter);
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->numericUpDown4);
			this->groupBox5->Controls->Add(this->label10);
			this->groupBox5->Controls->Add(this->label11);
			this->groupBox5->Controls->Add(this->label12);
			this->groupBox5->Controls->Add(this->label13);
			this->groupBox5->Controls->Add(this->comboBox9);
			this->groupBox5->Controls->Add(this->comboBox10);
			this->groupBox5->Controls->Add(this->comboBox11);
			this->groupBox5->Location = System::Drawing::Point(9, 219);
			this->groupBox5->Margin = System::Windows::Forms::Padding(4);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Padding = System::Windows::Forms::Padding(4);
			this->groupBox5->Size = System::Drawing::Size(633, 71);
			this->groupBox5->TabIndex = 16;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"TVA test 3";
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->DecimalPlaces = 3;
			this->numericUpDown4->Location = System::Drawing::Point(11, 38);
			this->numericUpDown4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->numericUpDown4->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, System::Int32::MinValue });
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(112, 22);
			this->numericUpDown4->TabIndex = 26;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(8, 17);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(67, 16);
			this->label10->TabIndex = 18;
			this->label10->Text = L"Taux TVA";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(465, 17);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(128, 16);
			this->label11->TabIndex = 19;
			this->label11->Text = L"Démarque Inconnue";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(305, 17);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(127, 16);
			this->label12->TabIndex = 18;
			this->label12->Text = L"Remise commercial";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(145, 17);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(119, 16);
			this->label13->TabIndex = 17;
			this->label13->Text = L"Marge commercial";
			// 
			// comboBox9
			// 
			this->comboBox9->FormattingEnabled = true;
			this->comboBox9->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"2%", L"3%", L"5%" });
			this->comboBox9->Location = System::Drawing::Point(469, 38);
			this->comboBox9->Margin = System::Windows::Forms::Padding(4);
			this->comboBox9->Name = L"comboBox9";
			this->comboBox9->Size = System::Drawing::Size(151, 24);
			this->comboBox9->TabIndex = 16;
			this->comboBox9->SelectedIndexChanged += gcnew System::EventHandler(this, &MyFormStat::comboBox9_SelectedIndexChanged);
			// 
			// comboBox10
			// 
			this->comboBox10->FormattingEnabled = true;
			this->comboBox10->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"5%", L"6%" });
			this->comboBox10->Location = System::Drawing::Point(309, 37);
			this->comboBox10->Margin = System::Windows::Forms::Padding(4);
			this->comboBox10->Name = L"comboBox10";
			this->comboBox10->Size = System::Drawing::Size(151, 24);
			this->comboBox10->TabIndex = 16;
			this->comboBox10->SelectedIndexChanged += gcnew System::EventHandler(this, &MyFormStat::comboBox10_SelectedIndexChanged);
			// 
			// comboBox11
			// 
			this->comboBox11->FormattingEnabled = true;
			this->comboBox11->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"5%", L"10%", L"15%" });
			this->comboBox11->Location = System::Drawing::Point(149, 37);
			this->comboBox11->Margin = System::Windows::Forms::Padding(4);
			this->comboBox11->Name = L"comboBox11";
			this->comboBox11->Size = System::Drawing::Size(151, 24);
			this->comboBox11->TabIndex = 15;
			this->comboBox11->SelectedIndexChanged += gcnew System::EventHandler(this, &MyFormStat::comboBox11_SelectedIndexChanged);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->numericUpDown3);
			this->groupBox4->Controls->Add(this->label9);
			this->groupBox4->Controls->Add(this->label6);
			this->groupBox4->Controls->Add(this->label7);
			this->groupBox4->Controls->Add(this->label8);
			this->groupBox4->Controls->Add(this->comboBox6);
			this->groupBox4->Controls->Add(this->comboBox7);
			this->groupBox4->Controls->Add(this->comboBox8);
			this->groupBox4->Location = System::Drawing::Point(9, 140);
			this->groupBox4->Margin = System::Windows::Forms::Padding(4);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Padding = System::Windows::Forms::Padding(4);
			this->groupBox4->Size = System::Drawing::Size(633, 71);
			this->groupBox4->TabIndex = 15;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"TVA test 2";
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->DecimalPlaces = 3;
			this->numericUpDown3->Location = System::Drawing::Point(11, 38);
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->numericUpDown3->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, System::Int32::MinValue });
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(112, 22);
			this->numericUpDown3->TabIndex = 26;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(8, 17);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(67, 16);
			this->label9->TabIndex = 18;
			this->label9->Text = L"Taux TVA";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(465, 17);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(128, 16);
			this->label6->TabIndex = 19;
			this->label6->Text = L"Démarque Inconnue";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(305, 17);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(127, 16);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Remise commercial";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(145, 17);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(119, 16);
			this->label8->TabIndex = 17;
			this->label8->Text = L"Marge commercial";
			// 
			// comboBox6
			// 
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"2%", L"3%", L"5%" });
			this->comboBox6->Location = System::Drawing::Point(469, 38);
			this->comboBox6->Margin = System::Windows::Forms::Padding(4);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(151, 24);
			this->comboBox6->TabIndex = 16;
			this->comboBox6->SelectedIndexChanged += gcnew System::EventHandler(this, &MyFormStat::comboBox6_SelectedIndexChanged);
			// 
			// comboBox7
			// 
			this->comboBox7->FormattingEnabled = true;
			this->comboBox7->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"5%", L"6%" });
			this->comboBox7->Location = System::Drawing::Point(309, 37);
			this->comboBox7->Margin = System::Windows::Forms::Padding(4);
			this->comboBox7->Name = L"comboBox7";
			this->comboBox7->Size = System::Drawing::Size(151, 24);
			this->comboBox7->TabIndex = 16;
			this->comboBox7->SelectedIndexChanged += gcnew System::EventHandler(this, &MyFormStat::comboBox7_SelectedIndexChanged);
			// 
			// comboBox8
			// 
			this->comboBox8->FormattingEnabled = true;
			this->comboBox8->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"5%", L"10%", L"15%" });
			this->comboBox8->Location = System::Drawing::Point(149, 37);
			this->comboBox8->Margin = System::Windows::Forms::Padding(4);
			this->comboBox8->Name = L"comboBox8";
			this->comboBox8->Size = System::Drawing::Size(151, 24);
			this->comboBox8->TabIndex = 15;
			this->comboBox8->SelectedIndexChanged += gcnew System::EventHandler(this, &MyFormStat::comboBox8_SelectedIndexChanged);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->numericUpDown2);
			this->groupBox3->Controls->Add(this->label14);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Controls->Add(this->comboBox5);
			this->groupBox3->Controls->Add(this->comboBox4);
			this->groupBox3->Controls->Add(this->comboBox3);
			this->groupBox3->Location = System::Drawing::Point(9, 62);
			this->groupBox3->Margin = System::Windows::Forms::Padding(4);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(4);
			this->groupBox3->Size = System::Drawing::Size(633, 71);
			this->groupBox3->TabIndex = 14;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"TVA test1";
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->DecimalPlaces = 2;
			this->numericUpDown2->Location = System::Drawing::Point(11, 37);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, System::Int32::MinValue });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(112, 22);
			this->numericUpDown2->TabIndex = 25;
			this->numericUpDown2->ValueChanged += gcnew System::EventHandler(this, &MyFormStat::numericUpDown2_ValueChanged);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(8, 17);
			this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(67, 16);
			this->label14->TabIndex = 22;
			this->label14->Text = L"Taux TVA";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(465, 17);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(128, 16);
			this->label5->TabIndex = 19;
			this->label5->Text = L"Démarque Inconnue";
			this->label5->Click += gcnew System::EventHandler(this, &MyFormStat::label5_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(305, 17);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(127, 16);
			this->label4->TabIndex = 18;
			this->label4->Text = L"Remise commercial";
			this->label4->Click += gcnew System::EventHandler(this, &MyFormStat::label4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(145, 17);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(119, 16);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Marge commercial";
			this->label3->Click += gcnew System::EventHandler(this, &MyFormStat::label3_Click);
			// 
			// comboBox5
			// 
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"2%", L"3%", L"5%" });
			this->comboBox5->Location = System::Drawing::Point(469, 38);
			this->comboBox5->Margin = System::Windows::Forms::Padding(4);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(151, 24);
			this->comboBox5->TabIndex = 16;
			this->comboBox5->SelectedIndexChanged += gcnew System::EventHandler(this, &MyFormStat::comboBox5_SelectedIndexChanged);
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"5%", L"6%" });
			this->comboBox4->Location = System::Drawing::Point(309, 37);
			this->comboBox4->Margin = System::Windows::Forms::Padding(4);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(151, 24);
			this->comboBox4->TabIndex = 16;
			this->comboBox4->SelectedIndexChanged += gcnew System::EventHandler(this, &MyFormStat::comboBox4_SelectedIndexChanged);
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"5%", L"10%", L"15%" });
			this->comboBox3->Location = System::Drawing::Point(149, 37);
			this->comboBox3->Margin = System::Windows::Forms::Padding(4);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(151, 24);
			this->comboBox3->TabIndex = 15;
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &MyFormStat::comboBox3_SelectedIndexChanged);
			this->comboBox3->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MyFormStat::comboBox3_KeyUp);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(158, 259);
			this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(56, 16);
			this->label15->TabIndex = 23;
			this->label15->Text = L"ID Client";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(221, 257);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, System::Int32::MinValue });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(68, 22);
			this->numericUpDown1->TabIndex = 24;
			// 
			// MyFormStat
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1377, 742);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->StatView);
			this->Controls->Add(this->btnStat8);
			this->Controls->Add(this->btnStat7);
			this->Controls->Add(this->btnStat6);
			this->Controls->Add(this->btnStat5);
			this->Controls->Add(this->btnStat4);
			this->Controls->Add(this->btnStat3);
			this->Controls->Add(this->btnStat1);
			this->Controls->Add(this->btnReturn);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyFormStat";
			this->Text = L"MyFormStat";
			this->Load += gcnew System::EventHandler(this, &MyFormStat::MyFormStat_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->StatView))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Return_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void MyFormStat_Load(System::Object^ sender, System::EventArgs^ e) {
		this->oClient = gcnew NS_Comp_Client::client();
	}
	private: System::Void Stat1_Click(System::Object^ sender, System::EventArgs^ e) {

		this->oCad = gcnew NS_Comp_Data::cad();

		this->StatView->Refresh();

		System::String^ sql;

		sql = "SELECT AVG(montantTTC) FROM commande; ";

		this->oDs = this->oCad->getRows(sql, "Rsl");
		this->StatView->DataSource = this->oDs;
		this->StatView->DataMember = "Rsl";

	}
	private: System::Void Stat2_Click(System::Object^ sender, System::EventArgs^ e) {

		this->oCad = gcnew NS_Comp_Data::cad();

		this->StatView->Refresh();

		
		System::String^ sql;

		if (this->comboBox1->Text != "" && this->comboBox2->Text != "") {
			sql = "SELECT SUM(montantTTC) - SUM(montantHT) FROM commande WHERE month(commande.dateCommande) ='" + this->comboBox1->Text + "' AND year(commande.dateCommande) ='" + this->comboBox2->Text + "'; ";

			this->oDs = this->oCad->getRows(sql, "Rsl");
			this->StatView->DataSource = this->oDs;
			this->StatView->DataMember = "Rsl";
		}
		else {
			MessageBox::Show(L"Informations manquantes.", L"Message",
			MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}


	}
	private: System::Void Stat3_Click(System::Object^ sender, System::EventArgs^ e) {

		this->oCad = gcnew NS_Comp_Data::cad();

		this->StatView->Refresh();

		System::String^ sql;

		sql = "SELECT nomArticle FROM stock WHERE quantiteArticle < seuilReap;";

		this->oDs = this->oCad->getRows(sql, "Rsl");
		this->StatView->DataSource = this->oDs;
		this->StatView->DataMember = "Rsl";

	}
	private: System::Void Stat4_Click(System::Object^ sender, System::EventArgs^ e) {

		this->oCad = gcnew NS_Comp_Data::cad();

		this->StatView->Refresh();
		if (this->numericUpDown1->Text == "0")
		{
			MessageBox::Show(L"ID manquant.", L"Message",
			MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else {
			this->StatView->Refresh();
			this->oDs = this->oClient->afficherUn("fu", System::Convert::ToInt64(this->numericUpDown1->Text));
			this->StatView->DataSource = this->oDs;
			this->StatView->DataMember = "fu";
			if (this->StatView->Rows->Count == 1)
			{
				MessageBox::Show(L"ID inconnu.", L"Message",
				MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			else {
				System::String^ sql;

				sql = "SELECT SUM(montantTTC) FROM client INNER JOIN facture ON client.idClient = facture.idClient INNER JOIN commande ON facture.idCommande = commande.idCommande WHERE " + this->numericUpDown1->Text + " = client.idClient; ";

				this->oDs = this->oCad->getRows(sql, "Rsl");
				this->StatView->DataSource = this->oDs;
				this->StatView->DataMember = "Rsl";
			}
		}
		

	}
	private: System::Void Stat5_Click(System::Object^ sender, System::EventArgs^ e) {

		this->oCad = gcnew NS_Comp_Data::cad();

		this->StatView->Refresh();

		System::String^ sql;

		sql = "SELECT TOP 10 nomArticle, SUM(quantite) AS quantite FROM composer INNER JOIN stock ON (stock.idArticle = composer.idArticle) GROUP BY composer.idArticle, nomArticle ORDER BY quantite DESC ; ";

		this->oDs = this->oCad->getRows(sql, "Rsl");
		this->StatView->DataSource = this->oDs;
		this->StatView->DataMember = "Rsl";

	}
	private: System::Void Stat6_Click(System::Object^ sender, System::EventArgs^ e) {

		this->oCad = gcnew NS_Comp_Data::cad();

		this->StatView->Refresh();

		System::String^ sql;

		sql = "SELECT TOP 10 nomArticle, SUM(quantite) AS quantite FROM composer INNER JOIN stock ON (stock.idArticle = composer.idArticle) GROUP BY composer.idArticle, nomArticle ORDER BY quantite ASC ; ";

		this->oDs = this->oCad->getRows(sql, "Rsl");
		this->StatView->DataSource = this->oDs;
		this->StatView->DataMember = "Rsl";

	}
	private: System::Void Stat7_Click(System::Object^ sender, System::EventArgs^ e) {

		this->oCad = gcnew NS_Comp_Data::cad();

		this->StatView->Refresh();

		System::String^ sql;

		sql = "SELECT SUM(prixArticle*quantiteArticle) AS valeurComerciale FROM stock; ";

		this->oDs = this->oCad->getRows(sql, "Rsl");
		this->StatView->DataSource = this->oDs;
		this->StatView->DataMember = "Rsl";

	}
	private: System::Void Stat8_Click(System::Object^ sender, System::EventArgs^ e) {

		this->oCad = gcnew NS_Comp_Data::cad();

		this->StatView->Refresh();

		System::String^ sql;

		sql = "SELECT SUM(prixArticle*(1+tauxTVA)*quantiteArticle) AS valeurDAchat FROM stock; ";

		this->oDs = this->oCad->getRows(sql, "Rsl");
		this->StatView->DataSource = this->oDs;
		this->StatView->DataMember = "Rsl";

	}
	private: System::Void Stat9_Click(System::Object^ sender, System::EventArgs^ e) {

		this->oCad = gcnew NS_Comp_Data::cad();

		this->StatView->Refresh();

		System::String^ sql;

		

		sql = "SELECT SUM(prixArticle*quantiteArticle + (prixArticle * quantiteArticle * (1+(" + this->numericUpDown2->Text + "/100)) - prixArticle * quantiteArticle) + (prixArticle * quantiteArticle * (1+(" + this->comboBox3->Text->Substring(0, this->comboBox3->Text->IndexOf("%")) + "/100)) - prixArticle * quantiteArticle) + (prixArticle * quantiteArticle * (1+(" + this->comboBox4->Text->Substring(0, this->comboBox4->Text->IndexOf("%")) + "/100)) - prixArticle * quantiteArticle) + (prixArticle * quantiteArticle * (1+(" + this->comboBox5->Text->Substring(0, this->comboBox5->Text->IndexOf("%")) + "/100)) - prixArticle * quantiteArticle)) AS valeurComerciale1 FROM stock; SELECT SUM(prixArticle * quantiteArticle + (prixArticle * quantiteArticle * (1+(" + this->numericUpDown3->Text + "/100)) - prixArticle * quantiteArticle) + (prixArticle * quantiteArticle * (1+(" + this->comboBox8->Text->Substring(0, this->comboBox8->Text->IndexOf("%")) + "/100)) - prixArticle * quantiteArticle) + (prixArticle * quantiteArticle * (1+(" + this->comboBox7->Text->Substring(0, this->comboBox7->Text->IndexOf("%")) + "/100)) - prixArticle * quantiteArticle) + (prixArticle * quantiteArticle * (1+(" + this->comboBox6->Text->Substring(0, this->comboBox6->Text->IndexOf("%")) + "/100)) - prixArticle * quantiteArticle)) AS valeurComerciale2 FROM stock; SELECT SUM(prixArticle * quantiteArticle + (prixArticle * quantiteArticle * (1+(" + this->numericUpDown4->Text + "/100))  - prixArticle * quantiteArticle) + (prixArticle * quantiteArticle * (1+(" + this->comboBox11->Text->Substring(0, this->comboBox11->Text->IndexOf("%")) + "/100)) - prixArticle * quantiteArticle) + (prixArticle * quantiteArticle * (1+(" + this->comboBox10->Text->Substring(0, this->comboBox10->Text->IndexOf("%")) + "/100)) - prixArticle * quantiteArticle) + (prixArticle * quantiteArticle * (1+(" + this->comboBox9->Text->Substring(0, this->comboBox9->Text->IndexOf("%")) + "/100)) - prixArticle * quantiteArticle)) AS valeurComerciale3 FROM stock; ";

		this->oDs = this->oCad->getRows(sql, "Rsl");
		
		this->StatView->DataSource = this->oDs;
		this->StatView->DataMember = "Rsl";

	}
	private: System::Void StatView_Click(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void groupBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void numericUpDown3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox5_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void numericUpDown2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void numericUpDown4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox4_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox8_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox7_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox6_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox11_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox10_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox9_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void comboBox1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	
}
private: System::Void comboBox1_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	this->comboBox1->Text = "";
}
private: System::Void comboBox2_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	this->comboBox2->Text = "";
}
private: System::Void comboBox3_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	this->comboBox3->Text = "";
}
private: System::Void comboBox4_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	this->comboBox4->Text = "";
}
private: System::Void comboBox5_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	this->comboBox5->Text = "";
}
private: System::Void comboBox6_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	this->comboBox6->Text = "";
}
private: System::Void comboBox7_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	this->comboBox7->Text = "";
}
private: System::Void comboBox8_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	this->comboBox8->Text = "";
}
private: System::Void comboBox9_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	this->comboBox9->Text = "";
}
private: System::Void comboBox10_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	this->comboBox10->Text = "";
}
private: System::Void comboBox11_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	this->comboBox11->Text = "";
}
private: System::Void numericUpDown2_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
