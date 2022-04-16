#pragma once
namespace  Banque {
class Compte
{
public: 
	Compte(); 
	Compte( char* nom, double solde);
	bool retirerArgent(double montant);
	void deposerArgent(double montant);
	void consulterSolde() const; 
	bool transfererArgent(Compte *c, double montant); //?
	~Compte(); //destructeur 
private: 
	static	int cpt;
	int numcompte; 
	char *nomProp;  // 
	double solde;
	
};
};
