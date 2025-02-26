#include <iostream>
#include <vector>
#include <queue>
using namespace std;
#define MAX 10001
const int INF=1e9;
vector<pair<int, int>> graph[MAX];
vector<pair<int, int>> graphDFS[MAX];
vector<int> dist(MAX, INF);
bool visited[MAX];
vector<int> path(MAX, -1);
int C, S, Q;
struct option{
    bool operator() (const pair<int, int> &a, const pair<int, int> &b) const {
        return a.second>b.second;
    }
};
void prim(int src) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, option> pq;
    pq.push({src, 0});
    dist[src]=0;
    while(!pq.empty()) {
        int u=pq.top().first;
        pq.pop();
        visited[u]=true;
        for(int i=0; i<graph[u].size(); i++) {
            int v=graph[u][i].first;
            int w=graph[u][i].second;
            if(!visited[v] && dist[v]>w) {
                dist[v]=w;
                pq.push({v, w});
                path[v]=u;
            }
        }
    }
}
int DFS(int s, int f, int level) {
    if(s==f) {
        return level;
    }
    visited[s]=true;
    for(int i=0; i<graphDFS[s].size(); i++) {
        int v=graphDFS[s][i].first;
        int w=graphDFS[s][i].second;
        if(!visited[v]) {
            int tmpLevel=DFS(v, f, max(level, w));
            if(tmpLevel!=INF) {
                return tmpLevel;
            }
        }   
    }
    return INF;
}
void resetGraph() {
    for(int i=0; i<C; i++) {
        graph[i].clear();
        graphDFS[i].clear();
        dist[i]=INF;
        visited[i]=false;
        path[i]=-1;
    }
}
void resetData() {
    for(int i=0; i<C; i++) {
        visited[i]=false;
    }
}
int main() { 
    int tc=1;
    while(true) {
        resetGraph();
        cin >> C >> S >> Q;
        if(C==0) {
            break;
        }
        for(int i=0; i<S; i++) {
            int u, v, w;
            cin >> u >> v >> w;
            u--;
            v--;
            graph[u].push_back({v, w});
            graph[v].push_back({u, w});
        }
        for(int i=0; i<C; i++) {
            if(!visited[i]) {
                prim(i);
            }
        }
        for(int u=0; u<C; u++) {
            if(path[u]==-1) {
                continue;
            }
            int v=path[u];
            int w=dist[u];
            graphDFS[u].push_back({v, w});
            graphDFS[v].push_back({u, w});
        }
        cout << "Case #" << tc++ << endl; 
        for(int i=0; i<Q; i++) { 
            int s, f;
            cin >> s >> f;
            s--;
            f--;
            resetData();
            int level=DFS(s, f, 0);
            if(level!=INF) {
                cout << level;
            } else {
                cout << "no path";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
