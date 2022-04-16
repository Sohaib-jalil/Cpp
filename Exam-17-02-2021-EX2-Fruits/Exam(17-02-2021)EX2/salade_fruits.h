#pragma once
#include "fruits.h"
#include<vector>


class salade_fruits :
    public fruits
{
public:
    salade_fruits();
    bool kernel();
    void ajouter(fruits* F);
    void afficher() const override;
    ~salade_fruits();
private:
    vector<fruits*> list_fruit;
};

