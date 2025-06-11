#include "class.h"
#include <iostream>
#include <cmath>
#include <stdexcept>
using namespace std;

double Adunare::calculeaza(double a, double b) {
    return a + b;
}

double Scadere::calculeaza(double a, double b) {
    return a - b;
}

double Inmultire::calculeaza(double a, double b) {
    return a * b;
}

double Impartire::calculeaza(double a, double b) {
    if (b == 0) {
        throw invalid_argument("Eroare: Impartirea la zero nu este permisa!");
    }
    return a / b;
}

double Radical::calculeaza(double a) {
    if (a < 0) {
        throw invalid_argument("Eroare: Nu se poate calcula radicalul unui numar negativ!");
    }
    return sqrt(a);
}

double Putere::calculeaza(double baza, double exponent) {
    return pow(baza, exponent);
}

double LaSuta::laSuta(double nr, int suta)
{
    return (double)((suta/100)*nr);
}

void afiseazaMeniu() {
    cout << "1. Adunare (+)" << endl;
    cout << "2. Scadere (-)" << endl;
    cout << "3. Inmultire (*)" << endl;
    cout << "4. Impartire (/)" << endl;
    cout << "5. Radical (sqrt)" << endl;
    cout << "6. Ridicare la putere (^)" << endl;
    cout<<"7. La suta din (%)"<<endl;
    cout << "0. Iesire" << endl;
    cout << "Alege o optiune: ";
}
