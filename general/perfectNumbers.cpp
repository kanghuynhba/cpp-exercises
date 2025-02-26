#include <iostream>

using namespace std;

long sumDivisors(long n);
bool isPerfect(long n);
void perfectNumbers(long n);

int main() {
    long n;

    cout << "n: ";
    cin >> n;

    cout << "We found" << endl;
    perfectNumbers(n);

    return 0;
}

long sumDivisors(long n) {
    long sum=0, k=1;
    
    while(k<=n/2) {
        if(n%k==0) {
            sum+=k;
        }
        k++;
    }
    return sum;
}

bool isPerfect(long n) {
    long sumDivi;
    sumDivi=sumDivisors(n);
    if(sumDivi==n) {
        return true;
    } else {
        return false;
    }
}

void perfectNumbers(long k) {
    while(k--) {
        if(isPerfect(k)) {
            cout << k << endl;
        }
    }
}