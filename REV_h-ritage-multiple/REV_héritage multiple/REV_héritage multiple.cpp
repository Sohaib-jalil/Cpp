// REV_héritage multiple.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"ordinateur_portable.h"
#include<vector>


int main()
{
    ordinateur_portable* ordi1 = new ordinateur_portable(20000, "prio1", 120, 2000, "dell1", 20, 22, 5.2);
    ordinateur_portable* ordi2 = new ordinateur_portable(30000, "prio2", 201, 2000, "dell2", 20, 22, 5.2);
    ordinateur_portable* ordi3 = new ordinateur_portable(25000, "prio3", 300, 2000, "dell3", 20, 22, 5.2);
    ordinateur_portable* ordi4 = new ordinateur_portable(15000, "prio4", 16, 2000, "dell4", 20, 22, 5.2);

    vector<ordinateur_portable*> list_ordi_port;

    list_ordi_port.push_back(ordi1);
    list_ordi_port.push_back(ordi2);
    list_ordi_port.push_back(ordi3);
    list_ordi_port.push_back(ordi4);

    for (int i = 0; i < list_ordi_port.size(); i++)
    {
        list_ordi_port[i]->ram_sup();
    }

    //ordi1->afficher();
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
