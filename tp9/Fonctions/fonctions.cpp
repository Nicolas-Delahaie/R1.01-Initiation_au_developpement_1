/*
 Programme :
 But :  
 Date de dernière modification : 
 Auteur : N. DELAHAIE
 Remarques : Code conforme aux spécification internes données en cours
*/

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "game-tools.h"
using namespace std;

struct Adresse
{
    string numRue;
    string nomRue;
    unsigned int codePostal;
    string ville;
};
struct Personne
{
    string nom;
    string prenom;
    Adresse adresse;
};
struct Date
{
    unsigned short int jour;
    unsigned short int mois;
    unsigned short int annee;
};


float absolu (float nombre);
/*"Retourne la valeur absolue du nombre"*/
bool noteOuPas (float nombre);
/*Indique si nombre est compris entre 0 et 20 ou non*/
Adresse adressePersonne(Personne unePersonne);
/*Retourne l'adresse d'unePersonne */
float moyenne (unsigned int TAILLE, float valeurs[]);
/*Retourne la moyenne des TAILLE valeurs */
unsigned int adresseHab (const Personne habitants[], unsigned int TAILLE, unsigned int codePost);
/*Retourne l'adresse d'une personne en fonction de son nom et prenom*/
string lievreTortue ();
/*Retourne le résultat d'une course*/
string jourCalendrierPerpetuel(Date uneDate);
/*Retourne une nouvelle date, sur laquelle a été effectué ledecalage*/

int main (void)
{   
    const unsigned int NBRE_EMPLOYES = 15; // nombre d'employés dans la structure
    Personne listeEmployes[NBRE_EMPLOYES] = { // nom, prénom et adresse des employés
      {"Almeras", "Valentin", {"29", "impasse Michelle Reynaud", 64600, "Anglet"}},
      {"Gueguen", "Lucie", {"631bis", "rue Leconte", 64100, "Bayonne"}},
      {"Pomeroy", "Thibault", {"158", "boulevard Devaux", 64200, "Biarritz"}},
      {"Souchon", "Elodie", {"68", "chemin Eric Pascal", 64200, "Biarritz"}},
      {"Besnard", "Emmanuel", {"08", "place Ferrand", 64600, "Anglet"}},
      {"Gaudreau", "Lucien", {"46", "impasse Simone Humbert", 64100, "Bayonne"}},
      {"Duret", "Christelle", {"02bis", "Chemin Imbert", 64200, "Biarritz"}},
      {"Laffitte", "Anna", {"31", "rue Lemoins", 64600, "Anglet"}},
      {"Barbier", "Remi", {"88", "impasse Richard Marin", 64100, "Bayonne"}},
      {"Blondeau", "Denise", {"83", "avenue Laroche", 64200, "Biarritz"}},
      {"Berlioz", "Gabriel", {"55", "rue Descamps", 64100, "Bayonne"}},
      {"Dupont", "Benjamin", {"40", "boulevard Duvois", 64200, "Biarritz"}},
      {"Maret", "Ludovic", {"76", "impasse de Meunier", 64600, "Anglet"}},
      {"Boubakar", "Alain", {"13", "boulevard de Guillou", 64200, "Biarritz"}},
      {"Dubuisson", "Marie", {"24", "rue Capucine Chevallier", 64600, "Anglet"}}};

    float n1;
    n1 = -10;
    cout << "Valeur absolue de " << n1 << " : " << absolu (n1) << endl;
    
    cout << n1 << " : " << noteOuPas(n1) << endl;
    //if (noteOuPas(n1)) {cout << "Nombre est bien une note" << endl;}
    //else {cout << "Nombre n'est pas une note" << endl;}
    n1=20;
    cout << n1 << " : " << noteOuPas(n1) << endl;

    Adresse monAdresse;
    monAdresse = adressePersonne (listeEmployes[51]);
    cout << monAdresse.nomRue << " " << monAdresse.numRue << endl;

    const unsigned int nbCases = 10;
    float valeurs[nbCases] = {-20,37,91,29,30,47,10,-273,-19,29};
    cout << "Moyenne : " << moyenne(nbCases,valeurs) << endl;

    unsigned int ville;
    ville = 64100;
    cout << "Il y a " << adresseHab(listeEmployes, NBRE_EMPLOYES, ville) << " habitants avec le code postal " << ville << endl;

    Date annivNico;
    annivNico = {6, 1, 2003};
    cout << (jourCalendrierPerpetuel(annivNico)) << endl;

    cout << lievreTortue() << endl;

    return 911;
}



string jourCalendrierPerpetuel(Date uneDate)
{
    string joursSemaine[7] = {"Lundi", "Mardi", "Mercredi", "Jeudi", "Vendredi", "Samedi", "Dimanche"};
    unsigned int decalageMois;
    unsigned int decalageAnnee;
    unsigned int decalageAnneePartie1= 00;
    unsigned int decalageAnneePartie2= 00;
    unsigned int numJour;
    
    if (uneDate.mois <= 2)
    {
        decalageMois = uneDate.mois + 10;
        decalageAnnee = uneDate.annee - 1;
    }
    else 
    {
        decalageMois = uneDate.mois - 2;
        decalageAnnee = uneDate.annee ;
    }       
    decalageAnneePartie1= decalageAnnee / 100;
    decalageAnneePartie2= decalageAnnee % 100;
    
    /*cout << "Jour : " << uneDate.jour << endl
         << "Mois : " << decalageMois << endl
         << "Annee : " << decalageAnnee << endl
         << decalageAnneePartie1 << endl
         << decalageAnneePartie2 << endl;*/
    
    numJour = (uneDate.jour + 
              (13 * decalageMois - 1) / 5 + 
              decalageAnneePartie2 + 
              decalageAnneePartie2 / 4 + 
              decalageAnneePartie1 / 4 + 
              5 * decalageAnneePartie1) % 7;

    return joursSemaine[numJour];
}

string lievreTortue ()
{
    int pioche;
    unsigned short int tortue;

    tortue = 0;
    while (tortue < 6)
    {
        pioche = random(1,6);
        if (pioche ==6) 
        {
            return "Lievre";
        }
        tortue++;
        cout << "Pioche : " << pioche << endl;
    }
    return "Tortue";
    
}

unsigned int adresseHab (const Personne habitants[], unsigned int TAILLE, unsigned int codePost)
{
    unsigned int nbHabitants;
    nbHabitants=0;
    for (unsigned int i = 0; i < TAILLE; i++)
    {
        if (habitants[i].adresse.codePostal == codePost)
        {
            nbHabitants ++;
        }
    }
    return nbHabitants;
}

float moyenne (unsigned int TAILLE, float valeurs[])
{
    float total;
    total = 0;
    for (unsigned int i=0; i < TAILLE; i++)
    {
        total += valeurs[i];
    }
    return total/static_cast<float>(TAILLE);
}

Adresse adressePersonne(Personne unePersonne)
{
    return unePersonne.adresse;
}

bool noteOuPas (float nombre)
{
    if ((0 <= nombre) && (nombre <= 20))
    {
        return true;
    }
    else
    {
        return false;
    }
    
}
float absolu (float nombre)
{
    if (nombre >= 0)
    {
        return nombre;
    }
    else
    {
        return -nombre;
    }
}


