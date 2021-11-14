/*
 Programme : Saisie et verifications d une note en affichant si erreur
 But :  Entrer une note comprise entre 0 et 20 et afficher si erreur
 Date de dernière modification : 23 septembre 2021  
 Auteur : N. DELAHAIE
 Remarques : Code conforme aux spécification internes données en cours
*/

#include <iostream>
using namespace std;

int main (void)
{
    //    V A R I A B L E S   *********************************************************
    double note ;  
    
    //    T R A I T E M E N T S   ******************************************************
    // clavier >> saisieNote >> note
    cout << "Entrez la note : ";
    do
        {
        cin >> note ;
        if (0 <= note && note <= 20) { break; }
        cout << "Erreur, entrez une valeur entre 0 et 20 :";
        }
    while (true);

    
    //    A F F I C H A G E   ********************************************************
    // note >> retourneMerci >> écran 
    cout << "Merci " << endl;

    return 0;
}

