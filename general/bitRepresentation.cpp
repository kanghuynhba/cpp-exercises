#include <bits/stdc++.h>
using namespace std;
void bin(int n) {
    int i;
    cout << "0";
    for(i=1<<3; i>0; i=i/2) {
        if((n&i)!=0) {
            cout << "1";
        } else {
            cout << "0";
        }
    }
}
void repeatedArithmeticShift(int x, int count) {
    for(int i=0; i<count; i++) {
        x>>=1;
    }
    cout << x; 
}
int main() {
    bin(15);
    cout << endl;
    bin(7);
    cout << endl;
    repeatedArithmeticShift(-93242, 40);
    return 0;
}