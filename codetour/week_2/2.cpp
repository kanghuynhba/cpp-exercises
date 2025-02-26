#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool isPrime(int n) {
    for(int i=2; i<=sqrt(n); i++) {
        if(n%i==0) {
            return false;
        }
    }
    return true;
}

int main() {    
    ll m;
    cin >> m;
    string ans="";
    vector<int> count(26, 0);
    bool flag=true;
    for(ll i=2; i<=sqrt(m); i++) {
        if(m%i==0) {
            if(m/i>sqrt(m) && isPrime(m/i)) {
                count[(m/i)%26]++;
            }
            if(isPrime(i)) {
                count[i%26]++;
            }
            flag=false;
        }
    }
    if(flag) {
        count[m%26]++;
    }
    for(int i=0; i<26; i++) {
        while(count[i]>0) {
            count[i]--;
            ans+=char(i+'A');
        }
    }
    cout << ans;

    return 0;
}