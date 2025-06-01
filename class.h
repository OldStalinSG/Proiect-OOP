#pragma once

class numar_intreg {
protected:
    int n;
public:
    numar_intreg(int value = 0) : n(value) {}
    
    int getN() const { return n; }
};