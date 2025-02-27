#include <iostream>
#include <vector>
#include <queue>
using namespace std;
#define MAX 100
const int INF=1e9;
vector<pair<int, int>> graph[MAX];
vector<int> dist(MAX, INF);
int path[MAX];
bool visited[MAX];
int N, M;
struct option{
    bool operator() (const pair<int, int> &a, const pair<int, int> &b) const {
        return a.second>b.second;
    }
};
void prims(int src) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, option> pq;
    pq.push(make_pair(src, 0));
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
                pq.push(make_pair(v, w));
                path[v]=u;
            }
        }
    }
}
void printMST() {
    int ans=0; 
    for(int i=0; i<N; i++) {
        if(path[i]==-1) {
            continue;
        }
        ans+=dist[i];
        cout << path[i] << " - " << i << ": " << dist[i] << endl;
    }
    cout << "Weight of MST: " << ans << endl;
}
int main() {
    int u, v, w;
    cin >> N >> M;
    for(int i=0; i<N; i++) {
        path[i]=-1;
        visited[i]=false;
    }
    for(int i=0; i<M; i++) {
        cin >> u >> v >> w;
        graph[u].push_back({v, w});
        graph[v].push_back({u, w});
    }
    int s=0;
    prims(s);
    printMST();
    return 0;
}
