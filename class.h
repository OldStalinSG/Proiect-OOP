#pragma once
#include <iostream>
#include <cmath>
#include <stdexcept>
using namespace std;


class Adunare {
public:
    double calculeaza(double a, double b);
};

class Scadere {
public:
    double calculeaza(double a, double b);
};

class Inmultire {
public:
    double calculeaza(double a, double b);
};

class ImpartireReala {
public:
    double calculeaza(double a, double b);
};

class Radical {
public:
    double calculeaza(double a);
};

class Putere {
public:
    double calculeaza(double baza, double exponent);
};

class LaSuta
{
    public:
    double laSuta(double a,int b);
};

class ImpartireIntreg
{

    public:
    int imp(int a, int b);
};

class RestImp: public ImpartireIntreg
{
    public:
    int rest(int a, int b);
};

class Punct2D
{
    private:
    float x;
    float y;
    public:

    void atribuire(float x, float y);

    float friend distanta(Punct2D p1, Punct2D p2);

};

class LogNat{
    public:
    double logN(double n);
};

void afiseazaMeniu();

 