#include "class.h"
#include <iostream>
#include <limits>
#include <stdexcept>

using namespace std;

int main() {
    int optiune;
    double nr1, nr2;

    do {
        afiseazaMeniu();
        cin >> optiune;

        try {
            switch (optiune) {
                case 1: {
                    cout << "Introdu primul numar: "; cin >> nr1;
                    cout << "Introdu al doilea numar: "; cin >> nr2;
                    Adunare op;
                    cout << "Rezultat: " << op.calculeaza(nr1, nr2) << endl;
                    break;
                }
                case 2: {
                    cout << "Introdu primul numar: "; cin >> nr1;
                    cout << "Introdu al doilea numar: "; cin >> nr2;
                    Scadere op;
                    cout << "Rezultat: " << op.calculeaza(nr1, nr2) << endl;
                    break;
                }
                case 3: {
                    cout << "Introdu primul numar: "; cin >> nr1;
                    cout << "Introdu al doilea numar: "; cin >> nr2;
                    Inmultire op;
                    cout << "Rezultat: " << op.calculeaza(nr1, nr2) << endl;
                    break;
                }
                case 4: {
                    cout << "Introdu primul numar: "; cin >> nr1;
                    cout << "Introdu al doilea numar: "; cin >> nr2;
                    Impartire op;
                    cout << "Rezultat: " << op.calculeaza(nr1, nr2) << endl;
                    break;
                }
                case 5: {
                    cout << "Introdu numarul: "; cin >> nr1;
                    Radical op;
                    cout << "Rezultat: " << op.calculeaza(nr1) << endl;
                    break;
                }
                case 6: {
                    cout << "Introdu baza: "; cin >> nr1;
                    cout << "Introdu exponentul: "; cin >> nr2;
                    Putere op;
                    cout << "Rezultat: " << op.calculeaza(nr1, nr2) << endl;
                    break;
                }
                case 0: {
                    cout << "La revedere!" << endl;
                    break;
                }
                default: {
                    cout << "Optiune invalida! Te rog incearca din nou." << endl;
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    break;
                }
            }
        } catch (const invalid_argument& e) {
            cout << e.what() << endl;
        }

    } while (optiune != 0);

    return 0;
}