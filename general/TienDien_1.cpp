#include <iostream>

using namespace std;

static const int Lmt1=50, Lmt2=100, Lmt3=200, Lmt4=300, Lmt5=400;
static const double Prc1=1549, Prc2=1600, Prc3=1858, Prc4= 2340, Prc5=2615, Prc6=2701;
static const double VAT_rate=0.1;
static double Temp1 = (Lmt1 - 0)*Prc1,
        Temp2 = Temp1 + (Lmt2 - Lmt1)*Prc2,
        Temp3 = Temp2 + (Lmt3 - Lmt2)*Prc3,
        Temp4 = Temp3 + (Lmt4 - Lmt3)*Prc4,
        Temp5 = Temp4 + (Lmt5 - Lmt4)*Prc5;

double TienDien(int kWh); 
int main() {
    int kWh;

    cout << "kWh: ";
    cin >> kWh;

    int tongTienDien = TienDien(kWh);

    cout << tongTienDien;
}

double TienDien(int kWh) {
    double tongTien = 0;
    if(kWh<=Lmt1) {
        tongTien = kWh * Prc1;
    } else if(kWh<=Lmt2) {
        tongTien = Temp1 + (kWh - Lmt1) * Prc2;
    } else if(kWh<=Lmt3) {
        tongTien = Temp2 + (kWh - Lmt2) * Prc3;
    } else if(kWh<=Lmt4) {
        tongTien = Temp3 + (kWh - Lmt3) * Prc4;
    } else if(kWh<=Lmt5) {
        tongTien = Temp4 + (kWh - Lmt4) * Prc5;
    } else { 
        tongTien = Temp5 + (kWh - Lmt5) * Prc6;
    }

    tongTien = (1 + VAT_rate)* tongTien;
    return tongTien; 
}
