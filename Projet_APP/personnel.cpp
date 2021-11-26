// include
#include "pch.h"
#include "personnel.h"
#include <iostream>

/*/NS_Comp_Personnel::personnel::personnel()
{
	this->oMapPersonnel->dateEmbauche = gcnew array<int>(3);
}/*/

NS_Comp_Personnel::personnel::personnel(void)
{
	this->oCad = gcnew NS_Comp_Data::cad();
	this->oMapPersonnel = gcnew NS_Comp_Mappage_Personnel::mapPersonnel();
	
}

System::String^ NS_Comp_Personnel::personnel::creer(System::String^ nom, System::String^ prenom, int superieur, System::String^ numero, System::String^ voie, System::String^ ville, System::String^ codePostal , int jour, int mois, int annee)
{
	
	System::String^ sql;
	this->oMapPersonnel->setNom(nom);
	this->oMapPersonnel->setPrenom(prenom);
	this->oMapPersonnel->setSuperieur(superieur);
	this->oMapPersonnel->setAdressePersonnel(numero, voie, ville, codePostal);
	this->oMapPersonnel->setDateEmbauche(jour, mois, annee);
	sql = this->oMapPersonnel->creerPersonnel();
	this->oCad->actionRows(sql);
	return sql;
	
}

void NS_Comp_Personnel::personnel::modifier(int idPersonnel,System::String^ nom, System::String^ prenom, int superieur, System::String^ numero, System::String^ voie, System::String^ ville, System::String^ codePostal, int jour, int mois, int annee)
{

}

void NS_Comp_Personnel::personnel::supprimer(int idPersonnel)
{

}
/*/
System::Data::DataSet^ NS_Comp_Personnel::personnel::afficher(int idPersonnel, System::String^ nom, System::String^ prenom, int superieur, System::String^ numero, System::String^ voie, System::String^ ville, System::String^ codePostal, int jour, int mois, int annee)
{

}
/*/

System::Data::DataSet^ NS_Comp_Personnel::personnel::afficherTout(System::String^ dataTableName)
{
	System::String^ sql;


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