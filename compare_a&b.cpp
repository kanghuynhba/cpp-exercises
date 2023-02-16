#include <iostream>

using namespace std;

int main() {
    int a, b;
    cout << "a= " ; cin >> a;
    cout << "b= " ; cin >> b;
    cout << "Gia tri nho hon la ";
    ((a < b) && cout << a) || cout << b;
}