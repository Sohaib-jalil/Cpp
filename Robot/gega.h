#pragma once
#include<iostream>

using namespace std;

class gega
{
public:
	gega(float taille);
	void afficher();
	bool operator>(float taille);
	~gega();
private:
	float taille;
};