#include <bits/stdc++.h>

using namespace std;

int main() {   
    string s;
    cin >> s;
    vector<long long> count(26, 0);
    for(int i=0; i<s.size(); i++) {
        count[s[i]-'a']++;  
    }
    string firstHalf="";
    for(int i=0; i<26; i++) {
        long long half=count[i]/2;
        count[i]%=2;
        while(half>0) {
            firstHalf+=char(i+'a');
            half--;
        }
    }
    string ans="";
    string first="";
    string last="";
    string mid="";
    int k=26;
    if(!firstHalf.empty()) {
        k=firstHalf[0]-'a';
    }
    bool flag=true;
    for(int i=0; i<26; i++) {
        if(count[i]==1) {
            if(i>k) {
                if(flag) {
                    flag=false;
                    mid+=char(i+'a');
                } else {
                    last+=char(i+'a');
                }
            } else {
                first+=char(i+'a');
            }
        }
    }
    int size=first.size();
    if(mid.empty() && size>0) {
        mid+=first[size-1];
        first=first.substr(0, size-1);
    }
    ans+=first;
    ans+=firstHalf;
    ans+=mid;
    reverse(firstHalf.begin(), firstHalf.end());
    ans+=firstHalf;
    ans+=last;
    cout << ans; 
    return 0;
}