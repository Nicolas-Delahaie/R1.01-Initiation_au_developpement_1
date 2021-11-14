/*
 Programme : echange-nombres
 But :  Echange 2 nombres entrés
 Date de dernière modification : 8 septembre 2021
 Auteur : N. DELAHAIE   
 Remarques : Code conforme aux spécification internes données en cours
*/

#include <iostream>
using namespace std;

int main (void)
{
    // VARIABLES
    double nb1;  
    double nb2; 
    double temp; // temp : variable temporaire qui prendra la valeur de nb1
    
    // TRAITEMENTS
    // clavier >> SaisirNb1 >> nb1
     cout << "Entrez le nombre 1 a echanger ";
     cin >> nb1;

    // clavier >> SaisirNb2 >> nb2
     cout << "Entrez le nombre 2 a echanger ";
     cin >> nb2;

    //nb1,nb2 >> Echange des variables >> nb1, nb2 
     temp = nb1;  
     nb1 = nb2;
     nb2 = temp;

    // nb1, nb2 >> AfficherNombre >> écran
    cout << "Le nombre 1 est egal a " << nb1 << endl;
    cout << "Le nombre 2 est egal a " << nb2 << endl;


}