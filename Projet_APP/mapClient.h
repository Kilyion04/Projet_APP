#pragma once


namespace NS_Comp_Mappage_Client
{
	ref class mapClient
	{
	private:
		System::String^ sSql;

		System::String^ nom;
		System::String^ prenom;
		int idClient;
		ref struct adresseClient {
			System::String^ numero;
			System::String^ voie;
			System::String^ ville;
			System::String^ codePostal;
		}adresseClient;
		System::String^ dateNaissance;


	public:
		mapClient(void);
		System::String^ creerClient(void);
		System::String^ modifierClient(void);
		System::String^ supprimerClient(void);
		System::String^ afficherClient(void);
		System::String^ afficherToutClient(void);
		System::String^ afficherUnClient(void);


		void setNom(System::String^);
		void setPrenom(System::String^);
		void setIdClient(int);
		//void setAdresseClient(System::String^, System::String^, System::String^, System::String^);
		void setDateNaissance(System::String^);

	};
}

