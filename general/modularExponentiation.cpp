#include <bits/stdc++.h>

using namespace std;

vector<int> convertToBinary(int n) {
    vector<int> a;
    while(n!=0) {
        a.push_back(n%2);
        n/=2;
    }
    return a;
}

int modularExponentiation(int b, vector<int>& a, int m) {
    int x=1;
    int power=b%m;
    for(int i=0; i<a.size(); i++) {
        if(a[i]==1) {
            x=(x*power)%m;
        }
        power=(power*power)%m;
    }
    return x;
}

int main() {
    int b, n, m;
    cin >> b >> n >> m;
    vector<int> a=convertToBinary(n);
    cout << modularExponentiation(b, a, m);
    return 0;
}