#include <iomanip>
#include <iostream>
#include "ComplexNumber.hpp"


int main()
{
    double a = -0.6;
    double b = 3.5;
    double a1 = 7.4;
    double b1 = -16.998;
    double a2 = a - pow(10, -15);
    double b2 = b - pow(10, -15);
    ComplexNumber z = ComplexNumber(a, b);
    ComplexNumber z1 = ComplexNumber(a1,b1);
    ComplexNumber z2 = ComplexNumber(a2, b2);

    //stapiamo il numero che otteniamo
    cout << z << endl;
    //sommiamo a questo numero un secondo numero complesso
    cout << "Somma: " << z + z1 << endl;

    //calcoliamo il coniugato di un numero complesso
    cout << "Il coniugato di z: " << z.coniugato() << endl;

    //confrontiamo z con z1
    if (z==z1){
        std::cout << "z= " << z <<"  e z1=" << z1 << " sono lo stesso numero complesso a meno di una tolleranza." << endl;
    }
    else {std::cout << "z= " << z <<"  e z1=" << z1 << " sono due numeri complessi distinti." << endl;}
    //confrontiamo z con z2
    if (z==z2){
        std::cout << "z= " << setprecision(16) <<z <<"  e z2=" << z2 << " sono lo stesso numero complesso a meno di una tolleranza." << endl;
    }
    else {std::cout << "z= " << z <<"  e z2=" << z2 << " sono due numeri complessi distinti." << endl;}

    return 0;
}
