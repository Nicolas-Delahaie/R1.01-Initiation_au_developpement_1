/*
 Programme : 
 But :  Affiche la moyenne d'une série de notes
 Date de dernière modification : 30 septembre 2021  
 Auteur : N. DELAHAIE
 Remarques : Code conforme aux spécification internes données en cours
*/

#include <iostream>
using namespace std;

int main (void)
{
    //    V A R I A B L E S   *********************************************************
    unsigned short int note; // 
    unsigned short int i=0; // 
    unsigned long int total; //
    unsigned short moyenne; //

    //    T R A I T E M E N T S   ******************************************************
    //SAISIE-VERIF
    // clavier >> saisieVerif >> total
    do
    {
        cout << "note sur 20 :  ";
        cin >> note;
        if (0 <= note && note <= 20)    {total += note; i+=1; }
        else if (note == 999)           {break;}
        else                            {cout << "Erreur, ";}
    } 
    while (true);

    //CALCULs
    if (i != 0) {moyenne=total/i;}

    //    A F F I C H A G E   ********************************************************
    //  >>  >> 
    if (i==0)   {cout << "Aucune note saisie" << endl;}
    else        {cout << "Moyenne des " << i << " notes : " << moyenne << endl;}

    return 811;
}


