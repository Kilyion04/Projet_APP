// include
#include "pch.h"
#include "Client.h"

/*/NS_Comp_Client::Client::Client()
{
	this->oMapClient->dateEmbauche = gcnew array<int>(3);
}/*/

NS_Comp_Client::client::client(void)
{
	this->oCad = gcnew NS_Comp_Data::cad();
	this->oMapClient = gcnew NS_Comp_Mappage_Client::mapClient();

}

void NS_Comp_Client::client::creer(System::String^ nom, System::String^ prenom, System::String^ dateNaissance)
{

	System::String^ sql;
	this->oMapClient->setNom(nom);
	this->oMapClient->setPrenom(prenom);
	//this->oMapClient->setAdresseClient(numero, voie, ville, codePostal);
	this->oMapClient->setDateNaissance(dateNaissance);
	sql = this->oMapClient->creerClient();
	this->oCad->actionRows(sql);


}

void NS_Comp_Client::client::modifier(int idClient, System::String^ nom, System::String^ prenom, int superieur, System::String^ numero, System::String^ voie, System::String^ ville, System::String^ codePostal, int jour, int mois, int annee)
{

}

void NS_Comp_Client::client::supprimer(int idClient)
{
	System::String^ sql;

	this->oMapClient->setIdClient(idClient);
	sql = this->oMapClient->supprimerClient();
	this->oCad->actionRows(sql);

}

System::Data::DataSet^ NS_Comp_Client::client::afficherUn(System::String^ dataTableName, int idPerso)
{
	System::String^ sql;

	this->oMapClient->setIdClient(idPerso);
	sql = this->oMapClient->afficherUnClient();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Client::client::afficherAdresseLivraison(System::String^ dataTableName, int idPerso, int adresseLivraison)
{
	System::String^ sql;

	this->oMapClient->setIdClient(idPerso);
	this->oMapClient->setAdresseLivraison(adresseLivraison);
	sql = this->oMapClient->afficherAdresseLivraison();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Client::client::afficherAdresseFacturation(System::String^ dataTableName, int idPerso, int adresseFacturation)
{
	System::String^ sql;

	this->oMapClient->setIdClient(idPerso);
	this->oMapClient->setAdresseFacturation(adresseFacturation);
	sql = this->oMapClient->afficherAdresseFacturation();
	return this->oCad->getRows(sql, dataTableName);
}
/*/
System::Data::DataSet^ NS_Comp_Client::Client::afficher(int idClient, System::String^ nom, System::String^ prenom, int superieur, System::String^ numero, System::String^ voie, System::String^ ville, System::String^ codePostal, int jour, int mois, int annee)
{

}
/*/

System::Data::DataSet^ NS_Comp_Client::client::afficherTout(System::String^ dataTableName, bool clientEtat)
{
	System::String^ sql;

	this->oMapClient->setClientEtat(clientEtat);
	sql = this->oMapClient->afficherToutClient();
	return this->oCad->getRows(sql, dataTableName);
}



/*/
void NS_Comp_Client::Client::setIdClient(int idClient)
{
	this->idClient = idClient;
}

void NS_Comp_Client::Client::setNom(System::String^ nom) {
	this->nom = nom;
}

void NS_Comp_Client::Client::setPrenom(System::String^ prenom) {
	this->prenom = prenom;
}

void NS_Comp_Client::Client::setSuperieur(int superieur)
{
	this->superieur = superieur;
}

void NS_Comp_Client::Client::setAdresseClient(System::String^ numero, System::String^ voie, System::String^ ville, System::String^ codePostal)
{
	this->adresseClient.numero = numero;
	this->adresseClient.voie = voie;
	this->adresseClient.ville = ville;
	this->adresseClient.codePostal = codePostal;
}

void NS_Comp_Client::Client::setDateEmbauche(int jour, int mois, int annee)
{
	this->dateEmbauche[0] = jour;
	this->dateEmbauche[1] = mois;
	this->dateEmbauche[2] = annee;
}

//#include "mapClient.h"

/*/