#pragma once
#include "ordinateur.h"
#include "bagage.h"

class ordinateur_portable :
    public ordinateur, public bagage
{
public:
    ordinateur_portable(float montant, string typ, int ram, int hd, string type, float poids, float poid, float epaisseur);
    void afficher() const;
    void ram_sup() const;
    ~ordinateur_portable();
private:
    float poids;
    float epaisseur;
};

