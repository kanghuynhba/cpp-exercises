#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    vector<vector<int>> descriptions(N);
    for(int i=0; i<N; i++) {
        for(int j=0; j<3; j++) {
            int k;
            cin >> k;
            descriptions[i].push_back(k);
        }
    }
    unordered_map<int, vector<int>> graph;
    for(int i=0; i<descriptions.size(); i++) {
        int parent=descriptions[i][0], child=descriptions[i][1], isLeft=descriptions[i][2];
        if(graph.find(parent)==graph.end()) {
            vector<int> temp(3, -1);
            if(isLeft) {
                temp[1]=child;
                graph[parent]=temp;
            } else {
                temp[2]=child;
                graph[parent]=temp;
            }
        } else {
            if(isLeft) {
                graph[parent][1]=child;
            } else {
                graph[parent][2]=child;
            }
        }
        if(graph.find(child)==graph.end()) {
            vector<int> temp(3, -1);
            temp[0]=parent;
            graph[child]=temp;
        } else {
            graph[child][0]=parent;
        }
    }
    unordered_map<int, vector<int>>::iterator it;
    for(it=graph.begin(); it!=graph.end(); it++) {
        cout << it->first << " " << it->second[0] << " " << it->second[1] << " " << it->second[2] << endl; 
    }
    return 0;
}