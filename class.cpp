#include "class.h"

double Adunare::calculeaza() const {
    return operand1 + operand2;
}

double Scadere::calculeaza() const {
    return operand1 - operand2;
}

double Inmultire::calculeaza() const {
    return operand1 * operand2;
}

double Impartire::calculeaza() const {
    if (operand2 == 0) {
        throw runtime_error("Eroare: Impartire la zero!");
    }
    return operand1 / operand2;
}

double Radical::calculeaza() const {
    if (operand < 0) {
        throw runtime_error("Eroare: Radical dintr-un numar negativ!");
    }
    return sqrt(operand);
}