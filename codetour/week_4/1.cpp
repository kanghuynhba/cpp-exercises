#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int getNumb(string& formula, int& id) {
    string numb;
    int size=formula.size();
    while(id+1<size && isdigit(formula[id+1])) {
        numb+=formula[id+1];
        id++;
    }
    int count=atoi(numb.c_str());
    if(count==0) {
        return 1;
    }
    return count;
}

int main() {    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string formula;
    getline(cin, formula);
    map<string, int> mp;
    stack<pair<string, int>> st;
    int size=formula.size();
    for(int i=0; i<size; i++) {
        if(isupper(formula[i])) {
            string atom;
            atom+=formula[i];
            if(i+1<size && islower(formula[i+1])) {
                atom+=formula[i+1];
                i++;
            }
            int count=getNumb(formula, i);
            st.push({atom, count});
        } else {
            if(formula[i]=='(') {
                st.push({"(", 0});
            } else {
                int mul=1;
                if(i+1<size && isdigit(formula[i+1])) {
                    mul=getNumb(formula, i);
                }
                stack<pair<string, int>> temp;
                while(st.top().first[0]!='(') {
                    pair<string, int> top=st.top();
                    st.pop();
                    temp.push({top.first, top.second*mul});
                } 
                st.pop();
                while(!temp.empty()) {
                    st.push(temp.top());
                    temp.pop();
                }
            }
        }
    }
    while(!st.empty()) {
        cout << st.top().first << " " << st.top().second << endl;
        st.pop();
    }
    return 0;
}