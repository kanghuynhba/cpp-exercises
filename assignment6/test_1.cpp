#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include <ctime>
using namespace std;
int main()
{
    int a,i, sum;
    cout << "Nhập số nguyên dương: "; cin >> a;
    while(a < 0) {
        cout << "Yêu cầu nhập lại: "; cin >> a;
    };
    while (a != 0) {
        i =a % 10;
        if ((i%2) == 0) {
            sum = sum + i;
        };
        a = a / 10;
    };
    cout << sum;
    
    return 0;
}