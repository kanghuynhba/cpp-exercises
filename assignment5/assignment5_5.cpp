#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    long integer, min, max;
    cout << "Enter the series of integers: "; cin >> integer;
    while (integer != -99) {
    cout << "Enter the series of integers: "; cin >> integer;
    if (integer == -99) break;
    if (min > integer) {
        min = integer;
    } else if (max < integer) {
        max = integer;
    }
    };
    cout << "The largest number entered: " << max << endl;
    cout << "The smallest number entered: " << min;
    
    return 0;
}