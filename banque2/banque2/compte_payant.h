#pragma once
#include "compte.h"

class compte_payant :
    public virtual compte
{
public:
	compte_payant(devise* D, client* P);
	bool retirer(devise* D) override;
	~compte_payant();
private:
	static double taux_paymant;
};

