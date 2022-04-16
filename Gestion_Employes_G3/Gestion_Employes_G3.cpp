// Gestion_Employes_G3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Employe.h"
#include "Responsable.h"
#include "Commerciaux.h"
#include "Personnel.h"

int main()
{
    Responsable *ceo = new Responsable("ceo", 300, "ceo");
    Responsable *R1 = new Responsable("Res1", 200, "chef_equipe_E");
    Responsable*R2 = new Responsable("Res2", 200, "chef_equipe_C");
    Employe *E3 = new Employe("Emp3", 100);
    Commerciaux *C4 = new Commerciaux("Comrs3", 100);
    Personnel* P = new Personnel();

    double sal_total;

    C4->mettre_a_jour_vente(1000);
    C4->mettre_a_jour_vente(1000);
    
    P->add_perso(ceo);
    P->add_perso(R1);
    P->add_perso(R2);
    P->add_perso(E3);
    P->add_perso(C4);

    R1->add_sub(E3);
    R2->add_sub(C4);
    ceo->add_sub(R1);
    ceo->add_sub(R2);

    ceo->afficher();

    sal_total = P->cal_sal_total();

    cout << endl << endl;
    cout << sal_total;
}
