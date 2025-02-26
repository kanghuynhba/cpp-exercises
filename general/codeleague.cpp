#include <bits/stdc++.h>

using namespace std;

int main() {
  int T;
  cin >> T;
  while(T--) {
    stack<char> st;
    string s;
    int count=0;
    cin >> s;
    for(int i=0; i<s.size(); i++) {
        if(!st.empty() && st.top()!=s[i]) {
            count++;
            st.pop();
        } else {
            st.push(s[i]);
        }
    }
    if(s[0]=='>' || (!st.empty() && st.top()=='<')) {
        count=0;
    }
    cout << count*2 << endl;

  }
  return 0;
}