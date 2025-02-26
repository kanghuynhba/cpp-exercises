#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(int n);
int sumPrime(int n);
int main() {
    int n; 

    cout << "n= ";
    cin >> n;

    if(isPrime(n)) {
        cout << "True" << endl;
    }


    cout << sumPrime(n);

    return 0;
}

bool isPrime(int n) {
    for(int i=2; i<= sqrt(n); i++) {
        if(n%i==0){
            return false;
        } 
    }
    return true;    
}
int sumPrime(int n) {
    int s=0;
    for(int i=2; i<=n; i++) {
        if(isPrime(i)) {
            s += i;
        }
    }
    return s;
}