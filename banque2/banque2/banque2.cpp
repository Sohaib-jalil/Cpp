// banque2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include "compte.h"
#include "devise.h"
#include "client.h"
#include "compte_epargne.h"
#include "compte_courant.h"
#include "compte_payant.h"
#include "compte_epargne_payant.h"


int main()
{
    devise* montan = new devise(73572.8942);
    devise* montan2 = new devise(10000);
    client* C = new client("jalil", "sohaib", "somewhere");
    compte* cmp = new compte(montan, C);
    compte_epargne* cmp_ep = new compte_epargne(montan, C, 5);
    compte_courant* cmp_cou = new compte_courant(montan, C, montan2);
    compte_payant* cmp_pa = new compte_payant(montan, C);
    compte_epargne_payant* cmp_ep_pa = new compte_epargne_payant(montan, C, 5);

    cout << "info client" << endl;
    C->afficher();

    cout << endl;
    cout << "Compte normal:" << endl;
    cmp->consulter();  
    cmp->depot(montan2);
    cmp->consulter();
    cmp->retirer(montan2);
    cmp->consulter();

    cout << endl;
    cout << "Compte epargne:" << endl;
    cmp_ep->consulter();
    cmp_ep->depot(montan2);
    cmp_ep->consulter();
    cmp_ep->retirer(montan2);
    cmp_ep->consulter();

    cout << endl;
    cout << "Compte courant:" << endl;
    cmp_cou->consulter();
    cmp_cou->depot(montan2);
    cmp_cou->consulter();
    cmp_cou->retirer(montan2);
    cmp_cou->consulter();

    cout << endl;
    cout << "Compte payant:" << endl;
    cmp_pa->consulter();
    cmp_pa->depot(montan2);
    cmp_pa->consulter();
    cmp_pa->retirer(montan2);
    cmp_pa->consulter();

    cout << endl;
    cout << "Compte epargne payant:" << endl;
    cmp_ep_pa->consulter();
    cmp_ep_pa->depot(montan2);
    cmp_ep_pa->consulter();
    cmp_ep_pa->retirer(montan2);
    cmp_ep_pa->consulter();
}
