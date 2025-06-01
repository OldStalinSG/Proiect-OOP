#pragma once

class numar {
protected:
    int n;
public:
    numar(int value = 0) : n(value) {}
    
    int getN() const { return n; }
};