#include <iostream>

using namespace std;

long sqrtInt(long n);

int main() {
    long numb, sqrtNumb;

    cout << "Can bac 2 cua ";
    cin >> numb;

    sqrtNumb=sqrtInt(numb);
    
    cout << " la " << sqrtNumb << ".";
    
    return 0;
}

long sqrtInt(long n) {
    long sum=1, k=1, t;

    while(sum<n) {
        k+=2;
        sum+=k;
    }
    if(sum>n) {
        k-=2;
    }
    t=(k+1)/2;

    return t;
}