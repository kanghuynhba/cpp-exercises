#include <iostream>
#include <vector>
#include <queue>
using namespace std;
#define MAX 101
const int INF=1e9;
int n;
vector<pair<int, int>> graph[MAX];
vector<bool> visited(MAX, false);
int BFS(int s) {
  queue<int> q;
  visited[s]=true;
  q.push(s);
  while(!q.empty()) {
    int u=q.front();
    q.pop();
    for(int i=0; i<graph[u].size(); i++) {
      int v=graph[u][i].first;
      if(!visited[v]) {
        visited[v]=true;
        q.push(v);
      }
    }
  }
}

void BellmanFord
int main() {
  while(true) {
    cin >> n;
    if(n==-1) {
      break;
    }
    for(int i=1; i<=n; i++) {
      int w, door;
      cin >> w >> door;
      for(int j=0; j<door; j++) {
        int v;
        cin >> v;
        graph[i].push_back({v, w});
      }
    }
  }
  return 0;
}