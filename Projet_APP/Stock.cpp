#include "pch.h"
#include "stock.h"
#include <iostream>


NS_Comp_Stock::stock::stock(void)
{
    this->oCad = gcnew NS_Comp_Data::cad();
    this->oMapStock = gcnew NS_Comp_Mappage_Stock::mapStock();

}

void NS_Comp_Stock::stock::creer(System::String^ nomArticle, float prix, int seuilReap, int quantite, float tauxTVA)
{

    System::String^ sql;
    this->oMapStock->setNomArticle(nomArticle);
    this->oMapStock->setPrixArticle(prix);
    this->oMapStock->setSeuilReap(seuilReap);
    this->oMapStock->setQuantite(quantite);
    this->oMapStock->setTauxTVA(tauxTVA);
    sql = this->oMapStock->creerArticle();
    this->oCad->actionRows(sql);


}

void NS_Comp_Stock::stock::modifier(int idArticle, System::String^ nomArticle, float prix, int seuilReap, int quantite, float tauxTVA)
{

}

void NS_Comp_Stock::stock::supprimer(int idArticle)
{
    System::String^ sql;

    this->oMapStock->setIdArticle(idArticle);
    sql = this->oMapStock->supprimerArticle();
    this->oCad->actionRows(sql);

}

System::Data::DataSet^ NS_Comp_Stock::stock::afficherUnArticle(System::String^ dataTableName, int idArticle)
{
    System::String^ sql;

    this->oMapStock->setIdArticle(idArticle);
    sql = this->oMapStock->afficherUnArticle();
    return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Stock::stock::afficherPrix(System::String^ dataTableName, int idArticle)
{
    System::String^ sql;

    this->oMapStock->setIdArticle(idArticle);
    sql = this->oMapStock->afficherPrix();
    return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Stock::stock::afficherTVA(System::String^ dataTableName, int idArticle)
{
    System::String^ sql;

    this->oMapStock->setIdArticle(idArticle);
    sql = this->oMapStock->afficherTVA();
    return this->oCad->getRows(sql, dataTableName);
}

System::Data::DataSet^ NS_Comp_Stock::stock::afficherToutArticle(System::String^ dataTableName)
{
    System::String^ sql;


    sql = this->oMapStock->afficherToutArticle();
    return this->oCad->getRows(sql, dataTableName);
}
