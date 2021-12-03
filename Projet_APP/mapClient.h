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
		int adresseLivraison;
		int adresseFacturation;
		bool clientEtat;


	public:
		mapClient(void);
		System::String^ creerClient(void);
		System::String^ modifierClient(void);
		System::String^ supprimerClient(void);
		System::String^ afficherClient(void);
		System::String^ afficherToutClient(void);
		System::String^ afficherUnClient(void);
		System::String^ afficherAdresseLivraison(void);
		System::String^ afficherAdresseFacturation(void);



		void setNom(System::String^);
		void setPrenom(System::String^);
		void setIdClient(int);
		void setClientEtat(bool);
		void setDateNaissance(System::String^);
		void setAdresseLivraison(int);
		void setAdresseFacturation(int);

	};
}

