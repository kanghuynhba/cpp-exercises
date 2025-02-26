#include <iostream>

using namespace std;

int Fib(int n);

int main() {
    int n;

    cout << "n= ";
    cin >> n;

    int fib = Fib(n);
    cout << "Fibonacci: " << fib;
}

int Fib(int n) {
    int a, b, c, k;
    if (n <= 1) {
        return n;
    };
    a = 0; b = 1;
    for(k = 2; k < n + 2; k++) {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}