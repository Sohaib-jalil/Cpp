#include "compte_epargne.h"
#include"devise.h"

compte_epargne::compte_epargne():
	compte()
{
}

compte_epargne::compte_epargne(devise* D, client* P, double taux_interet):
	compte(D, P)
{
	assert(taux_interet > 0 && taux_interet < 100);
	this->taux_interet = taux_interet;
}

void compte_epargne::cal_interet()
{
	devise taux = *this->solde * (this->taux_interet / 100);
	this->depot(&taux);
}

bool compte_epargne::retirer(devise* D)
{
	compte_epargne cmp_ep;
	if (*this->solde / 2 >= *D)
	{
		if (typeid(*this).name() != typeid(cmp_ep).name())
		{
			return true;
		}
		return this->compte::retirer(D);
	}
	return false;
}

compte_epargne::~compte_epargne()
{
	//cout << "destructeur de compte epargne" << endl;
}
