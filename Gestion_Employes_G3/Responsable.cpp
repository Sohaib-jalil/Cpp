#include <iostream>
#include "Responsable.h"

using namespace std;

Responsable::Responsable(string nom, float indice, string status)
    : Employe(nom, indice)
{
    this->status = status;
    this->sub = vector<Employe*>(); // taille = 0
}

void Responsable::add_sub(Employe* E)
{
    this->sub.push_back(E);
}

void Responsable::afficher() const
{
    this->Employe::afficher();
    cout << "status: " << this->status << endl;
    for (int i = 0; i < this->sub.size(); i++)
    {
        this->sub[i]->afficher(); // polymorphisme
    }
}

Responsable::~Responsable()
{
    this->sub.clear();
}
