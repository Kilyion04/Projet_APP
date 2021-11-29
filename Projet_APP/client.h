#pragma once

//include
#include "mapClient.h"
#include "cad.h"	

namespace NS_Comp_Client {
	ref class client
	{
	private:
		NS_Comp_Data::cad^ oCad;
		NS_Comp_Mappage_Client::mapClient^ oMapClient;
		/*/
		System::String^ nom;
		System::String^ prenom;
		int idClient;
		int superieur;
		ref struct adresseClient {
			System::String^ numero;
			System::String^ voie;
			System::String^ ville;
			System::String^ codePostal;
		}adresseClient;
		array<int>^ dateEmbauche;
		/*/
	public:
		client(void);
		System::Data::DataSet^ afficherTout(System::String^);
		void creer(System::String^, System::String^, System::String^);
		void modifier(int, System::String^, System::String^, int, System::String^, System::String^, System::String^, System::String^, int, int, int);
		void supprimer(int);
		System::Data::DataSet^ afficherUn(System::String^, int);
		//System::Data::DataSet^ afficher(int, System::String^, System::String^, int, System::String^, System::String^, System::String^, System::String^, int, int, int);


		/*/
		void setNom(System::String^);
		void setPrenom(System::String^);
		void setIdClient(int);
		void setSuperieur(int);
		void setAdresseClient(System::String^, System::String^, System::String^, System::String^);
		void setDateEmbauche(int, int, int);/*/
	};
}
