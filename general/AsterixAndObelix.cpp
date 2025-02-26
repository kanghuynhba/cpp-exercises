#include <iostream>
#include <vector> 
using namespace std;
#define INF 1e9 
int N, R, Q;
vector<vector<int>> dist;
vector<vector<int>> feastCost;
void FloydWarshall() {
  int times=2;
  while(times--) {
    for(int k=0; k<N; k++) {
      for(int i=0; i<N; i++) {
        if(dist[i][k]==INF) {
          continue;
        }
        for(int j=0; j<N; j++) {
          int maxCost=max(feastCost[i][k], feastCost[k][j]);
          if(dist[k][j]!=INF && dist[i][j]+feastCost[i][j]>dist[i][k]+dist[k][j]+maxCost) {
            dist[i][j]=dist[i][k]+dist[k][j];
            feastCost[i][j]=maxCost;
          } 
        }
      }
    }
  }
}
int main() {
  int tc=1;
  while(true) {
    cin >> N >> R >> Q;
    if(N==0) {
      break;
    }
    dist=vector<vector<int>> (N, vector<int> (N));
    feastCost=vector<vector<int>> (N, vector<int> (N));
    for(int i=0; i<N; i++) {
      for(int j=0; j<N; j++) {
        dist[i][j]=INF;
        feastCost[i][j]=0;
        if(i==j) {
          dist[i][j]=0;
        }
      }
    }
    for(int i=0; i<N; i++) {
      cin >> feastCost[i][i];
    }
    for(int i=0; i<R; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        u--;
        v--;
        dist[u][v]=w;
        dist[v][u]=w;
        feastCost[v][u]=max(feastCost[u][u], feastCost[v][v]);
        feastCost[u][v]=max(feastCost[u][u], feastCost[v][v]);
    }
    FloydWarshall();
    cout << "Case #" << tc << endl;
    tc++; 
    for(int i=0; i<Q; i++) {
      int c1, c2;
      cin >> c1 >> c2;
      c1--;
      c2--;
      if(dist[c1][c2]!=INF) {
        cout << dist[c1][c2]+feastCost[c1][c2] << endl;
      } else {
        cout << -1 << endl;
      }
    }
    cout << endl;
  }
  return 0;
}