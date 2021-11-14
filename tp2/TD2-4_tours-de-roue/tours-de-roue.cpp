/*
 Programme : Tours de roue
 But :  Renvoyer le nombre de tours de roue d'un rayaon donné sur une distance donnée
 Date de dernière modification : 8 septembre 2021
 Auteur : N. DELAHAIE   
 Remarques : Code conforme aux spécification internes données en cours
*/

#include <iostream>
#include <cmath>
using namespace std;

int main (void)
{
    // VARIABLESB
    double distkm;
    double rayon;
    double distcm;
    double peri;
    double nbtours;
    double nbtoursarr; 
    const double Pi = 3.14159; 

    
    // TRAITEMENTS
    // clavier >> SaisirDistance >> distkm
     cout << "Quel est la distance en km ? ";
     cin >> distkm;

    // clavier >> SaisirRayon >> rayon
     cout << "Quel est le rayon en cm ? ";
     cin >> rayon;


    //CALCULS
    //distkm >> ConversionKmCm >> distcm
    distcm = distkm*10000;

    //rayon, Pi >> CalculPerimetre >> peri
    peri = 2*Pi*rayon ;

    //peri, distcm >> CalculTours >> nbtours
    nbtours = distcm / peri;

    //nbtours >> ArrondiSupp >> nbtours
    nbtoursarr = ceil(nbtours);  

    //AFFICHAGE
    // nbtours >> AfficherNombreTours >> écran
    cout << "Cette roue peut faire " << nbtoursarr << " tours de roues sur " << distkm << "km." << endl;


}