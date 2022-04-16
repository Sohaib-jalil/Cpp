// G3app.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#include <iostream>
#include "Compte.h"
using namespace Banque;
using namespace std;
int main()
{
    char nom1[20] = "user1";
    char nom2[20] = "user2";
    // creation static d'objets c1 et c2
    Compte c1(nom1, 20000); // avec parametres
    Compte c2(nom2, 10000); 
    c1.consulterSolde();
    c2.consulterSolde();


    // creation dynamique d'objet
  Compte *c3 = new Compte( nom1, 30000);
    //c1.consulterSolde();
   /* c1.transfererArgent(&c2, 5000);
    c1.consulterSolde(); //15000
    c2.consulterSolde(); //15000
    c3->consulterSolde(); 
    c3->deposerArgent(5000);
    */
   delete c3;
    
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
