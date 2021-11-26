#include "pch.h"
#include "mapPersonnel.h"

NS_Comp_Mappage_Personnel::mapPersonnel::mapPersonnel()
{
	this->dateEmbauche = gcnew array<int>(3);
}


System::String^ NS_Comp_Mappage_Personnel::mapPersonnel::creerPersonnel(void)
{
		return "INSERT INTO [test2].[dbo].[personnel] (personnelActif, nomPersonnel, prenomPersonnel, supHierarchique, adressePersonnel, dateEmbauche) SELECT 'true', '" + this->nom + "', '" + this->prenom + "', " + this->superieur + ", adresse.idAdresse, dates.idDate FROM adresse, dates, ville WHERE adresse.numeroRue = '" + this->adressePersonnel.numero + "' AND adresse.nomRue = '" + this->adressePersonnel.voie + "' AND adresse.iDville = ville.idVille AND ville.ville = '" + this->adressePersonnel.ville + "' AND ville.codePostal = '" + this->adressePersonnel.codePostal + "' AND dates.date = '" + this->dateEmbauche[2] + "-" + this->dateEmbauche[1] + "-" + this->dateEmbauche[0] + "'; ";
}

System::String^ NS_Comp_Mappage_Personnel::mapPersonnel::modifierPersonnel(void)
{
	return "";
}

System::String^ NS_Comp_Mappage_Personnel::mapPersonnel::supprimerPersonnel(void)
{
	return "";
}

System::String^ NS_Comp_Mappage_Personnel::mapPersonnel::afficherPersonnel(void)
{
	return "";
}

System::String^ NS_Comp_Mappage_Personnel::mapPersonnel::afficherToutPersonnel(void)
{
	return "SELECT * FROM [test2].[dbo].[personnel]";
}

void NS_Comp_Mappage_Personnel::mapPersonnel::setIdPersonnel(int idPersonnel)
{
	this->idPersonnel = idPersonnel;
}

void NS_Comp_Mappage_Personnel::mapPersonnel::setNom(System::String^ nom) {
	this->nom = nom;
}

void NS_Comp_Mappage_Personnel::mapPersonnel::setPrenom(System::String^ prenom) {
	this->prenom = prenom;
}

void NS_Comp_Mappage_Personnel::mapPersonnel::setSuperieur(int superieur)
{
	this->superieur = superieur;
}

void NS_Comp_Mappage_Personnel::mapPersonnel::setAdressePersonnel(System::String^ numero, System::String^ voie, System::String^ ville, System::String^ codePostal)
{
	this->adressePersonnel.numero = numero;
	this->adressePersonnel.voie = voie;
	this->adressePersonnel.ville = ville;
	this->adressePersonnel.codePostal = codePostal;
}

void NS_Comp_Mappage_Personnel::mapPersonnel::setDateEmbauche(int jour, int mois, int annee)
{
	this->dateEmbauche[0] = jour;
	this->dateEmbauche[1] = mois;
	this->dateEmbauche[2] = annee;
}

