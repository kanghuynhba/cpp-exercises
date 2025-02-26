#include <bits/stdc++.h>

using namespace std;

void DFS(vector<vector<int>>& graph, vector<bool>& visited, stack<int>& st, int s) {
    visited[s]=true;
    for(int i=0; i<graph[s].size(); i++) {
        int v=graph[s][i];
        if(!visited[v]) {
            DFS(graph, visited, st, v);
        }
    }
    st.push(s); 
}

void reverseDFS(vector<vector<int>>& graph, vector<bool>& visited, vector<int>& component, int s) {
    visited[s]=true;
    component.push_back(s);
    for(int i=0; i<graph[s].size(); i++) {
        int v=graph[s][i];
        if(!visited[v]) {
            reverseDFS(graph, visited, component, v);
        }
    }
}

int main() {
    int V, E;
    cin >> V >> E;
    int u, v;
    vector<vector<int>> graph(V);
    vector<vector<int>> transposedGraph(V);
    vector<vector<int>> scc; // storage strongly connected components
    vector<bool> visited(V, false);
    stack<int> st;
    for(int i=0; i<E; i++) {
        cin >> u >> v;
        graph[u].push_back(v);
        transposedGraph[v].push_back(u);
    }
    for(int i=0; i<V; i++) {
        if(!visited[i]) {
            DFS(graph, visited, st, i);
        }
        
    }
    visited.assign(V, false);
    while(!st.empty()) {
        if(!visited[st.top()]) {
            vector<int> component;
            reverseDFS(transposedGraph, visited, component, st.top());
            scc.push_back(component);        
        }
        st.pop();
    }
    for(int i=0; i<scc.size(); i++) {
        cout << i << ": ";
        for(int j=0; j<scc[i].size(); j++) {
            cout << scc[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
/*
Testcase:
1/  8 10
    0 1
    1 2
    2 0
    2 3
    3 4
    4 5
    4 7
    5 6
    6 4
    6 7
2/  8 10 
    1 2
    2 3
    2 4
    3 4
    3 6
    4 1
    4 5
    5 6
    6 7
    7 5
*/ 
    