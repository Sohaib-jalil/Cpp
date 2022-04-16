// Exam(17-02-2021)EX2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"fruits.h"
#include"salade_fruits.h"
#include"jus_de_fruits.h"

int main()
{
    fruits* F1 = new fruits("Avocat", true);
    fruits* F2 = new fruits("Banane", false);
    fruits* F3 = new fruits("pome", true);
    fruits* F4 = new fruits("fraise", false);
    fruits* F5 = new fruits("mange", true);
    fruits* F6 = new fruits("annanas", false);
    fruits* F7 = new fruits("orange", true);
    fruits* F8 = new fruits("kiwi", false);

    salade_fruits* S1 = new salade_fruits();
    salade_fruits* S2 = new salade_fruits();

    jus_de_fruits* J1 = new jus_de_fruits();


    S1->ajouter(F1);
    S1->ajouter(F2);
    S1->ajouter(F3);

    S2->ajouter(F4);
    S2->ajouter(F5);

    J1->ajouter(F7);
    J1->ajouter(F8);

    S1->ajouter(S2);

    S1->ajouter(F6);

    S1->ajouter(J1);

    S1->afficher();

    cout << S1->kernel();

    delete S1;
    delete S2;
    delete J1;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
