#include "pch.h"
#include "commande.h"

NS_Comp_Commande::commande::commande()
{
	this->oCad = gcnew NS_Comp_Data::cad();
	this->oMapCommande = gcnew NS_Comp_Mappage_Commande::mapCommande();
}


System::String^ NS_Comp_Commande::commande::creer(int idClient, System::String^ dateCommande, int adresseLivraison, int adresseFacturation, bool plusieursFois)
{
	System::String^ sql;
	this->oMapCommande->setIdClient(idClient);
	this->oMapCommande->setDateCommande(dateCommande);
	this->oMapCommande->setAdresseLivraison(adresseLivraison);
	this->oMapCommande->setAdresseFacturation(adresseFacturation);
	this->oMapCommande->setPlusieursFois(plusieursFois);
	
	sql = this->oMapCommande->creerCommande();
	
	return sql;
}

void NS_Comp_Commande::commande::modifier()
{

}

void NS_Comp_Commande::commande::supprimer(int idCommande)
{
	System::String^ sql;

	this->oMapCommande->setIdCommande(idCommande);
	sql = this->oMapCommande->supprimerCommande();
	this->oCad->actionRows(sql);
}

System::Data::DataSet^ NS_Comp_Commande::commande::afficherUne(System::String^ dataTableName, int idCommande)
{
	System::String^ sql;

	this->oMapCommande->setIdCommande(idCommande);
	sql = this->oMapCommande->afficherUneCommande();
	return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Commande::commande::afficherTout(System::String^ dataTableName)
{
	System::String^ sql;


	sql = this->oMapCommande->afficherToutCommande();
	return this->oCad->getRows(sql, dataTableName);
}

void NS_Comp_Commande::commande::ajouterArticle(System::String^ nomArticle)
{

}

/*/System::Data::DataSet^ NS_Comp_Commande::commande::afficherPanier()
{

}/*/