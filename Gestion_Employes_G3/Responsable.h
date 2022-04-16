#pragma once
#include "Employe.h"
#include <vector>

class Responsable :
	public Employe
{
public:
	Responsable(string nom, float indice, string status);
	void add_sub(Employe* E);
	void afficher() const override; // redifinition
	~Responsable();

private:
	string status;
	//Employe* sub;
	vector<Employe*> sub; // auto incrémente la taille
};

