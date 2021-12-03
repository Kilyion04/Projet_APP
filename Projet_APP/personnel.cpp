// include
#include "pch.h"
#include "personnel.h"

NS_Comp_Personnel::personnel::personnel(void)
{
	this->oCad = gcnew NS_Comp_Data::cad();
	this->oMapPersonnel = gcnew NS_Comp_Mappage_Personnel::mapPersonnel();
	
}

void NS_Comp_Personnel::personnel::creer(System::String^ nom, System::String^ prenom, int superieur, System::String^ numero, System::String^ voie, System::String^ ville, System::String^ codePostal ,System::String^ dateEmbauche)
{
	
	System::String^ sql;
	this->oMapPersonnel->setNom(nom);
	this->oMapPersonnel->setPrenom(prenom);
	this->oMapPersonnel->setSuperieur(superieur);
	this->oMapPersonnel->setAdressePersonnel(numero, voie, ville, codePostal);
	this->oMapPersonnel->setDateEmbauche(dateEmbauche);
	sql = this->oMapPersonnel->creerPersonnel();
	this->oCad->actionRows(sql);
	
	
}

void NS_Comp_Personnel::personnel::modifier(int idPersonnel,System::String^ nom, System::String^ prenom, int superieur, System::String^ numero, System::String^ voie, System::String^ ville, System::String^ codePostal, int jour, int mois, int annee)
{

}

void NS_Comp_Personnel::personnel::supprimer(int idPersonnel)
{
	System::String^ sql;

	this->oMapPersonnel->setIdPersonnel(idPersonnel);
	sql = this->oMapPersonnel->supprimerPersonnel();
	this->oCad->actionRows(sql);
	
}

System::Data::DataSet^ NS_Comp_Personnel::personnel::afficherUn(System::String^ dataTableName, int idPerso)
{
	System::String^ sql;

	this->oMapPersonnel->setIdPersonnel(idPerso);
	sql = this->oMapPersonnel->afficherUnPersonnel();
	return this->oCad->getRows(sql, dataTableName);
}
/*/
System::Data::DataSet^ NS_Comp_Personnel::personnel::afficher(int idPersonnel, System::String^ nom, System::String^ prenom, int superieur, System::String^ numero, System::String^ voie, System::String^ ville, System::String^ codePostal, int jour, int mois, int annee)
{

}
/*/

System::Data::DataSet^ NS_Comp_Personnel::personnel::afficherTout(System::String^ dataTableName, bool personnelEtat)
{
	System::String^ sql;

	this->oMapPersonnel->setPersonnelEtat(personnelEtat);
	sql = this->oMapPersonnel->afficherToutPersonnel();
	return this->oCad->getRows(sql, dataTableName);
}



/*/
void NS_Comp_Personnel::personnel::setIdPersonnel(int idPersonnel)
{
	this->idPersonnel = idPersonnel;
}

void NS_Comp_Personnel::personnel::setNom(System::String^ nom) {
	this->nom = nom;
}

void NS_Comp_Personnel::personnel::setPrenom(System::String^ prenom) {
	this->prenom = prenom;
}

void NS_Comp_Personnel::personnel::setSuperieur(int superieur)
{
	this->superieur = superieur;
}

void NS_Comp_Personnel::personnel::setAdressePersonnel(System::String^ numero, System::String^ voie, System::String^ ville, System::String^ codePostal)
{
	this->adressePersonnel.numero = numero;
	this->adressePersonnel.voie = voie;
	this->adressePersonnel.ville = ville;
	this->adressePersonnel.codePostal = codePostal;
}

void NS_Comp_Personnel::personnel::setDateEmbauche(int jour, int mois, int annee)
{
	this->dateEmbauche[0] = jour;
	this->dateEmbauche[1] = mois;
	this->dateEmbauche[2] = annee;
}

//#include "mapPersonnel.h"

/*/