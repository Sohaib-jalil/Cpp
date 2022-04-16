#pragma once
#include "compte_epargne.h"
#include "compte_payant.h"

class devise;
class compte_epargne_payant :
    public compte_epargne, public compte_payant
{
public:
    compte_epargne_payant(devise* D, client* P, double taux_interet);
    bool retirer(devise* D) override;
    ~compte_epargne_payant();
private:

};

