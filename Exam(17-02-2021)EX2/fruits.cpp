#include "fruits.h"

fruits::fruits()
{
}

fruits::fruits(string type, bool noyau)
{
	this->noyau = noyau;
	this->type = type;
}

bool fruits::kernel()
{
	return this->noyau;
}

string fruits::show_type()
{
	return this->type;
}

void fruits::afficher() const
{
	cout << "fruit: " << this->type;
	if (this->noyau)
	{
		cout << " contient de noyau." << endl;
	}
	else
	{
		cout << " ne contient pas de noyau." << endl;
	}
}

fruits::~fruits()
{
	cout << "destructeur de fruits" << endl;
}
