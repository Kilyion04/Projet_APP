#pragma once

namespace NS_Comp_Mappage_Stock
{
    ref class mapStock
    {
    private:
        System::String^ sSql;

        int idArticle;
        System::String^ nomArticle;
        float prixArticle;
        int seuilReap;
        int quantite;
        float tauxTVA;

    public:
        mapStock(void);
        System::String^ creerArticle(void);
        System::String^ modifierArticle(void);
        System::String^ supprimerArticle(void);
        System::String^ afficherArticle(void);
        System::String^ afficherToutArticle(void);
        System::String^ afficherUnArticle(void);
        System::String^ afficherPrix(void);
        System::String^ afficherTVA(void);


        void setIdArticle(int);
        void setNomArticle(System::String^);
        void setPrixArticle(float);
        void setSeuilReap(int);
        void setQuantite(int);
        void setTauxTVA(float);
    };
}