#include "operation.h"
#include "devise.h"
int operation::cpt = 0;

operation::operation(devise* montant, string libelle):
	num_operation(++operation::cpt)
{

	this->montant = montant;
	this->libelle = libelle;
}

void operation::afficher() const
{
	cout << "num: " << this->num_operation << "||";
	cout << "nom: " << this->libelle;
	this->montant->afficher();
}

operation::~operation()
{
	//cout << "destructeur de operation" << endl;
}
