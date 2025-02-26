#include <bits/stdc++.h>

using namespace std;

int calcHex2Digits(string x) {
    int ans=0;
    int size=x.size();
    for(int i=0; i<size; i++) {
        int digit=0;
        if(x[i]<'A') {
            digit+=x[i]-'0';
        } else {
            digit+=x[i]-'A'+10;
        }
        digit*=pow(16, size-i-1);
        ans+=digit;
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<string> pic1;
    vector<int> delta;
    for(int i=0; i<n; i++) {
        string temp;
        cin >> temp;
        pic1.push_back(temp);
    }
    for(int i=0; i<n; i++) {
        string color;
        cin >> color;
        for(int j=1; j<7; j+=2) {
            int x=abs(calcHex2Digits(pic1[i].substr(j, 2)) - calcHex2Digits(color.substr(j, 2)));
            delta.push_back(x);
        }
    }
    unordered_map<string, int> count;
    int maxCount=0;
    for(int i=0; i<delta.size(); i+=3) {
        string temp;
        for(int j=i; j<i+3; j++) {
            temp+=to_string(delta[j]);
            temp+=",";
        }
        count[temp]++;
        maxCount=max(maxCount, count[temp]);
    }
    cout << fixed << setprecision(2) << (double)maxCount/n*100 << "%";
    return 0;
}
