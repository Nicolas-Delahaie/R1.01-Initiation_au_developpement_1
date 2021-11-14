/*
 Programme : SigneDunNombre
 But :  Affiche le signe d'un nombre entré
 Date de dernière modification : 16 septembre 2021  
 Auteur : N. DELAHAIE
 Remarques : Code conforme aux spécification internes données en cours
*/

#include <iostream>
using namespace std;

int main (void)
{
    // VARIABLES**********************************************************
    double nb ; //Nombre entré par l'utilisateur
    string signe ; //Signe du nombre


    // TRAITEMENTS*******************************************************
    //  Clavier >> saisirNombre >> nb 
     cout << "Entrez le nombre :  ";
     cin >> nb;

    // nb >> determinerSigne >> signe
    if (nb > 0) 
    {
        signe = "positif";
        }
    else if (nb < 0) 
    {
        signe = "negatif";
        }
    else 
    {
        signe = "nul";
        }

    // signe >> afficheLeSigne >> ecran 
    cout << nb <<" est " << signe << endl;

    return 0;
}