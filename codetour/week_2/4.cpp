#include <bits/stdc++.h>

using namespace std;

int main() {    
    int n;
    cin >> n;
    vector<int> A (3, 0);
    vector<int> B (3, 0);
    for(int i=0; i<n; i++) {
        char a;
        cin >> a;
        if(a == 'R') {
            A[0]++;
        } else if(a == 'P') {
            A[1]++;
        } else {
            A[2]++;
        }
        A.push_back(a);
    }    
    for(int i=0; i<n; i++) {
        char b;
        cin >> b;
        if(b == 'R') {
            B[0]++;
        } else if(b == 'P') {
            B[1]++;
        } else {
            B[2]++;
        }
        B.push_back(b);
    }
    int ans=0;
    int temp=min(A[0], B[2]);
    ans+=temp;
    A[0]-=min(A[0], B[2]);
    B[2]-=min(A[0], B[2]);
    ans+=min(A[1], B[0]);
    A[1]-=min(A[1], B[0]);
    B[0]-=min(A[1], B[0]);
    ans+=min(A[2], B[1]);
    A[2]-=min(A[2], B[1]);
    B[1]-=min(A[2], B[1]);


    cout << ans << endl;
    return 0;
}