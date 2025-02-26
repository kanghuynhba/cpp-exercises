#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll findMax(vector<ll>& arr, int size, int i) {
    int maxPos=-1;
    int id=i;
    for(; i<size; i++) {
        if(maxPos<=i+arr[i]) {
            maxPos=i+arr[i];
            id=i;
        }
    }
    return id;
}   

int main() {
    int N; 
    cin >> N;
    vector<ll> arr;
    for(int i=0; i<N; i++) {
        ll k;
        cin >> k;
        arr.push_back(k);
    }
    ll count=1, id=0;
    for(int i=0; i<N;) {
        cout << i << " " << arr[i] << endl;
        id=findMax(arr, i+arr[i]+1, i+1);
        if(arr[id]==0) {
            cout << "CANNOT GET DESTINATION";
            return 0;
        }
        count++;
        i=id;
        if(arr[id]+i>=N) {
            break;
        } 
    }
    cout << count;
    return 0;
}