#pragma once
#include <iostream>
#include <string>
namespace Bank {
	class Compte {
	private:
		int numCompte;
		std::string nomProprietaire;
		double solde;
	public:		
		Compte(int numCompte, std::string nomProprietaire, double solde);
		bool retirerArgent(double valeur);
		void deposerArgent(double val_depo);
		void consulterSolde();
		bool transfererArgent(double somme,Compte *other);
	};
}