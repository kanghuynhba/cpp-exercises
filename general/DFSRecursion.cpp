#include <iostream>
#include <vector>
using namespace std;
#define MAX 100 
int V, E;
vector<int> graph[MAX];
bool visited[MAX];
int path[MAX];
void DFSRecursion(int s) {
    visited[s]=true;
    for(int i=0; i<graph[s].size(); i++) {
        int v=graph[s][i];
        if(!visited[v]) {
            path[v]=s;
            DFSRecursion(v);
        }
    }
}
void printPathRecursion(int s, int f) {
    if(s==f) {
        cout << f << " ";
    } else {
        if(path[f]==-1) {
            cout << "No path" << endl;
        } else {
            printPathRecursion(s, path[f]);
            cout << f << " ";
        }
    }
}
int main() {
    int u, v;
    cin >> V >> E;
    for(int i=0; i<E; i++) {
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    int s=0, f=5;
    for(int i=0; i<V; i++) {
        visited[i]=false;
        path[i]=-1;
    }
    DFSRecursion(s);
    printPathRecursion(s, f); 
    return 0;
}