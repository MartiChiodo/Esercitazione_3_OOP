#ifndef LIBRARY__ComplexNumber_H
#define LIBRARY__ComplexNumber_H
#include <iostream>
#include <cmath>
using namespace std;

//iniziamo creando il nuovo tipo
struct ComplexNumber{
    //attributi
    double parte_reale;
    double parte_immaginaria;

    //costruttori
    ComplexNumber() = default; //manteniamo il costruttore di default
    ComplexNumber(double& a, double& b):
        parte_reale(a),
        parte_immaginaria(b)
    {}

    //creo un modulo che restituisca il coniugato di un numero complesso
    ComplexNumber coniugato(){
        double real =parte_reale;
        double imm = -parte_immaginaria;
        return ComplexNumber(real, imm);
    }


};

//andiamo a dichiarare le funzioni
ComplexNumber operator+ (const ComplexNumber& z1, const ComplexNumber& z2);
ostream& operator<<(ostream& os, const ComplexNumber& z);
bool operator== (const ComplexNumber& z1, const ComplexNumber& z2);


#endif
