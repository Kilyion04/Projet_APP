#pragma once

#include "mapCommande.h"
#include "cad.h"

namespace NS_Comp_Commande {
	ref class commande
	{
	private:
		NS_Comp_Data::cad^ oCad;
		NS_Comp_Mappage_Commande::mapCommande^ oMapCommande;
		
	public:
		int i;
		commande(void);
		System::Data::DataSet^ afficherTout(System::String^);
		System::String^ creer(int, System::String^, int, int, bool);
		void modifier();
		void supprimer(int);
		System::Data::DataSet^ afficherUne(System::String^, int);
		void ajouterArticle(System::String^);
		//System::Data::DataSet^ afficherPanier(void);
	};
}