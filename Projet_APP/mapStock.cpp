#include "pch.h"
#include "mapStock.h"

NS_Comp_Mappage_Stock::mapStock::mapStock()
{}


System::String^ NS_Comp_Mappage_Stock::mapStock::creerArticle(void)
{
    return "INSERT INTO [test2].[dbo].[stock](nomArticle, prixArticle, seuilReap, quantiteArticle, tauxTVA) SELECT  '" + this->nomArticle + "', " + this->prixArticle + ", " + this->seuilReap + ", " + this->quantite + ", " + this->tauxTVA + ";";
}

System::String^ NS_Comp_Mappage_Stock::mapStock::modifierArticle(void)
{
    return "";
}

System::String^ NS_Comp_Mappage_Stock::mapStock::supprimerArticle(void)
{
    return "DELETE FROM stock WHERE idArticle = " + this->idArticle + "; ";
}

System::String^ NS_Comp_Mappage_Stock::mapStock::afficherArticle(void)
{
    return "";
}

System::String^ NS_Comp_Mappage_Stock::mapStock::afficherUnArticle(void)
{
    return "SELECT * FROM stock WHERE idArticle = " + this->idArticle + "; ";
}

System::String^ NS_Comp_Mappage_Stock::mapStock::afficherPrix(void)
{
    return "SELECT prixArticle FROM stock WHERE idArticle = " + this->idArticle + "; ";
}
System::String^ NS_Comp_Mappage_Stock::mapStock::afficherTVA(void)
{
    return "SELECT tauxTVA FROM stock WHERE idArticle = " + this->idArticle + "; ";
}
System::String^ NS_Comp_Mappage_Stock::mapStock::afficherToutArticle(void)
{
    return "SELECT * FROM stock; ";
}

void NS_Comp_Mappage_Stock::mapStock::setIdArticle(int idArticle)
{
    this->idArticle = idArticle;
}

void NS_Comp_Mappage_Stock::mapStock::setNomArticle(System::String^ nomArticle) {
    this->nomArticle = nomArticle;
}

void NS_Comp_Mappage_Stock::mapStock::setPrixArticle(float prixArticle)
{
    this->prixArticle = prixArticle;
}

void NS_Comp_Mappage_Stock::mapStock::setQuantite(int quantite)
{
    this->quantite = quantite;
}

void NS_Comp_Mappage_Stock::mapStock::setSeuilReap(int seuilReap)
{
    this->seuilReap = seuilReap;
}
void NS_Comp_Mappage_Stock::mapStock::setTauxTVA(float tauxTVA)
{
    this->tauxTVA = tauxTVA;
}
