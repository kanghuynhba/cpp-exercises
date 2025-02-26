#include <bits/stdc++.h>

using namespace std;

int main() {    
    int n;
    cin >> n;
    vector<int> t(n);
    for (int i = 0; i < n; i++) {
        cin >> t[i];
    }   
    vector<int> H(n+1, 0);
    for(int i=0; i<n; i++) {
        if(i>2) {
            H[i]=max(H[i-1], t[i]+H[i-1]);
        } else {
            H[i]=max(H[i-1], max(t[i]+H[i-2], t[i]+t[i-1]+H[i-3]));
        }
    }
    cout << H[n-1] << endl;
    return 0;
}