#include "class.h"

using namespace std;

int main() {
    int optiune;
    double nr1, nr2;
    int nr3, nr4;
    Punct2D p1;
    Punct2D p2;

    afiseazaMeniu();

    do {
        cout<<"Introdu numarul aferent operatiei dorite ";
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
                    ImpartireReala op;
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
                case 7:{
                    cout<<"Introdu numarul din care calculam la suta din: "; cin>> nr1;
                    cout<< "Introdu cat la suta calculam: "; cin>>nr3;
                    LaSuta op;
                    cout<<"Rezultat: "<<op.laSuta(nr1, nr3)<<endl;
                    break;
                }
                case 8:{
                    cout << "Introdu primul numar: "; cin>>nr3;
                    cout<<"Introdu al doilea numar: "; cin>>nr4;
                    ImpartireIntreg op;
                    cout<<"Rezultat: "<<op.imp(nr3, nr4)<<endl;
                    break;
                }
                case 9:{
                    cout<<"Introdu primul numar: "; cin>>nr3;
                    cout<<"Introdu al doilea numar: "; cin>>nr4;
                    RestImp op;
                    cout<<"Rezultat impartire: "<<op.imp(nr3, nr4)<<endl;
                    cout<<"Restul impartirii: "<<op.rest(nr3, nr4)<<endl;
                    break;
                }
                case 10:{
                    cout<<"Coordonatele primului punct: "; cin>>nr1>>nr2;
                    p1.atribuire(nr1, nr2);
                    cout<<"Coordonatele celui de-al doilea punct: "; cin>>nr1>>nr2;
                    p2.atribuire(nr1,nr2);
                    cout<<"Distanta intre cele punctul p1"<<p1<<"si punctul p2 "<<p2<<"este: "<<distanta(p1,p2)<<endl;
                    break;
                }
                case 11:{
                    cout<<"Introdu numarul din care vrei sa calculezi logaritmul natural: "; cin>>nr1;
                    LogNat op;
                    cout<<endl;
                    cout<<"Logaritm natural din "<<nr1<<" este "<<op.logN(nr1)<<endl;
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
