#include <iostream>
#include <vector>
#include <queue>
using namespace std;
#define MAX 100
int V, E;
int path[MAX];
vector<int> graph[MAX];
void BFS(int s) {
    bool visited[MAX];
    for(int i=0; i<V; i++) {
        visited[i]=false;
        path[i]=-1;
    }
    queue<int> q;
    visited[s]=true;
    q.push(s);
    while(!q.empty()) {
        int u=q.front();
        q.pop();
        for(int i=0; i<graph[u].size(); i++) {
            int v=graph[u][i];
            if(!visited[v]) {
                visited[v]=true;
                q.push(v);
                path[v]=u;
            }
        }
    }
}
void printPath(int s, int f) {
    int b[MAX];
    int m=s;
    if(s==f) {
        cout << s;
        return;
    }
    if(path[f]==-1) {
        cout << "No path" << endl;
        return;
    }
    while(true) {
        b[m++]=f;
        f=path[f];
        if(f==s) {
            b[m++]=s;
            break;
        }
    }
    for(int i=m-1; i>=0; i--) {
        cout << b[i] << " ";
    }
}
void printPathRecursion(int s, int f) {
    if(s==f) {
        // Base case
        cout << f << " ";
    } else {
        if(path[f]==-1) {
            cout << "No path" << endl;
        } else {
            // Recursion case
            printPathRecursion(s, path[f]);
            cout << f << " ";
        }
    }
}
int main() {
    int u,v;
    cin >> V >> E; 
    for(int i=0; i<E; i++) {
        cin >> u >> v;
        graph[u].push_back(v);  
        graph[v].push_back(u); 
    }
    int s=0;
    int f=5;
    BFS(s);
    printPath(s, f);
    return 0;
}