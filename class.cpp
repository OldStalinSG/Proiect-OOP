#include "class.h"
#include <iostream>
#include <cmath>
#include <stdexcept>

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
        throw std::invalid_argument("Eroare: Impartirea la zero nu este permisa!");
    }
    return a / b;
}

double Radical::calculeaza(double a) {
    if (a < 0) {
        throw std::invalid_argument("Eroare: Nu se poate calcula radicalul unui numar negativ!");
    }
    return sqrt(a);
}

double Putere::calculeaza(double baza, double exponent) {
    return pow(baza, exponent);
}

void afiseazaMeniu() {
    std::cout << "\n--- Calculator C++ ---" << std::endl;
    std::cout << "1. Adunare (+)" << std::endl;
    std::cout << "2. Scadere (-)" << std::endl;
    std::cout << "3. Inmultire (*)" << std::endl;
    std::cout << "4. Impartire (/)" << std::endl;
    std::cout << "5. Radical (sqrt)" << std::endl;
    std::cout << "6. Ridicare la putere (^)" << std::endl;
    std::cout << "0. Iesire" << std::endl;
    std::cout << "Alege o optiune: ";
}