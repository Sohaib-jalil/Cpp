#include "devise.h"

devise::devise(double montant)
{
	this->montant = montant;
}

void devise::afficher() const
{
	cout << this->montant << endl;
}

bool devise::operator>=(const devise& D)
{
	return this->montant >= D.montant;
}

devise devise::operator-(const devise& D)
{
	devise res(this->montant - D.montant);
	return res;
}

devise devise::operator+(const devise& D)
{
	devise res(this->montant + D.montant);
	return res;
}

devise devise::operator*(double taux)
{
	devise res = this->montant * taux;
	return res;
}

devise devise::operator/(double nbr)
{
	devise res = this->montant / nbr;
	return res;
}

devise::~devise()
{
	//cout << "destructeur de devise" << endl;
}
