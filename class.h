#pragma once
#include <iostream>
using namespace std;



class NrInt {
protected:
    int n; 
public:
    NrInt(int value = 0) : n(value) {}
    ~NrInt() {}

    int getN() const { return n; }
};