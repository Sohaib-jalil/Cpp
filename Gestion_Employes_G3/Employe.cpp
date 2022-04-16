#include "Employe.h"
#include <iostream>
using namespace std;

int Employe::count = 0;
float Employe::val_aug = 5;


Employe::Employe(string nom, float indice)
	: matr(++Employe::count)
{
	this->nom = nom;
	this->indice_sal = indice;
}

float Employe::cal_salaire() const
{
	return this->indice_sal*Employe::val_aug;
}

void Employe::afficher() const
{
	cout << "matricule: " << this->matr << endl;
	cout << "nom: " << this->nom << endl;
	cout << "indice_sal: " << this->indice_sal  << endl;
	cout << "augmentation: " << Employe::val_aug << endl;
}

Employe::~Employe()
{
}  
