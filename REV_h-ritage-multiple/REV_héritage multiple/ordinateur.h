#pragma once
#include "object_assure.h"

class ordinateur :
    virtual public object_assure
{
public:
    ordinateur(float montant, string type, int ram, int hd);
    void afficher() const;
    bool ram_comp(float taille) const;
    ~ordinateur();
private:
    int ram;
    int hd;
};

