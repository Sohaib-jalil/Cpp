#pragma once
#include "object_assure.h"

class bagage :
    virtual public object_assure
{
public:
    bagage(float montant, string typ, string type, float poids);
    void afficher() const;
    ~bagage();
private:
    string type;
    float poids;
};

