#include <bits/stdc++.h>

using namespace std;

int main() {    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> arr;
    for(int i=0; i<n; i++) {
        int a;
        cin >> a;
        arr.push_back(a);
    }   
    sort(arr.begin(), arr.end());
    for(int i=1; i<arr.size(); i++) {
        arr[i-1]-=arr[i];
    }
    double total=0;
    for(int i=0; i<arr.size()-1; i++) {
        total+=sqrt(pow(arr[i], 2)+1);
    }
    cout << fixed << setprecision(6) << total;
    return 0;
}