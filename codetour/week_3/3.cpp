#include <bits/stdc++.h>

using namespace std;

int main() {    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, q;
    cin >> n >> q;
    vector<int> arr;
    for (int i = 0; i < n; i++){
        int a;
        cin >> a;
        arr.push_back(a);
    }
    while (q--) {
        int L, R;
        cin >> L >> R;
        L--;
        R--;
        unordered_set<int> check;
        int count=0, total=0;
        for(int i=L; i<=R; i++) {
            if(arr[i]==0) {
                count++;
                check.clear();
                total=0;
                continue;
            }
            total+=arr[i];
            if(total==0 || check.find(total)!=check.end()) {
                count++;
                total=0;
                check.clear();
            }
            if(total!=0) {
                check.insert(total);
            }
        }
        cout << count << endl;
    }
    
    return 0;
}