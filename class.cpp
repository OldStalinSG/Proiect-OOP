#include "class.h"


double Adunare::calculeaza(double a, double b) {
    return a + b;
}

double Scadere::calculeaza(double a, double b) {
    return a - b;
}

double Inmultire::calculeaza(double a, double b) {
    return a * b;
}

double ImpartireReala::calculeaza(double a, double b) {
    if (b == 0) {
        throw invalid_argument("Eroare: Impartirea la zero nu este permisa!");
    }
    return a / b;
}

double Radical::calculeaza(double a) {
    if (a < 0) {
        throw invalid_argument("Eroare: Nu se poate calcula radicalul unui numar negativ!");
    }
    return sqrt(a);
}

double Putere::calculeaza(double baza, double exponent) {
    return pow(baza, exponent);
}

double LaSuta::laSuta(double nr, int suta)
{
    return (double)((suta/100.0)*nr);
}

int ImpartireIntreg::imp(int nr1, int nr2)
{
    if(nr2 == 0)
        throw invalid_argument("Eroare: Impartirea la 0 nu este permisa!");
    return nr1/nr2;
}

int RestImp::rest(int nr1, int nr2){
    if(nr2==0)
        throw invalid_argument("Eroare: Pentru a putea calcula restul unei impartirii, impartirea trebuie sa poata fi efectuata!");
    return nr1%nr2;

}

float distanta(Punct2D p1, Punct2D p2){
    
    return sqrt(pow(p2.x-p1.x, 2) + pow(p2.y-p1.y, 2));

}

void Punct2D::atribuire(float X, float Y)
{
    this->x=X;
    this->y=Y;
}

ostream& operator<<(ostream& os, const Punct2D& p)
{
    cout<<"("<<p.x<<", "<<p.y<<") ";
}

double LogNat::logN(double nr)
{
    if(nr<=0)
        throw invalid_argument("Logaritmul nu exista in cazul in care argumentul este negativ!");
    return log(nr);
}

void afiseazaMeniu() {
    cout << "1. Adunare (+)" << endl;
    cout << "2. Scadere (-)" << endl;
    cout << "3. Inmultire (*)" << endl;
    cout << "4. Impartire cu numere reale(/)" << endl;
    cout << "5. Radical (sqrt)" << endl;
    cout << "6. Ridicare la putere (^)" << endl;
    cout<<"7. La suta din (%)"<<endl;
    cout<<"8. Impartire cu numere intregi"<<endl;
    cout<<"9. Restul impartirii"<<endl;
    cout<<"10. Distanta intre 2 puncte"<<endl;
    cout<<"11. Logaritm natural dintr-un numar real"<<endl;
    cout << "0. Iesire" << endl;
}
