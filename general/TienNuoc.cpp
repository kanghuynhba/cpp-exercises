#include <iostream>

using namespace std;

static const int Level1=4, Level2=2;
static const double uPrice1=5300, uPrice2=10200, uPrice3=11400; 
static const double extra_rate=0.05+0.1;
static double Temp1 = Level1*uPrice1,Temp2 = Temp1+Level2*uPrice2;

double TienNuoc(int m3,int nPerson); 
int main() {
    int m3, nPerson;

    cout << "m3: ";
    cin >> m3;
    cout << "Person: ";
    cin >> nPerson;

    int tongTienNuoc = TienNuoc(m3,nPerson);

    cout << tongTienNuoc;
}

double TienNuoc(int m3,int nPerson) {
    double tongTien=0;
    int Lmt1=nPerson*Level1, Lmt2=nPerson*(Level1+Level2);

    if(m3 <= Lmt1) {
        tongTien=m3*uPrice1;
    } else if(m3 <= Lmt2) {
        tongTien=nPerson*Temp1 + (m3-Lmt1)*uPrice2;
    } else {
        tongTien=nPerson*Temp2 + (m3-Lmt2)*uPrice3;
    }

    tongTien=(1+extra_rate)*tongTien;
    return tongTien;
}