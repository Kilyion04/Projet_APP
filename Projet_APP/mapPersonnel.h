#pragma once

namespace NS_Comp_Mappage_Personnel
{
	ref class mapPersonnel
	{
	private:
		System::String^ sSql;
		
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
		System::String^ dateEmbauche;
		

	public:
		mapPersonnel(void);
		System::String^ creerPersonnel(void);
		System::String^ modifierPersonnel(void);
		System::String^ supprimerPersonnel(void);
		System::String^ afficherPersonnel(void);
		System::String^ afficherToutPersonnel(void);
		System::String^ afficherUnPersonnel(void);

		
		void setNom(System::String^);
		void setPrenom(System::String^);
		void setIdPersonnel(int);
		void setSuperieur(int);
		void setAdressePersonnel(System::String^, System::String^, System::String^, System::String^);
		void setDateEmbauche(System::String^);
		
	};
}
