#pragma once
#include<iostream>

using namespace std;

class client
{
public:
	client(string nom, string prenom, string addresse);
	void afficher() const;
	~client();
private:
	static int cpt;
	int num_client;
	string nom, prenom, addresse;
};

