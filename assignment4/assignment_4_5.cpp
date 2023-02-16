 #include <iostream>
using namespace std;
int main()
{
    float unit;
    cout <<"The number of units is: "; cin >> unit;
    if (unit <= 0) cout << "Make sure the number of units is greater than 0." << endl;
    else if (unit <10 ) cout << " No discount " << unit*99 << endl;
    else if (unit >= 10 && unit < 20  ) cout << "20% discount: " << 9*99 + (unit-9) * 99 * 0.8 << endl;
    else if (unit >= 20 && unit < 50  ) cout << "30% discount: " <<  9*99 + 10 * 99 * 0.8 + (unit-19) * 99 * 0.7 << endl;
    else if (unit >= 50 && unit < 100  ) cout << "40% discount: " <<  9*99 + 10 * 99 * 0.8 + 30 * 99 * 0.7 + (unit-49) * 99 * 0.6 << endl; 
    else if (unit >= 100) cout << "50% discount: " <<   9*99 + 10 * 99 * 0.8 + 30* 99 * 0.7 + 60 * 99 * 0.6 + (unit-99) * 0.5 << endl;   
}
