#include "ordinateur.h"

ordinateur::ordinateur(float montant, string type, int ram, int hd):
	object_assure(montant, type)
{
	this->ram = ram;
	this->hd = hd;
}

void ordinateur::afficher() const
{
	ordinateur tmp();
	if (typeid(*this).name() == typeid(tmp).name())
	{
		this->object_assure::afficher();
	}
	
	cout << "ram: " << this->ram << endl;
	cout << "hd: " << this->hd << endl;
}

bool ordinateur::ram_comp(float taille) const
{
	if (this->ram > taille)
	{
		return true;
	}
	return false;
}



ordinateur::~ordinateur()
{
	cout << "destructeur de ordinateur" << endl;
}
