#include "Etudiant.h"
#include<iostream>
using namespace Ecole; 
using namespace std;
int Etudiant::cpt = 0;
Etudiant::Etudiant()
{
	Etudiant::cpt++;
	this->matricule = cpt; 
	this->nom = new char[20];
	strcpy_s(this->nom, 20, "default");
	this->nbmreNotes = 0;
	this->tabnotes = new float[this->nbmreNotes];

}

Etudiant::Etudiant(char* nom, int nbmrenotes)
{
	Etudiant::cpt++;
	this->matricule = cpt;
	this->nom = new char[20];
	strcpy_s(this->nom, 20, nom);
	this->nbmreNotes = nbmrenotes;
	this->tabnotes = new float[this->nbmreNotes];
}

Etudiant::Etudiant(const Etudiant& E)
{
	this->matricule = E.matricule;
	this->nom = new char[20];
	strcpy_s(this->nom, strlen(E.nom)+1, E.nom);
	this->nbmreNotes = E.nbmreNotes;
	this->tabnotes = new float[this->nbmreNotes];
	for (int i = 0; i < this->nbmreNotes; i++)
	{
		this->tabnotes[i] = E.tabnotes[i];

	}
}

void Etudiant::saisie()
{
	
	for (int i = 0; i < this->nbmreNotes; i++)
	{
		cout << "donner la note "<<i+1 << endl;
		cin >> this->tabnotes[i];
	}
}

void Etudiant::affichage() const
{
	cout << "mat: " << this->matricule << endl;
	cout << "nom : " << this->nom << endl;
	cout << "les notes: " << endl;
	for (int i = 0; i < this->nbmreNotes; i++)
	{
		cout << "la note " << i + 1 << ":" << this->tabnotes[i] << endl;
	}
}
float Etudiant::moyenne() const
{
	float s = 0.0;
	float m = 0.0;
	for (int i = 0; i < this->nbmreNotes; i++)
	{
		s = s + this->tabnotes[i];
	}
	m = s / this->nbmreNotes;

	return m;
}

bool Etudiant::admis() const
{
	if (this->moyenne() >= 10) {
		return true;
	}
	return false;
}

bool Etudiant::operator==(const Etudiant& E) const
{
	if (this->moyenne() == E.moyenne()) {
		return true;
	}
	return false;
}

Etudiant::~Etudiant()
{
	Etudiant::cpt--;
	delete[] this->nom; 
	this->nom = 0;
	delete[] this->tabnotes; 
	this->tabnotes = 0;
}
