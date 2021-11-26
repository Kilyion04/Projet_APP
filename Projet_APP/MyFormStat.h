#pragma once

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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->StatView))->BeginInit();
			this->SuspendLayout();
			// 
			// btnReturn
			// 
			this->btnReturn->Location = System::Drawing::Point(12, 12);
			this->btnReturn->Name = L"btnReturn";
			this->btnReturn->Size = System::Drawing::Size(75, 23);
			this->btnReturn->TabIndex = 2;
			this->btnReturn->Text = L"retour";
			this->btnReturn->UseVisualStyleBackColor = true;
			this->btnReturn->Click += gcnew System::EventHandler(this, &MyFormStat::Return_Click);
			// 
			// btnStat1
			// 
			this->btnStat1->Location = System::Drawing::Point(12, 41);
			this->btnStat1->Name = L"btnStat1";
			this->btnStat1->Size = System::Drawing::Size(248, 23);
			this->btnStat1->TabIndex = 4;
			this->btnStat1->Text = L"Stat1";
			this->btnStat1->UseVisualStyleBackColor = true;
			this->btnStat1->Click += gcnew System::EventHandler(this, &MyFormStat::Stat1_Click);
			// 
			// btnStat2
			// 
			this->btnStat2->Location = System::Drawing::Point(12, 70);
			this->btnStat2->Name = L"btnStat2";
			this->btnStat2->Size = System::Drawing::Size(248, 23);
			this->btnStat2->TabIndex = 5;
			this->btnStat2->Text = L"Stat2";
			this->btnStat2->UseVisualStyleBackColor = true;
			this->btnStat2->Click += gcnew System::EventHandler(this, &MyFormStat::Stat2_Click);
			// 
			// btnStat3
			// 
			this->btnStat3->Location = System::Drawing::Point(12, 99);
			this->btnStat3->Name = L"btnStat3";
			this->btnStat3->Size = System::Drawing::Size(248, 23);
			this->btnStat3->TabIndex = 6;
			this->btnStat3->Text = L"Stat3";
			this->btnStat3->UseVisualStyleBackColor = true;
			this->btnStat3->Click += gcnew System::EventHandler(this, &MyFormStat::Stat3_Click);
			// 
			// btnStat4
			// 
			this->btnStat4->Location = System::Drawing::Point(12, 128);
			this->btnStat4->Name = L"btnStat4";
			this->btnStat4->Size = System::Drawing::Size(248, 23);
			this->btnStat4->TabIndex = 7;
			this->btnStat4->Text = L"Stat4";
			this->btnStat4->UseVisualStyleBackColor = true;
			this->btnStat4->Click += gcnew System::EventHandler(this, &MyFormStat::Stat4_Click);
			// 
			// btnStat5
			// 
			this->btnStat5->Location = System::Drawing::Point(12, 157);
			this->btnStat5->Name = L"btnStat5";
			this->btnStat5->Size = System::Drawing::Size(248, 23);
			this->btnStat5->TabIndex = 8;
			this->btnStat5->Text = L"Stat5";
			this->btnStat5->UseVisualStyleBackColor = true;
			this->btnStat5->Click += gcnew System::EventHandler(this, &MyFormStat::Stat5_Click);
			// 
			// btnStat6
			// 
			this->btnStat6->Location = System::Drawing::Point(12, 186);
			this->btnStat6->Name = L"btnStat6";
			this->btnStat6->Size = System::Drawing::Size(248, 23);
			this->btnStat6->TabIndex = 9;
			this->btnStat6->Text = L"Stat6";
			this->btnStat6->UseVisualStyleBackColor = true;
			this->btnStat6->Click += gcnew System::EventHandler(this, &MyFormStat::Stat6_Click);
			// 
			// btnStat7
			// 
			this->btnStat7->Location = System::Drawing::Point(12, 215);
			this->btnStat7->Name = L"btnStat7";
			this->btnStat7->Size = System::Drawing::Size(248, 23);
			this->btnStat7->TabIndex = 10;
			this->btnStat7->Text = L"Stat7";
			this->btnStat7->UseVisualStyleBackColor = true;
			this->btnStat7->Click += gcnew System::EventHandler(this, &MyFormStat::Stat7_Click);
			// 
			// btnStat8
			// 
			this->btnStat8->Location = System::Drawing::Point(12, 244);
			this->btnStat8->Name = L"btnStat8";
			this->btnStat8->Size = System::Drawing::Size(248, 23);
			this->btnStat8->TabIndex = 11;
			this->btnStat8->Text = L"Stat8";
			this->btnStat8->UseVisualStyleBackColor = true;
			this->btnStat8->Click += gcnew System::EventHandler(this, &MyFormStat::Stat8_Click);
			// 
			// btnStat9
			// 
			this->btnStat9->Location = System::Drawing::Point(12, 273);
			this->btnStat9->Name = L"btnStat9";
			this->btnStat9->Size = System::Drawing::Size(248, 23);
			this->btnStat9->TabIndex = 12;
			this->btnStat9->Text = L"Stat9";
			this->btnStat9->UseVisualStyleBackColor = true;
			this->btnStat9->Click += gcnew System::EventHandler(this, &MyFormStat::Stat9_Click);
			// 
			// StatView
			// 
			this->StatView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->StatView->Location = System::Drawing::Point(266, 12);
			this->StatView->Name = L"StatView";
			this->StatView->Size = System::Drawing::Size(499, 285);
			this->StatView->TabIndex = 13;
			this->StatView->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyFormStat::StatView_Click);
			// 
			// MyFormStat
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(777, 309);
			this->Controls->Add(this->StatView);
			this->Controls->Add(this->btnStat9);
			this->Controls->Add(this->btnStat8);
			this->Controls->Add(this->btnStat7);
			this->Controls->Add(this->btnStat6);
			this->Controls->Add(this->btnStat5);
			this->Controls->Add(this->btnStat4);
			this->Controls->Add(this->btnStat3);
			this->Controls->Add(this->btnStat2);
			this->Controls->Add(this->btnStat1);
			this->Controls->Add(this->btnReturn);
			this->Name = L"MyFormStat";
			this->Text = L"MyFormStat";
			this->Load += gcnew System::EventHandler(this, &MyFormStat::MyFormStat_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->StatView))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Return_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void MyFormStat_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Stat1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Stat2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Stat3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Stat4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Stat5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Stat6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Stat7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Stat8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Stat9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void StatView_Click(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
