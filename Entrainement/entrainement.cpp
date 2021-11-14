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
    //    ****************      D E C L A R A T I O N S      ***************
    
    const unsigned int tailleTab1 = 4;
    const unsigned int tailleTab2 = 7;
    const unsigned int tailleTabResultat = 11;
    int tab1[tailleTab1] = {-44,-20,-2,-1};
    int tab2[tailleTab2] = {-60,-20,-2,-2,0,30,55};
    int tabResultat[tailleTabResultat];
    
    unsigned int indiceTab1;
    unsigned int indiceTab2;
    unsigned int indiceTabResultat;
    
    // Se positionner au debut des 3 tableaux 
    indiceTab1 = 0;
    indiceTab2 = 0;
    indiceTabResultat = 0;

    // Fusionner tab1 et tab2
    while (true)
    {
        if ( indiceTab1 >= tailleTab1 && indiceTab2 >= tailleTab2)
        {
            break;
        }

        //Copier l'élément courant de tab1 ou de tab2 voire les deux dans tabResultat
        if ( indiceTab1 < tailleTab1 && indiceTab2 >= tailleTab2)
        {
            //Copier l'élement de tab1 et progresser
            tabResultat[indiceTabResultat] = tab1[indiceTab1];
            indiceTab1 ++;
            indiceTabResultat ++;
        }
        
        else if (indiceTab2 < tailleTab2 && indiceTab1 >= tailleTab1)
        {
            //Copier l'élément de tab2 et progresser
            tabResultat[indiceTabResultat] = tab2[indiceTab2];
            indiceTab2++;
            indiceTabResultat++;
        }
        else
        {
            //Copier l'élément de tab1 ou tab2 voir les deux et progresser
            if (tab1[indiceTab1] < tab2[indiceTab2])
            {
                //Copier l'élément de tab1 et progresser
                tabResultat[indiceTabResultat] = tab1[indiceTab1];
                indiceTab1++;
                indiceTabResultat++;
            }
            else if (tab2[indiceTab2] < tab1[indiceTab1])
            {
                //Copier l'élement de tab2 et progresser
                tabResultat[indiceTabResultat] = tab2[indiceTab2];
                indiceTab2++;
                indiceTabResultat++;
            }
            else 
            {
                //Copier l'élément de tab1 et tab2, puis progresser
                tabResultat[indiceTabResultat] = tab1[indiceTab1];
                tabResultat[indiceTabResultat + 1] = tab2[indiceTab2];
                indiceTab1++;
                indiceTab2++;
                indiceTabResultat +=2;
            }
        }
    }

    //Afficher tabResultat
    for (indiceTabResultat = 0 ; indiceTabResultat < tailleTabResultat ; indiceTabResultat++)
    {
        cout << tabResultat[indiceTabResultat] << " ";
    }
    

    return 911;
}

