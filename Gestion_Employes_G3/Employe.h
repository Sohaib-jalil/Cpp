#pragma once
#include <iostream>
using namespace std;

class Employe
{
public:
	Employe(string nom, float indice);
	virtual float cal_salaire() const;
	virtual void afficher() const;
	~Employe();
private:
	int matr;
	string nom;
	float indice_sal;
	static int count;
	static float val_aug;
};
