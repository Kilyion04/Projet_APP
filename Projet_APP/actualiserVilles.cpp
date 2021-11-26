// include
#include "pch.h"
#include "actualiserVilles.h"


NS_Comp_Actualiser_Villes::actualiserVilles::actualiserVilles(void)
{
	this->oCad = gcnew NS_Comp_Data::cad();

}

System::Data::DataSet^ NS_Comp_Actualiser_Villes::actualiserVilles::afficher(System::String^ dataTableName, System::String^ codePostal)
{
	System::String^ sql;
	sql = "SELECT ville FROM ville WHERE codePostal = '" + codePostal + "';";
	return this->oCad->getRows(sql, dataTableName);
}
