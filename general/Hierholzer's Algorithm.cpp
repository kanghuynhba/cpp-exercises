#include <bits/stdc++.h>

using namespace std;

void DFS(vector<vector<int>>& grpah, )

int main() {
    int V, E;
    cin >> V >> E;
    int u, v;
    vector<vector<int>> graph(V);
    vector<bool> visited(V, false);
    stack<int> st;
    for(int i=0; i<E; i++) {
        cin >> u >> v;
        graph[u].push_back(v);
    }

    for(int i=0; i<V; i++) {
        if(!visited[i]) {
            DFS(graph, visited, st, i);
        }
        
    }
    
    return 0;
}