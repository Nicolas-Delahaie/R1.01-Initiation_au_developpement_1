/*
 Programme : JeuxDevinerUnNombre
 But :  Trouver une valeur aléatoire entre 0 et 100 en n tentatives
 Date de dernière modification : 13/09/21
 Auteur : N. DELAHAIE et O. CESAT 
 Remarques : Code conforme aux spécification internes données en cours
*/
#include <random>
#include <iostream>
using namespace std;

int main (void)
{
    // VARIABLES
    double ; // 
    const double TAUX_EUROS_VERS_DOLLARS = 1.3383; // 
    
    // TRAITEMENTS
    // clavier >> saisirSommeEuros >> sommeEuros
     cout << "Entrez la somme en euros a convertir en dollars :  ";
     cin >> sommeEuros;

    // sommeEuros, TAUX_EUROS_VERS_DOLLARS >> calculerSommeDollars >> sommeDollars
    sommeDollars = sommeEuros * TAUX_EUROS_VERS_DOLLARS;

    // sommeDollars >> afficherSommeDollars >> écran
    cout << "La somme convertie est egale a " << sommeDollars << " $" << endl;

    return 0;
}