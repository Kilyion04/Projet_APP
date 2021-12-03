#pragma once

#include "mapStock.h"
#include "cad.h"

namespace NS_Comp_Stock {
    ref class stock
    {
    private:
        NS_Comp_Data::cad^ oCad;
        NS_Comp_Mappage_Stock::mapStock^ oMapStock;
    public:
        stock(void);
        System::Data::DataSet^ afficherToutArticle(System::String^);
        void creer(System::String^, float, int, int, float);
        void modifier(int, System::String^, float, int, int, float);
        void supprimer(int);
        System::Data::DataSet^ afficherUnArticle(System::String^ dataTableName, int);
        System::Data::DataSet^ afficherPrix(System::String^ dataTableName, int);
        System::Data::DataSet^ afficherTVA(System::String^ dataTableName, int);
    };
}