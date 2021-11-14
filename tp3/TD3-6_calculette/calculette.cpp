/*
 Programme : calculette
 But : Applique à 2 nombres une opération mathématique (+, -, /, *)
 Date de dernière modification : 16 septembre 2021  
 Auteur : N. DELAHAIE
 Remarques : Code conforme aux spécification internes données en cours
*/

#include <iostream>
using namespace std;

int main (void)
{
    // VARIABLES*********************************************************
    double n1; //Nombre 1
    char oper; //Opérateur entre n1 et n2 
    double n2; //Nombre 2
    double resultat; //Résultat de l'opération
    bool divZero = false; //Vrai si le numérateur est égal à 0 (cas d'erreur)
    bool opInv = false; //Vrai si l'opérateur est invalide (cas d'erreur)
    

    // TRAITEMENTS******************************************************
    // Clavier >> SaisirNombre1 >> n1
     cout << "Nombre 1 : ";
     cin >> n1;
     // Clavier >> SaisirOperateur >> oper 
     cout << "Operateur : ";
     cin >> oper;
     // Clavier >> SaisirNombre1 >> n2 
     cout << "Nombre 2 : ";
     cin >> n2;

    //opInv,divZero,n1,n2,oper >> calcul >> opInv,divZero,resultat
    switch (oper) {
        case '+' : resultat = n1+n2;
        break;
        case '-' : resultat = n1-n2;
        break;
        case '*' : resultat = n1*n2;
            break;
        case '/' : 
            if (n2 != 0){resultat = n1/n2;}
            else {divZero = true;}
            break;
        default: opInv = true ;
            break;
    }


    // AFFICHAGE********************************************************
    // opInv,divZero,resultat >> affiche >> écran 
    if (opInv){
        cout << "Operation invalide" << endl;
    }
    else{
        if (divZero){
            cout << "Division impossible" << endl;
        }
        else{
            cout << n1 << " " << oper << " " << n2 << " = "  << resultat << endl;
        }
    }

    return 0;
}