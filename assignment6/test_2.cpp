#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include <ctime>
using namespace std;
int main()
{
    float a,b, calc;
    char op;
    cout << "Nhập 2 số thực : "; cin >> a >> b;
    cout << "Nhập phép toán: "; cin >> op;
    if ( op == '+') calc = a + b;
    else if ( op == '-') calc = a - b;
    else if ( op == '*') calc = a * b;
    else if ( op == '/') calc = a / b;
    cout << calc;
    return 0;
}