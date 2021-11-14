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
    //    V A R I A B L E S       ******************************************************
    short int temperature [12];             // 
    char lettre [4] = {'a', 'b', 'c', 'd'}; // *
    unsigned short int i = 1 ;


    //    S A I S I E S           ******************************************************
    for (i ; i <= 12 ; i++)
    {
        cout << "Temperature numero " << i << " ?" << endl;
        cin >> temperature[i];
    }
    
    //    T R A I T E M E N T S   ******************************************************
    cout << "lettre 1 :" << lettre[1] << endl;
    cout << "Temparature saisies" ;
    for (i = 0; i < 12 ; i++)
    {
        cout << ", " << temperature[i];
    }

    return 911;
}

