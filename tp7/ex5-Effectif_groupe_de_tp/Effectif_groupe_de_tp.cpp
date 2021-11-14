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
    struct UnEtudiant
    {
        string nom ;
        string prenom;
        unsigned short int td;
        unsigned short int tp;
    };
    const unsigned int EFFECTIF_S1 = 15;
    unsigned short int effectifTp;
    unsigned short int tp;

    
        // Etudiants inscrits en semestre 1 :
    UnEtudiant etudiantsS1[EFFECTIF_S1] = {
        {"Almeras", "Valentin", 1, 1}, {"Gueguen", "Lucie", 1, 1},
        {"Pomeroy", "Thibault", 1, 1}, {"Souchon", "Elodie", 1, 2},
        {"Besnard", "Emmanuel", 1, 2}, {"Gaudreau", "Lucien", 2, 3},
        {"Duret", "Christelle", 2, 3}, {"Laffitte", "Anna", 2, 4},
        {"Barbier", "Remi", 2, 4},     {"Blondeau", "Denise", 2, 4},
        {"Berlioz", "Gabriel", 2, 4},  {"Dupont", "Benjamin", 3, 5},
        {"Maret", "Ludovic", 3, 5},    {"Boutin", "Alain", 3, 5},
        {"Dubuisson", "Marie", 3, 5}};


    //    T R A I T E M E N T ********************************************************
    //    S A I S I E 
    cout << "Numero TP :";
    cin >> tp;

    //    C A L C U L S
    effectifTp = 0;
    

    //    A F F I C H A G E   ********************************************************
    cout << "Moyenne des valeurs du tableau : " << moyenne;


    return 911;
}

