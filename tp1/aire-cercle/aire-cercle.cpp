#include <iostream>
using namespace std;

int main (void)
{
    const double pi = 3.14;
    double rayon;
    double aire;
    
    cout << "Rayon : ";
    cin >> rayon;

    aire = rayon * pi;

    cout << aire << endl;

    return 0;
}
