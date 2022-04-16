#include "gega.h"

gega::gega(float taille)
{
	this->taille = taille;
}

void gega::afficher()
{
	cout << "taille: " << this->taille << "Go" << endl;
}

bool gega::operator>(float taille)
{
	if (this->taille > taille)
	{
		return true;
	}
	return false;
}

gega::~gega()
{
	cout << "destructeur de gega" << endl;
}