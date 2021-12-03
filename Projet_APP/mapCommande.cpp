#include "pch.h"
#include "mapCommande.h"

NS_Comp_Mappage_Commande::mapCommande::mapCommande()
{

}

System::String^ NS_Comp_Mappage_Commande::mapCommande::creerCommande(void)
{
	return "INSERT INTO commande(dateCommande, refCommande, plusieursPaiments, adresseLivraison, adresseFacturation) SELECT '"+this->dateCommande+"', (SELECT(UPPER(SUBSTRING(prenomClient, 1, 2) + SUBSTRING(nomClient, 1, 2) + CONVERT(varchar(5), YEAR('"+this->dateCommande+"')) + SUBSTRING(ville.ville, 1, 3))) FROM client, ville, adresse WHERE idClient = "+this->idClient+" AND adresse.idAdresse = "+this->adresseLivraison+" AND adresse.idVille = ville.idVille), '"+this->plusieursFois+"', "+this->adresseLivraison+", "+this->adresseFacturation+";";
}

System::String^ NS_Comp_Mappage_Commande::mapCommande::modifierCommande(void)
{
	return "";
}

System::String^ NS_Comp_Mappage_Commande::mapCommande::supprimerCommande(void)
{
	return "DELETE FROM commande WHERE idCommande = " + this->idCommande + ";";
}

System::String^ NS_Comp_Mappage_Commande::mapCommande::afficherCommande(void)
{
	return "";
}

System::String^ NS_Comp_Mappage_Commande::mapCommande::afficherUneCommande(void)
{
	return "SELECT * FROM commande WHERE idCommande = "+this->idCommande+"; ";
}

System::String^ NS_Comp_Mappage_Commande::mapCommande::afficherToutCommande(void)
{
	return "SELECT * FROM commande;";
}

System::String^ NS_Comp_Mappage_Commande::mapCommande::ajouterArticle(void)
{
	return "";
}

System::String^ NS_Comp_Mappage_Commande::mapCommande::afficherPanier(void)
{
	return "";
}

void NS_Comp_Mappage_Commande::mapCommande::setIdCommande(int idCommande)
{
	this->idCommande = idCommande;
}

void NS_Comp_Mappage_Commande::mapCommande::setIdClient(int idClient) {
	this->idClient = idClient;
}

void NS_Comp_Mappage_Commande::mapCommande::setMoyenPaiement(System::String^ moyenPaiement)
{
	this->moyenPaiement = moyenPaiement;
}

void NS_Comp_Mappage_Commande::mapCommande::setPlusieursFois(bool plusieursFois)
{
	this->plusieursFois = plusieursFois;
}

void NS_Comp_Mappage_Commande::mapCommande::setDateCommande(System::String^ dateCommande)
{
	this->dateCommande = dateCommande;
}

void NS_Comp_Mappage_Commande::mapCommande::setDateEmission(System::String^ dateEmission)
{
	this->dateEmission = dateEmission;
}

void NS_Comp_Mappage_Commande::mapCommande::setDateLivraison(System::String^ dateLivraison)
{
	this->dateLivraison = dateLivraison;
}

void NS_Comp_Mappage_Commande::mapCommande::setAdresseLivraison(int adresseLivraison)
{
	this->adresseLivraison = adresseLivraison;
}

void NS_Comp_Mappage_Commande::mapCommande::setAdresseFacturation(int adresseFacturation)
{
	this->adresseFacturation = adresseFacturation;
}