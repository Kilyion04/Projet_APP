#pragma once

namespace NS_Comp_Personne
{
	ref class personne
	{
	protected:
		System::String^ nom;
		System::String^ prenom;

	public:
		virtual void creer(void) = 0;
		virtual void modifier(void)= 0;
		virtual void supprimer(void) = 0;
		virtual void afficher(void) = 0;
		
		void setNom(System::String^);
		void setPrenom(System::String^);
	};
}
