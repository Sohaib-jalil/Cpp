#pragma once
#include<iostream>

using namespace std;

class devise
{
public:
	devise(double montant);
	void afficher() const;
	bool operator>=(const devise& D);
	devise operator-(const devise& D);
	devise operator+(const devise& D);
	devise operator*(double taux);
	devise operator/(double nbr);
	~devise();
private:
	double montant;
};

