 /*
  Programme : Valeur entre 10 et -10
  But : Ce programme affiche tous les entiers compris dans l'intervalle 10 à -10

  Date de création : 3 novembre 2013
  Date de dernière modification : 30/09 par N. DELAHAIE
  Auteur : P. Etcheverry
  Remarques : Programme erroné. A Utiliser pour apprendre à utiliser le débogueur.
*/
#include <iostream>
using namespace std;

int main (void)
{
  // Défintion des bornes de l'intervalle à afficher  
  const short unsigned int VALEUR_DEPART = 10;
  const short signed int VALEUR_ARRIVEE = -10;
  unsigned int i = VALEUR_DEPART;

  // Affichage des entiers compris dans l'intervalle
  for (i ; i >= VALEUR_ARRIVEE ; i--)
  {
    cout << i << " ";
  } 
  return 811;
}