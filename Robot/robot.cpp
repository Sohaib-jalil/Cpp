#include "robot.h"
int robot::cpt = 0;

robot::robot(string nom, float vitesse, gega* taille_ram):
	id(++robot::cpt)
{
	this->nom = nom;
	this->vitesse = vitesse;
	this->taille_ram = taille_ram;
}

void robot::connecter() const
{
	cout << "bienvenu " << this->nom << endl;
}

void robot::display() const
{
	cout << "identificateur: " << this->id << endl;
	cout << "nom: " << this->nom << endl;
	cout << "vitesse: " << this->vitesse << endl;
	this->taille_ram->afficher();
}

bool robot::sup_taille(float taille)
{
	return *this->taille_ram > taille;
}

robot::~robot()
{
	cout << "destructeur de robot" << endl;
}
