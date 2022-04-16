#include <iostream>
#include "Personnel.h"

using namespace std;

Personnel::Personnel()
{
	this->perso = vector<Employe*>();
}

void Personnel::add_perso(Employe* E)
{
	this->perso.push_back(E);
}

float Personnel::cal_sal_total() const
{
	float total = 0;
	for (int i = 0; i < this->perso.size();  i++)
	{
		total += this->perso[i]->cal_salaire();
	}
	return total;
}

Personnel::~Personnel()
{
	this->perso.clear();
}
