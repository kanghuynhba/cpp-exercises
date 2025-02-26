#include <bits/stdc++.h>

using namespace std;

typedef long long ll;


int push(vector<int>& h, int value) {
    if(h.empty()) {
        h.push_back(value);
        return 0;
    } 
    int i=h.size()-1;
    int temp;
    h.push_back(value);
    while (i!=0 && h[(i-1)/2]>h[i]) {
        swap(h[i], h[(i-1)/2]);
        i=(i-1)/2;
    }
    return temp;
}

int main() {
    int N, Q;
    cin >> N >> Q;
    vector<int> arr;
    vector<int> heap;
    for(int i=0; i<N; i++) {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    sort(arr.begin(), arr.end());
    map<int, int> count;
    map<int, int>::iterator it;
    for(int i=0; i<Q; i++) {
        int q;
        cin >> q;
        count[q]++;
        int pos=0;
        for(it=count.begin(); it!=count.end(); it++) {
            pos+=it->second;
            if(it->first==q) {
                break;
            }
        }
        vector<int>::iterator upp=upper_bound(arr.begin(), arr.end(), q);
        pos+=upp-arr.begin()+1;
        cout << pos << endl;
    }
    return 0;
}