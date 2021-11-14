/*
 Programme :
 But :  
 Date de dernière modification : 
 Auteur : N. DELAHAIE
 Remarques : Code conforme aux spécification internes données en cours
*/

#include <iostream>

using namespace std;

int main (void)
{
    //    V A R I A B L E S   *********************************************************

    int nbValNiga;  //Somme des valeurs negatives
    const short int NB_CASES = 12;  //Taille du tableau de valeurs
    int tab [NB_CASES] = {54, 8, -9, -74, -8, 8, -30, 80, 6, 34, 58, -7}; //Tableau de 12 valeurs 
    int tab [NB_CASES] = {54, 8, 9, 74, 8, 8, 30, 80, 6, 34, 58, 7}; //Tableau des 12 valeurs


    //    T R A I T E M E N T ********************************************************
    nbValNiga = 0;
    for (int i=0 ; i < NB_CASES; i++)
    {
        if (tab[i] <= 0)  {nbValNiga ++;}
    };

    //    A F F I C H A G E   ********************************************************
    cout << "Nombre de valeurs negatives : " << nbValNiga;

    return 911;
}

