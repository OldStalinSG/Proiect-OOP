#include <iostream>
#include "class.h"
using namespace std;

int main() {
    numar obj1;        
    numar obj2(42);

    cout << obj1.getN() << endl;
    cout << obj2.getN() << endl;
    //g++ -std=c++14 Source.cpp -o exegen
    //./exegen sau ./Source
    
    return 0;
}