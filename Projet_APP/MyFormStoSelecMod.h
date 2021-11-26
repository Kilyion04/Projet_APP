#pragma once

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
			//
			//TODO: ajoutez ici le code du constructeur
			//
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
	private: System::Windows::Forms::Button^ btnModCli;
	private: System::Windows::Forms::Button^ btnReturn;


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
			this->SuspendLayout();
			// 
			// btnModCli
			// 
			this->btnModCli->Location = System::Drawing::Point(197, 226);
			this->btnModCli->Name = L"btnModCli";
			this->btnModCli->Size = System::Drawing::Size(75, 23);
			this->btnModCli->TabIndex = 41;
			this->btnModCli->Text = L"Modifier";
			this->btnModCli->UseVisualStyleBackColor = true;
			this->btnModCli->Click += gcnew System::EventHandler(this, &MyFormStoSelecMod::ModCli_Click);
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
			// MyFormStoSelecMod
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->btnReturn);
			this->Controls->Add(this->btnModCli);
			this->Name = L"MyFormStoSelecMod";
			this->Text = L"MyFormStoSelecMod";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ModCli_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void Return_Click(System::Object^ sender, System::EventArgs^ e) {
		//la requete SQL tu connais
		this->Close();
	}
};
}
