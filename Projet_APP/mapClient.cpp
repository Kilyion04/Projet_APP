#include "pch.h"
#include "mapClient.h"

NS_Comp_Mappage_Client::mapClient::mapClient()
{
	//this->dateNaissance = gcnew array<int>(3);
}


System::String^ NS_Comp_Mappage_Client::mapClient::creerClient(void)
{
	return "INSERT INTO [test2].[dbo].[client] (clientActif, nomClient, prenomClient, dateNaissance) SELECT 'true', '" + this->nom + "', '" + this->prenom + "' , dates.idDate FROM dates WHERE dates.date = '" + this->dateNaissance + "'; ";
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
	return "SELECT * FROM client WHERE idClient = " + this->idClient + "; ";
}

System::String^ NS_Comp_Mappage_Client::mapClient::afficherToutClient(void)
{
	return "SELECT * FROM [test2].[dbo].[client]";
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

/*/void NS_Comp_Mappage_Client::mapClient::setAdresseClient(System::String^ numero, System::String^ voie, System::String^ ville, System::String^ codePostal)
{
	this->adresseClient.numero = numero;
	this->adresseClient.voie = voie;
	this->adresseClient.ville = ville;
	this->adresseClient.codePostal = codePostal;
}/*/

void NS_Comp_Mappage_Client::mapClient::setDateNaissance(System::String^ dateNaissance)
{
	this->dateNaissance = dateNaissance;
}


/*/void NS_Comp_Mappage_Client::mapClient::setDateNaissance(int jour, int mois, int annee)
{
	this->dateNaissance[0] = jour;
	this->dateNaissance[1] = mois;
	this->dateNaissance[2] = annee;
}
/*/
