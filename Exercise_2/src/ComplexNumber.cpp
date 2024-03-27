#include "ComplexNumber.hpp"
#include <iostream>
#include "Eigen/Eigen"
#include <cmath>

//andiamo ora a definire l'operatore di somma tra due numeri complessi
ComplexNumber operator+ (const ComplexNumber& z1, const ComplexNumber& z2){
    //z1 = a1 + b1*i , z2 = a2 + b2*i --> z1 + z2 = a1 + a2 + i*(b1+b2)
    double real = z1.parte_reale + z2.parte_reale;
    double imm = z1.parte_immaginaria +z2.parte_immaginaria;
    ComplexNumber sum(real, imm);
    return sum;
}

//andiamo ora a definire l'operatore di stampa di un numero complesso
ostream& operator<<(ostream& os, const ComplexNumber& z){
    //andiamo a definire vari casi per la stampa in modo che l'output sia il più carino possibile
    if (z.parte_immaginaria == 0){
        os << z.parte_reale;
    }
    else if (z.parte_reale == 0){
        if (z.parte_immaginaria < 0){
            os << "-" << abs(z.parte_immaginaria) << "i";
        }
        else {os << abs(z.parte_immaginaria) << "i";}
    }
    else {
        if (z.parte_immaginaria < 0){
            os << z.parte_reale <<"-" << abs(z.parte_immaginaria) << "i";
        }
        else {os << z.parte_reale << "+" << abs(z.parte_immaginaria) << "i";}

    }
    return os;
}


//Andiamo a definire l'operazione == : dal momento che stiamo lavorando con dei valori double non si possono confrontare in
// maniera esatta, introdurremo dunque una tolleranza pari a tol = 1e-15
bool operator== (const ComplexNumber& z1, const ComplexNumber& z2){
    double tolleranza = pow(10, -15);
    double dif_parteReale = abs(z1.parte_reale - z2.parte_reale);
    double dif_parteImm = abs(z1.parte_immaginaria - z2.parte_immaginaria);

    if (dif_parteReale < tolleranza  && dif_parteImm < tolleranza){
        return true;
    }
    else {return false;}
}






