#include "compte_payant.h"
#include "devise.h"

double compte_payant::taux_paymant = 5;

compte_payant::compte_payant(devise* D, client* P):
	compte(D, P)
{

}

bool compte_payant::retirer(devise* D)
{
	devise taux(*D + *D * (this->taux_paymant / 100));
	if (*this->solde >= taux)
	{
		return this->compte::retirer(&taux);
	}
	return false;
}

compte_payant::~compte_payant()
{
	//cout << "destructeur de compte payant" << endl;
}
