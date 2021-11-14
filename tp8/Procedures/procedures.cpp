/*
 Programme :
 But :  
 Date de dernière modification : 
 Auteur : N. DELAHAIE
 Remarques : Code conforme aux spécification internes données en cours
*/

#include <iostream>
using namespace std;
#include <math.h>

struct UnEtudiant
{
    string nom;
    string prenom;
    float note;
};
double sqrt(double X);
    /*Renvoit la racine carrée de X*/
void AfficherPrixReduit(double prixInitial, unsigned short int reduction)
    /*1: A partir d un prixInitial et d une reduction, affichePrixReduit retourne le prixReduit*/;
void CalculerPrixReduit(double prixInitial, unsigned short int reduction, double &prixReduit)
    /*2: A partir d un prixInitital et d une reduction, modifie le prixReduit*/;
void EchangeDeuxCases(unsigned int index1, unsigned int index2, int tableau[])
    /*4: A partir d un tableau et de 2 indexes, modifie tableau en echangeant les 2 valeurs de place*/;
void CompteurValPositives(const int tableau[], unsigned short int nbCases, int &nbValPos)
    /*5: A partir d'un tableau de nbCases, compte le nbValPos */;
void InverserValTableau(const int tab[], unsigned short int nbCases, int tab2[])
    /*6: A partir d'un tableau de nbCases, renvoit un tableau inversé*/;
void MoyenneEtudiants(const UnEtudiant etudiants[], unsigned int nbEtudiants, unsigned int &notesSupAMoyenne, unsigned int &notesInfAMoyenne)
    /*7: A partir d'un tableau de nbEtudiants, renvoie le nombre de notesSupAMoyenne*/;
void DeterminerPremiers(unsigned int borneRecherchePremiers, bool nombresPremiers[])
    /*8: A partir d'une borneRecherchePremiers, la fonction renvoiera un tableau booléen des nombresPremiers*/;

int main(void)
{
    // Reduction
    double prix = 100;
    unsigned short int reduction = 20;
    double nouveauPrix;
    AfficherPrixReduit(prix, reduction);
    CalculerPrixReduit(prix, reduction, nouveauPrix);
    cout << nouveauPrix << endl;

    // Tableaux
    const unsigned short int TAILLE = 12;
    unsigned int premier = 0;
    unsigned int dernier = 11;
    int valPos;
    int nombres[TAILLE] = {10, -60, 70, 23, 48, 20, -51, -62, 64, -84, 7, 9};
    int nouveauxNombres[TAILLE];

    for (int i = 0; i < TAILLE; i++)
    {
        cout << nombres[i] << "  ";
    }
    cout << endl
         << endl
         << "Cases inversees : ";
    EchangeDeuxCases(premier, dernier, nombres);
    for (int i = 0; i < TAILLE; i++)
    {
        cout << nombres[i] << "  ";
    }
    CompteurValPositives(nombres, TAILLE, valPos);
    cout << endl
         << "Valeurs positives :" << valPos << endl
         << "Tableau inverse : ";
    InverserValTableau(nombres, TAILLE, nouveauxNombres);
    for (int i = 0; i < TAILLE; i++)
    {
        cout << nouveauxNombres[i] << "  ";
    }

    //Types enumérés
    const unsigned int EFFECTIF_S1 = 70;
    UnEtudiant notesExamDu25fevrier[EFFECTIF_S1];
    unsigned int bonsEleves;
    unsigned int mauvaisEleves;
    MoyenneEtudiants(notesExamDu25fevrier, EFFECTIF_S1, bonsEleves, mauvaisEleves);
    cout << endl
         << bonsEleves << " eleves ont la moyenne et " << mauvaisEleves << " l'ont pas" << endl;

    //Premiers
    const unsigned int MAX = 100;
    bool premiers[MAX];
    //DeterminerPremiers(MAX, premiers);
    for (int i = 0; i < TAILLE; i++)
    {
        cout << premiers[i] << "  ";
    }
}
/*
void DeterminerPremiers(unsigned int borneRecherchePremiers, bool nombresPremiers[])
{
    
    float racine = sqrt(static_cast<float>(borneRecherchePremiers));
    unsigned int maxi = round(racine);
    unsigned int i = 2;
    nombresPremiers[2] = true;
    while (i <= maxi)
    {
        if (nombresPremiers[i])
        {
            for (unsigned int n = i; n < borneRecherchePremiers; n += i)
            {
                if (n % i == 0)
                {
                    nombresPremiers[n] = false;
                }
            }
        }
        i++;
    }
}
*/

void MoyenneEtudiants(const UnEtudiant etudiants[], unsigned int nbEtudiants, unsigned int &notesSupAMoyenne, unsigned int &notesInfAMoyenne)
{
    notesSupAMoyenne = 0;
    for (unsigned int i = 0; i < nbEtudiants; i++)
    {
        if (etudiants[i].note >= 10)
        {
            notesSupAMoyenne++;
        }
        notesInfAMoyenne = nbEtudiants - notesSupAMoyenne;
    }
}

void InverserValTableau(const int tab[], unsigned short int nbCases, int tab2[])
{
    for (unsigned int i = 0; i < nbCases; i++)
    {
        tab2[i] = tab[nbCases - 1 - i];
    }
}

void CompteurValPositives(const int tableau[], unsigned short int nbCases, int &nbValPos)
{
    nbValPos = 0;
    for (unsigned int i = 0; i < nbCases; i++)
    {
        if (tableau[i] > 0)
        {
            nbValPos++;
        }
    }
}

void EchangeDeuxCases(unsigned int index1, unsigned int index2, int tableau[])
{
    int temp;
    temp = tableau[index1];
    tableau[index1] = tableau[index2];
    tableau[index2] = temp;
}

void CalculerPrixReduit(double prixInitial, unsigned short int reduction, double &prixReduit)
{
    prixReduit = prixInitial * (1.0 - reduction / 100.0);
}

void AfficherPrixReduit(double prixInitial, unsigned short int reduction)
{
    cout << prixInitial * (1.0 - reduction / 100.0) << endl;
}

double sqrt(double X)
{
    double A, B, M, XN;
    if (X == 0.0)
    {
        return 0.0;
    }
    else
    {
        M = 1.0;
        XN = X;
        while (XN >= 2.0)
        {
            XN = 0.25 * XN;
            M = 2.0 * M;
        }
        while (XN < 0.5)
        {
            XN = 4.0 * XN;
            M = 0.5 * M;
        }
        A = XN;
        B = 1.0 - XN;
        do
        {
            A = A * (1.0 + 0.5 * B);
            B = 0.25 * (3.0 + B) * B * B;
        } while (B >= 1.0E-15);
        return A * M;
    }
}