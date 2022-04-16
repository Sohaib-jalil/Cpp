#pragma once
#include "compte.h"


class compte_courant :
    public compte
{
public:
    compte_courant(devise* D, client* P, devise* decouvert);
    bool retirer(devise* D) override;
    ~compte_courant();
private:
    devise* decouvert;
};

