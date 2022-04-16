#pragma once
#include "compte.h"
#include "assert.h"


class compte_epargne :
    public virtual compte
{
public:
    compte_epargne();
    compte_epargne(devise* D, client* P, double taux_interet);
    void cal_interet();
    bool retirer(devise* D) override;
    ~compte_epargne();
private:
    double taux_interet;
};

