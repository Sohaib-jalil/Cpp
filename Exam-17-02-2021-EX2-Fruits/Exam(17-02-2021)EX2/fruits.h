#pragma once
#include<iostream>

using namespace std;

class fruits
{
public:
	fruits();
	fruits(string type, bool noyau);
	bool kernel();
	string show_type();
	virtual void afficher() const;
	~fruits();
private:
	string type;
	bool noyau; // true si le fruit contient de noyau sinon false
};

