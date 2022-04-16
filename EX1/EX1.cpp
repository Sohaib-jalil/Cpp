// EX1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "EX1.h"
#include <string>

using namespace Bank;
using namespace std;


Bank::Compte::Compte(int numCompte, string nomProprietaire, double solde)
{
    this->numCompte = numCompte;
    this->nomProprietaire = nomProprietaire;
    this->solde = solde;
}

bool Bank::Compte::retirerArgent(double valeur)
{
    bool resulta;
    if (solde >= valeur)
    {
        this->solde -= valeur;
        resulta = true;
    }
    else
    {
        resulta = false;
    }
    return resulta;
}

void Bank::Compte::deposerArgent(double val_depo)
{
    this->solde += val_depo;
}

void Bank::Compte::consulterSolde()
{
    cout << "Votre numerode compte est: " << this->numCompte << endl;
    cout << "Votre nom est: " << this->nomProprietaire << endl;
    cout << "Votre solde est: " << this->solde << endl;
}

bool Bank::Compte::transfererArgent(double somme, Compte *other)
{
    bool check;
    check = this->retirerArgent(somme);
    if (check)
    {
        other->solde += somme;
    }
    
    return check;
}



int main()
{
    Compte first(0, "Sohaib Jalil", 0);
    string nomC;
    int numC;
    double amount;

    cout << "donner votre numero de compte:" << endl;
    cin >> numC;

    cout << "donner votre nom:" << endl;
    cin >> nomC;

    cout << "donner votre solde:" << endl;
    cin >> amount;

    Compte second(numC, nomC, amount);

    cout << "(si 1 reussite si 0 echec) : " << first.retirerArgent(100) << endl << endl;

    first.deposerArgent(100);

    first.consulterSolde();
    cout << endl;
    second.consulterSolde();

    cout << "(si 1 reussite si 0 echec) : " << second.transfererArgent(1000, &first) << endl << endl;

    first.consulterSolde();
    cout << endl;
    second.consulterSolde();

    return 0;
}   





