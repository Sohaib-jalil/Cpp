#include "object_assure.h"

object_assure::object_assure(float montant, string type)
{
	this->montant = montant;
	this->type = type;
}

void object_assure::afficher() const
{
	cout << "type: " << this->type << endl;
	cout << "montant: " << this->montant << endl;
}

object_assure::~object_assure()
{
	cout << "destructeur de object assure" << endl;
}
