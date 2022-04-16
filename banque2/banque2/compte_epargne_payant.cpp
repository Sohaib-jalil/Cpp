#include "compte_epargne_payant.h"

compte_epargne_payant::compte_epargne_payant(devise* D, client* P, double taux_interet):
	compte_epargne(D, P, taux_interet), compte_payant(D, P), compte(D, P)
{
}

bool compte_epargne_payant::retirer(devise* D)
{
	if (this->compte_epargne::retirer(D))
	{
		return this->compte_payant::retirer(D);
	}
	return false;
}

compte_epargne_payant::~compte_epargne_payant()
{
	//cout << "destructeur de compte epargne payant" << endl;
}
