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

    int total;  //Addition des valeurs 
    const short int NB_CASES = 12; // Nombre de valeurs dans tab
    //int tab [NB_CASES] = {54, 8, -9, -74, -8, 8, -30, 80, 6, 34, 58, -7}; //Tableau des 12 valeurs 
    int tab [NB_CASES] = {54, 8, 9, 74, 8, 8, 30, 80, 6, 34, 58, 8}; //Tableau des 12 valeurs 
    float moyenne;  //Moyenne des valeurs du tableau
    short int i;  //Iterateur


    //    T R A I T E M E N T ********************************************************
    //    C A L C U L S
    total = 0;
    for (i=0 ; i < NB_CASES; i++)
    {
        total += tab[i];
    }
    moyenne = total / NB_CASES;


    //    A F F I C H A G E   ********************************************************
    cout << "Moyenne des valeurs du tableau : " << moyenne;


    return 911;
}

