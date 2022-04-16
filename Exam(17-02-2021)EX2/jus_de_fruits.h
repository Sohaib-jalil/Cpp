#pragma once
#include "fruits.h"
#include<vector>

class jus_de_fruits :
    public fruits
{
public:
    jus_de_fruits();
    bool kernel();
    void ajouter(fruits* F);
    void afficher() const override;
    ~jus_de_fruits();
private:
    vector<fruits*> list_fruit;
};

void aff(jus_de_fruits) 
{

};
