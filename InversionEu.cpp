#include <iostream>
#include <cmath>
using namespace std;

float p=0, r=0, n=0;

int main() {
    
    cout << "Cuantos euros:";
    cin >> p;
    cout << "Tasa interes:";
    cin >> r; 
    cout <<"Anos proyectados:";
    cin >> n; 

    float par= 1-r/100;
    float pres= pow(par,n+1);
    float resultado= p*pres/par;


    cout << "El total es de: " << resultado << endl;
    
    return 0;
}