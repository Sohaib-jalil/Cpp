#pragma once
#include<iostream>

using namespace std;

class object_assure
{
public:
	object_assure(float montant, string type);
	void afficher() const;
	~object_assure();
private:
	float montant;
	string type;
};

