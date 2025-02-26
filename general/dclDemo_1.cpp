#include <bits/stdc++.h>

using namespace std;

long long fib1(vector<long long>& dpG, int n) {
    int mod=1e9+7;
    if(dpG[n]!=-1) {
        return dpG[n]%mod;
    }
    dpG[n]=fib1(dpG, n-1)+2*fib1(dpG, n-2);
    return dpG[n]%mod;
}

long long fib2(vector<long long>& dpF, vector<long long>& dpG, int n) {
    int mod=1e9+7;
    if(dpF[n]!=-1) {
        return dpF[n]%mod;
    }
    dpF[n]=3*fib2(dpF, dpG, n-1)+2*fib2(dpF, dpG, n-2)+dpG[n]+dpG[n-1]+dpG[n-2];
    return dpF[n]%mod;
}

int main() {
    int a,b,c,d;
    int n;
    cin >> a >> b >> c >> d;
    cin >> n;
    vector<long long> dpG(n+3, -1);
    vector<long long> dpF(n+3, -1);
    dpG[0]=d;
    dpG[1]=c;
    dpF[0]=b;
    dpF[1]=a;
    dpG[2]=dpG[1]+2*dpG[0];
    dpF[2]=3*dpF[1]+2*dpF[0]+dpG[2]+dpG[1]+dpG[0];
    long long k = fib1(dpG, n);
    long long ans=fib2(dpF, dpG, n);
    long long mod=1e9+7;
    cout << ans%mod;
    return 0;
}
