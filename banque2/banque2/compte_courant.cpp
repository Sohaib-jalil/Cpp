#include "compte_courant.h"
#include "devise.h"

compte_courant::compte_courant(devise* D, client* P, devise* decouvert):
	compte(D, P)
{
	this->decouvert = decouvert;
}

bool compte_courant::retirer(devise* D)
{
	if (*this->solde - *D >= *this->decouvert)
	{
		return this->compte::retirer(D);
	}
	return false;
}

compte_courant::~compte_courant()
{
	//cout << "destructeur de compte courant" << endl;
}
