#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define INF 1e9
bool FloydWarshall(vector<vector<char>> &graph, vector<vector<int>> &dist, int V) {
  for(int i=0; i<V; i++) {
    for(int j=0; j<V; j++) {
      if(graph[i][j]=='Y') {
        dist[i][j]=1;
      } else if(i==j) {
        dist[i][j]=0;
      } else {
        dist[i][j]=INF;
      }
    }
  }
  for(int k=0; k<V; k++) {
    for(int i=0; i<V; i++) {
      if(dist[i][k]==INF) {
        continue;
      }
      for(int j=0; j<V; j++) {
        if(dist[k][j]!=INF && dist[i][j]>dist[i][k] + dist[k][j]) {
          dist[i][j]=dist[i][k]+dist[k][j];
        }
      }
    }
  }
  for(int i=0; i<V; i++) {
    if(dist[i][i]!=0) {
      return false;
    }
  }
  return true;
}
int main() {
  int T;
  cin >> T;
  cin.ignore();
  vector<vector<char>> graph;
  vector<vector<int>> dist;
  while (T--) {
    string str;
    getline(cin, str);
    int V=str.size();
    graph=vector<vector<char>> (V, vector<char>());
    dist=vector<vector<int>> (V, vector<int>(V));
    for(int i=0; i<V; i++) {
      graph[0].push_back(str[i]);
    }
    for(int i=1; i<V; i++) {
      for(int j=0; j<V; j++) {
        char x;
        cin >> x;
        graph[i].push_back(x);
      }
    }
    if(FloydWarshall(graph, dist, V)) {
      int id, max=0;
      for(int i=V-1; i>=0; i--) {
        int count=0;
        for(int j=0; j<V; j++) {
          if(dist[i][j]==2) {
            count++;
          }
        }
        if(max<=count) {
          max=count;
          id=i;
        }
      }
      cout << id << " " << max << endl;
    }
    cin.ignore();
  }
  
  return 0;
}

