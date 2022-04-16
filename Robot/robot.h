#pragma once
#include<iostream>
#include"gega.h"

using namespace std;

class robot
{
public:
	robot(string nom, float vitesse, gega* taille_ram);
	void connecter() const;
	virtual void display() const;
	bool sup_taille(float taille);
	~robot();
private:
	static int cpt;
	int id;
	string nom;
	float vitesse;
	gega* taille_ram;
};

