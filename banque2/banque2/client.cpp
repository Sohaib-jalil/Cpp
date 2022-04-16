#include "client.h"
int client::cpt = 0;

client::client(string nom, string prenom, string addresse):
	num_client(++client::cpt)
{
	this->nom = nom;
	this->prenom = prenom;
	this->addresse = addresse;
}

void client::afficher() const
{
	cout << "num: " << this->num_client<< endl;
	cout << "nom: " << this->nom << endl;
	cout << "prenom: " << this->prenom << endl;
	cout << "addresse: " << this->addresse << endl;
}

client::~client()
{
	//cout << "destructeur de client" << endl;
}
