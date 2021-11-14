/*
 Programme : Calcul soldes
 But :  Calcul le nouveau prix des soldes
 Date de dernière modification : 8 septembre 2021
 Auteur : N. DELAHAIE   
 Remarques : Code conforme aux spécification internes données en cours
*/

#include <iostream>
using namespace std;

int main (void)
{
    // VARIABLES
    double prixinit;  
    double reduc; 
    double taux;
    double nvprix;

    
    // TRAITEMENTS
    // clavier >> SaisirPrix >> prixinit
     cout << "Quel est le prix initial ? ";
     cin >> prixinit;

    // clavier >> SaisirReduction >> reduc
     cout << "Quel est la reduction ? ";
     cin >> reduc;


    //CALCULS
    //reduc >> ReducEnMultiplicateur >> taux
    taux = 1 - reduc/100;

    //taux, prixinit >> CalculNouveauPrix >> nvprix
    nvprix = prixinit * taux;


    //AFFICHAGE
    // nvprix >> AfficherNouveauPrix >> écran
    cout << "Le nombre 1 est egal a " << nvprix << endl;


}