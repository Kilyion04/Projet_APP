#include "pch.h"
#include "mapClient.h"

NS_Comp_Mappage_Client::mapClient::mapClient()
{
	//this->dateNaissance = gcnew array<int>(3);
}


System::String^ NS_Comp_Mappage_Client::mapClient::creerClient(void)
{
	return "IF ('" + this->dateNaissance + "' NOT IN (SELECT date FROM dates)) BEGIN INSERT INTO dates(date) VALUES('" + this->dateNaissance + "'); END INSERT INTO[test2].[dbo].[client](clientActif, nomClient, prenomClient, dateNaissance) SELECT 'true', '" + this->nom + "', '" + this->prenom + "', dates.idDate FROM dates WHERE dates.date = '" + this->dateNaissance + "';";
}

System::String^ NS_Comp_Mappage_Client::mapClient::modifierClient(void)
{
	return "";
}

System::String^ NS_Comp_Mappage_Client::mapClient::supprimerClient(void)
{
	return "UPDATE client SET ClientActif = 'False' WHERE idClient = " + this->idClient + "; ";
}

System::String^ NS_Comp_Mappage_Client::mapClient::afficherClient(void)
{
	return "";
}

System::String^ NS_Comp_Mappage_Client::mapClient::afficherUnClient(void)
{
	return "SELECT clientActif, nomClient, prenomClient, date AS dateNaissance FROM client, dates WHERE idClient = " + this->idClient + " AND dateNaissance = dates.idDate;";
}

System::String^ NS_Comp_Mappage_Client::mapClient::afficherAdresseLivraison(void)
{
	return "SELECT * FROM resider WHERE idClient = " + this->idClient + " AND idAdresse = "+this->adresseLivraison+";";
}

System::String^ NS_Comp_Mappage_Client::mapClient::afficherAdresseFacturation(void)
{
	return "SELECT * FROM resider WHERE idClient = " + this->idClient + " AND idAdresse = " + this->adresseFacturation + ";";
}

System::String^ NS_Comp_Mappage_Client::mapClient::afficherToutClient(void)
{
	return "SELECT idClient, clientActif, nomClient, prenomClient, dates.date AS dateNaissance FROM [test2].[dbo].[client], dates WHERE client.dateNaissance = dates.idDate AND clientActif = '"+this->clientEtat+"' ; ";
}

void NS_Comp_Mappage_Client::mapClient::setIdClient(int idClient)
{
	this->idClient = idClient;
}

void NS_Comp_Mappage_Client::mapClient::setNom(System::String^ nom) {
	this->nom = nom;
}

void NS_Comp_Mappage_Client::mapClient::setPrenom(System::String^ prenom) {
	this->prenom = prenom;
}

void NS_Comp_Mappage_Client::mapClient::setClientEtat(bool clientEtat) {
	this->clientEtat = !clientEtat;
}

void NS_Comp_Mappage_Client::mapClient::setDateNaissance(System::String^ dateNaissance)
{
	this->dateNaissance = dateNaissance;
}

void NS_Comp_Mappage_Client::mapClient::setAdresseLivraison(int adresseLivraison)
{
	this->adresseLivraison = adresseLivraison;
}

void NS_Comp_Mappage_Client::mapClient::setAdresseFacturation(int adresseFacturation)
{
	this->adresseFacturation = adresseFacturation;
}


/*/void NS_Comp_Mappage_Client::mapClient::setDateNaissance(int jour, int mois, int annee)
{
	this->dateNaissance[0] = jour;
	this->dateNaissance[1] = mois;
	this->dateNaissance[2] = annee;
}
/*/
