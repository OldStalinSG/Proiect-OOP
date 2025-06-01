#include <iostream>
#include "class.h"
using namespace std;

int main() {
    NrInt obj1;        
    NrInt obj2(42);
    int nr;

    cout << obj1.getN() << endl;
    cout << obj2.getN() << endl;
    //g++ -std=c++14 Source.cpp -o exegen
    //./exegen sau ./Source
    
    return 0;
}