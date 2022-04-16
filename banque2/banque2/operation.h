#pragma once

#include<iostream>

class devise;

using namespace std;

class operation
{
public:
	operation(devise* montant, string libelle);
	void afficher() const;
	~operation();
private:
	static int cpt;
	int num_operation;
	devise* montant;
	string libelle;
};

