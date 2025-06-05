#pragma once
#include <iostream>
#include <cmath>
#include <stdexcept>
#include <string>
#include <limits>

using namespace std;

class Operatie {
public:
    virtual ~Operatie() {}
    virtual double calculeaza() const = 0;
};

class OperatieBinara : public Operatie {
protected:
    double operand1;
    double operand2;
public:
    OperatieBinara(double op1, double op2) : operand1(op1), operand2(op2) {}
};

class OperatieUnara : public Operatie {
protected:
    double operand;
public:
    OperatieUnara(double op) : operand(op) {}
};

class Adunare : public OperatieBinara {
public:
    Adunare(double op1, double op2) : OperatieBinara(op1, op2) {}
    double calculeaza() const override;
};

class Scadere : public OperatieBinara {
public:
    Scadere(double op1, double op2) : OperatieBinara(op1, op2) {}
    double calculeaza() const override;
};

class Inmultire : public OperatieBinara {
public:
    Inmultire(double op1, double op2) : OperatieBinara(op1, op2) {}
    double calculeaza() const override;
};

class Impartire : public OperatieBinara {
public:
    Impartire(double op1, double op2) : OperatieBinara(op1, op2) {}
    double calculeaza() const override;
};

class Radical : public OperatieUnara {
public:
    Radical(double op) : OperatieUnara(op) {}
    double calculeaza() const override;
};