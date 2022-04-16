#include "compte.h"
#include "devise.h"
#include "client.h"
#include "operation.h"

int compte::cpt = 0;

compte::compte():
	num_compte(++compte::cpt)
{

}

compte::compte(devise* D, client* P) :
	num_compte(compte::cpt++)
{
	this->prop = P;
	this->solde = D;
	this->list_operation = vector<operation>();
}

void compte::consulter()
{
	this->solde->afficher();
}

void compte::depot(devise* D)
{
	operation P(D, "+");
	*this->solde = *this->solde + *D;
	this->list_operation.push_back(P);
}

bool compte::retirer(devise* D)
{
	operation P(D, "-");
	if (*this->solde >= *D)
	{
		*this->solde = *this->solde - *D;
		this->list_operation.push_back(P);
		return true;
	}
	return false;
}

bool compte::transfere(devise* D, compte& C)
{
	if (this->retirer(D))
	{
		C.depot(D);
		return true;
	}
	return false;
}

compte::~compte()
{
	//cout << "destructeur de compte" << endl;
	compte::cpt--;
}
