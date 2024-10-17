// exercice 1 COMPLEXE.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Complexe.h"
using namespace std;
int main()
{
    Complexe a(1, 1);

    Complexe b, c, d, e, f, g, k,i;
    cout << "a=";
    a.afficher();
    double d1, h=10;
    d1= a.module();
    cout << "le module de a est :" << d1 << "\n";
    b = a.conjugue();
    cout << "le conjuguee  de a est b et b=";
    b.afficher();
    c = a + b;
    cout << "la somme de a et b est c et c=";
    c.afficher();
    cout << "la somme de a avec 10 est =";
    d = a + h;
    d.afficher();
    e = a - b;
    cout << "le resultat de a-b est =";
    e.afficher();
    f = a - h;
    cout << "le resultat de a-10 est =";
    f.afficher();
    g = a * b;
    cout << "le resultat de a*b est =";
    g.afficher();
    k = a * h;
    cout << "le resultat de a*10 est   =";
    k.afficher();
    i = a / b;
    cout << "le resultat de a/b est   =";
    i.afficher();
    if(a==b)
        cout<< "a et b sont egaux";
    else
        cout << "a et b ne sont pas egaux";
  



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
