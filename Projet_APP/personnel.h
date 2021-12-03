#pragma once

//include
#include "mapPersonnel.h"
#include "cad.h"

namespace NS_Comp_Personnel{
	ref class personnel
	{
	private:
		NS_Comp_Data::cad^ oCad;
		NS_Comp_Mappage_Personnel::mapPersonnel^ oMapPersonnel;
		/*/
		System::String^ nom;
		System::String^ prenom;
		int idPersonnel;
		int superieur;
		ref struct adressePersonnel {
			System::String^ numero;
			System::String^ voie;
			System::String^ ville;
			System::String^ codePostal;
		}adressePersonnel;
		array<int>^ dateEmbauche;
		/*/
	public:
		personnel(void);
		System::Data::DataSet^ afficherTout(System::String^, bool);
		void creer(System::String^, System::String^, int, System::String^, System::String^, System::String^, System::String^, System::String^);
		void modifier(int, System::String^, System::String^, int, System::String^, System::String^, System::String^, System::String^, int, int, int);
		void supprimer(int);
		System::Data::DataSet^ afficherUn(System::String^, int);
		//System::Data::DataSet^ afficher(int, System::String^, System::String^, int, System::String^, System::String^, System::String^, System::String^, int, int, int);
		

		/*/
		void setNom(System::String^);
		void setPrenom(System::String^);
		void setIdPersonnel(int);
		void setSuperieur(int);
		void setAdressePersonnel(System::String^, System::String^, System::String^, System::String^);
		void setDateEmbauche(int, int, int);/*/
	};
}