#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
    int  atr_1, atr_2, atr_3, atr_4, atr_5;
    // atr stand for: asterisk
    int i = 0;

    for (int a = 1, atr; a <= 5; a++) {
    cout << "Enter today sale for store " << a << ": "; cin >> atr;
    atr /= 100;
    switch (a)
    {
    case  1:
         atr_1= atr;
    case 2:
         atr_2= atr;
    case 3:
         atr_3= atr;
    case 4:
         atr_4= atr;
    case 5:
         atr_5= atr;
    default:
        break;
    }   
    };
    cout << "SALES BAR CHART" << endl;
    cout << "store 1: " << setw(8);
    for (; i < atr_1; i++ ) { 
        cout << "*"; 
    };
        cout << endl;
    cout << "store 2: " << setw(8);
    for (; i < atr_2; i++ ) {
        cout << "*";
    };
    cout << endl;
    cout << "store 3: " << setw(8);
    for (; i < atr_3; i++ ) {
        cout << "*";
    };
    cout << endl;
    cout << "store 4: " << setw(8);
    for (; i < atr_4; i++ ) {
        cout << "*";
    };
    cout << endl;
    cout << "store 5: " << setw(8);
    for (; i < atr_5; i++ ) {
        cout << "*";
    };
    

    return 0;
}