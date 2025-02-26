#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    int N, K;
    cin >> N >> K;
    ll i=0;
    if(N%K==0) {
        i=N/K;
    } else {
        i=N/K+1;
    }
    cout << i*(i+1)/2;
    return 0;
}