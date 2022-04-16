#include "ordinateur_portable.h"

ordinateur_portable::ordinateur_portable(float montant, string typ, int ram, int hd, string type, float poids, float poid, float epaisseur):
	object_assure(montant, typ), ordinateur(montant, typ, ram, hd), bagage(montant, typ, type, poids)
{
	this->poids = poid;
	this->epaisseur = epaisseur;
}

void ordinateur_portable::afficher() const
{
	this->ordinateur::afficher();
	this->bagage::afficher();
	cout << "poids: " << this->poids << endl;
	cout << "epaisseur: " << this->epaisseur << endl;
}

void ordinateur_portable::ram_sup() const
{
	if (this->ordinateur::ram_comp(200))
	{
		this->afficher();
	}
}

ordinateur_portable::~ordinateur_portable()
{
	cout << "destructeur de ordinateur portable" << endl;
}
