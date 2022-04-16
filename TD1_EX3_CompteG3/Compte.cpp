#include "Compte.h"
#include <iostream>
using namespace Banque;
int Compte::cpt = 0; //

Banque::Compte::Compte()
{
    this->cpt++;
    this->numcompte = this->cpt;
    this->nomProp = new char[20];
    strcpy_s(this->nomProp, 20, "  ");
    this->solde = 0.0;
   
}

Banque::Compte::Compte(char* nom, double solde)
{
    this->cpt++;
    this->numcompte = this->cpt;
    this->nomProp = new char[20];
    strcpy_s(this->nomProp, 20, nom);
    this->solde = solde;
}

bool Banque::Compte::retirerArgent(double montant)
{
    if (this->solde >= montant) {
        this->solde = this->solde - montant;
        return true;
    }
    return false;
}

void Banque::Compte::deposerArgent(double montant)
{
    this->solde = this->solde + montant;
}

void Banque::Compte::consulterSolde() const
{
    std::cout << "le compte est: " << this->numcompte<< std::endl;
    std::cout << "le solde est: " << this->solde<< std::endl;

}

bool Banque::Compte::transfererArgent(Compte*c, double montant)
{
    if (this->retirerArgent(montant) == true) {
        c->deposerArgent(montant);
        return true;
    }
    return false;
}

Banque::Compte::~Compte()
{
    std::cout << "destructeur" << std::endl;
    delete  [] this->nomProp;
    this->nomProp = 0;
    Compte::cpt--;
    

    
}
