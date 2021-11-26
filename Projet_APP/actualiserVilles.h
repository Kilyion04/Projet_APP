#pragma once

//include
#include "cad.h"

namespace NS_Comp_Actualiser_Villes {
	ref class actualiserVilles
	{
	private:
		NS_Comp_Data::cad^ oCad;

		
	public:
		actualiserVilles();
		System::Data::DataSet^ afficher(System::String^, System::String^);
	};
}