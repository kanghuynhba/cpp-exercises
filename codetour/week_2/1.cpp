#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool option(pair<int, int> a, pair<int, int> b) {

    return a.second < b.second;
}

int main() {    
    int n, q;
    cin >> n >> q;
    vector<pair<ll, int>> asgm;
    vector<int> level;
    for(int i=0; i<n; i++) {
        int a, b;
        cin >> a >> b;
        asgm.push_back({a, b});
        level.push_back(b);
    }
    sort(asgm.begin(), asgm.end(), option);
    sort(level.begin(), level.end());
    ll total=0;
    for(int i=0; i<n; i++) {
        total+=asgm[i].first;
        asgm[i].first=total;
    }
    for(int i=0; i<q; i++) {
        int x;
        cin >> x;
        int idx = upper_bound(level.begin(), level.end(), x) - level.begin()-1;
        if(idx < 0) {
            cout << 0 << endl;
            continue;
        }
        cout << asgm[idx].first << endl;
    }
    return 0;
}