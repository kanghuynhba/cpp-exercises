#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int isPrime(long n);
int main()
{
    long n; int Prime;
    cout << "Enter the number to check:"; cin >> n;
    Prime = isPrime(n);
    cout << Prime;
    return Prime;
}
int isPrime(long n) {
    int Prime;
    if (n<0) n=-n;
    double sqrtN = sqrt(n);
    if (n == 0) Prime = 1;
    else if (n==1) Prime =0;
    else {
        long i=2; Prime = 1;
        while (i<= sqrtN)
        {
            if (n%i==0) {
                Prime=0;
                break;
            }
            i++;
        }
    }
    return Prime;
}