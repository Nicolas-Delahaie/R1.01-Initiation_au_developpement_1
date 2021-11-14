/*
 Programme : 
 But : Additionne tous les entiers d'une borne à une autre
 Date de dernière modification : 24 septembre 2021  
 Auteur : N. DELAHAIE
 Remarques : Code conforme aux spécification internes données en cours
*/

#include <iostream>
using namespace std;

int main ()
{
    //    V A R I A B L E S   *********************************************************
    int borneSup; // 
    int i;
    int somme;
    int borneInf;
    bool erreur;


    //    T R A I T E M E N T S   ******************************************************
    // clavier >> saisieBornInf,saisieBorneSup >> borneInf, borneSup
    cout << "Entrez la borne inferieure :  ";
    cin >> borneInf;
    cout << "Entrez la borne superieure :  ";
    cin >> borneSup;
    erreur = false;
    if (borneSup < borneInf) {erreur = true;}
    else {
        somme = 0;      
        for (i = borneInf ; i <= borneSup ; i++) {somme += i;}
    }
    

    //    A F F I C H A G E   ********************************************************
    // somme >> retournerSomme >> ecran 
    if (erreur == true) { cout << "Erreur saisie bornes";}
    else {cout << "La somme des entiers inferieurs a " << borneSup << " est egale a " << somme << endl;}

    return 0;
}

