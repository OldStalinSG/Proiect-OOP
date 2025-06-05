#include "class.h"


double getDoubleInput(const string& prompt) {
    double value;
    while (true) {
        cout << prompt;
        cin >> value;
        if (cin.good()) {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            return value;
        } else {
            cout << "Input invalid. Te rog introdu un numar valid." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
}

int main() {
    char operatieSimbol;
    double num1, num2, rezultat;
    Operatie* op = nullptr;

    cout << "--- Calculator Simplu C++ ---" << endl;

    while (true) {
        cout << "\nOperatii disponibile:" << endl;
        cout << "  + : Adunare" << endl;
        cout << "  - : Scadere" << endl;
        cout << "  * : Inmultire" << endl;
        cout << "  / : Impartire" << endl;
        cout << "  r : Radical (pentru un singur numar)" << endl;
        cout << "  e : Iesire" << endl;
        cout << "Alege operatia: ";
        cin >> operatieSimbol;

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        if (operatieSimbol == 'e' || operatieSimbol == 'E') {
            cout << "La revedere!" << endl;
            break;
        }

        if (op != nullptr) {
            delete op;
            op = nullptr;
        }

        try {
            if (operatieSimbol == 'r' || operatieSimbol == 'R') {
                num1 = getDoubleInput("Introdu numarul pentru radical: ");
                op = new Radical(num1);
            } else if (operatieSimbol == '+' || operatieSimbol == '-' || operatieSimbol == '*' || operatieSimbol == '/') {
                num1 = getDoubleInput("Introdu primul numar: ");
                num2 = getDoubleInput("Introdu al doilea numar: ");

                switch (operatieSimbol) {
                    case '+':
                        op = new Adunare(num1, num2);
                        break;
                    case '-':
                        op = new Scadere(num1, num2);
                        break;
                    case '*':
                        op = new Inmultire(num1, num2);
                        break;
                    case '/':
                        op = new Impartire(num1, num2);
                        break;
                }
            } else {
                cout << "Operatie '" << operatieSimbol << "' necunoscuta. Te rog incearca din nou." << endl;
                continue;
            }

            if (op != nullptr) {
                rezultat = op->calculeaza();
                cout << "Rezultat: " << rezultat << endl;
                delete op;
                op = nullptr;
            }

        } catch (const runtime_error& e) {
            cerr << "A aparut o eroare: " << e.what() << endl;
            if (op != nullptr) {
                delete op;
                op = nullptr;
            }
        } catch (...) {
            cerr << "A aparut o eroare necunoscuta." << endl;
             if (op != nullptr) {
                delete op;
                op = nullptr;
            }
        }
    }

    return 0;
}