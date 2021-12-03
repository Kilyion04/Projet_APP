#pragma once

namespace NS_Comp_Mappage_Commande
{
	ref class mapCommande
	{
	private:
		System::String^ sSql;

		int idCommande;
		int idClient;
		bool plusieursFois;
		System::String^ dateCommande;
		System::String^ dateEmission;
		System::String^ dateLivraison;
		System::String^ moyenPaiement;
		float montantHT;
		float montantTVA;
		float montantTTC;
		//NS_Comp_Mappage_Stock::mapStock^** panier;
		int adresseLivraison;
		int adresseFacturation;


	public:
		mapCommande(void);
		System::String^ creerCommande(void);
		System::String^ modifierCommande(void);
		System::String^ supprimerCommande(void);
		System::String^ afficherCommande(void);
		System::String^ afficherToutCommande(void);
		System::String^ afficherUneCommande(void);
		System::String^ ajouterArticle(void);
		System::String^ afficherPanier(void);


		void setIdCommande(int);
		void setIdClient(int);
		void setPlusieursFois(bool);
		void setDateCommande(System::String^);
		void setDateEmission(System::String^);
		void setDateLivraison(System::String^);
		void setMoyenPaiement(System::String^);
		void setAdresseLivraison(int);
		void setAdresseFacturation(int);
		//float getMontantHT(void);
		//float getMontantHT(void);
		//float getMontantHT(void);
	};
}
