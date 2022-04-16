#include "bagage.h"

bagage::bagage(float montant, string typ, string type, float poids) :
	object_assure(montant, typ)
{
	this->type = type;
	this->poids = poids;
}

void bagage::afficher() const
{
	this->object_assure::afficher();
	cout << "type: " << this->type << endl;
	cout << "poids: " << this->poids << endl;
}

bagage::~bagage()
{
	cout << "destructeur de bagage" << endl;
}
