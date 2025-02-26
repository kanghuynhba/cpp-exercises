#include <iostream>
#include <vector>
using namespace std;
#pragma warning (disable: 4996)
#define MAX 105
#define INF 1e9
vector<vector<int>> graph;
vector<vector<int>> dist;
vector<vector<int>> path;
int V;
void printPath(vector<vector<int>> &path, int s, int f) {
  if(s==f) {
    cout << f << " ";
    return;
  }
  if(path[s][f]==-1) {
    cout << "No path";
    return;
  }
  printPath(path, s, path[s][f]);
  cout << f << " ";
}
void printSolution(vector<vector<int>> &path, vector<vector<int>> &dist) {
  for(int i=0; i<V; i++) {
    for(int j=0; j<V; j++) {
      if(i!=j) {
        cout << i << "->" << j << ": ";
        printPath(path, i, j);
        cout << endl;

        if(path[i][j]!=-1) {
          cout << "Total length: " << dist[i][j] << endl; 
        }
      }
    }
  }
}
bool FloydWarshall(vector<vector<int>> &graph, vector<vector<int>> &dist) {
  for(int i=0; i<V; i++) {
    for(int j=0; j<V; j++) {
      dist[i][j]=graph[i][j];
      if(graph[i][j]!=INF && i!=j) {
        path[i][j]=i;
      } else {
        path[i][j]=-1;
      }
    }
  }
  for(int k=0; k<V; k++) {
    for(int i=0; i<V; i++) {
      if(dist[i][k]==INF) {
        continue;
      }
      for(int j=0; j<V; j++) {
        if(dist[k][j]!=INF && dist[i][j] > dist[i][k]+dist[k][j]) {
          dist[i][j]=dist[i][k]+dist[k][j];
          path[i][j]=path[k][j];
        }
      }
    }
  }
  for(int i=0; i<V; i++) {
    if(dist[i][i]<0) {
      return false;
    }
  }
  return true;
}
int main() {
  int n, temp;
  cin >> V;
  graph=vector<vector<int>>(V, vector<int>(V)); 
  dist=vector<vector<int>>(V, vector<int>(V));
  path=vector<vector<int>>(V, vector<int>(V));
  for(int i=0; i<V; i++) { 
    for(int j=0; j<V; j++) {
      cin >> temp;
      if(temp==0 && i!=j) {
        graph[i][j]=INF;
      } else {  
        graph[i][j]=temp;
      }
    }
  }
  if(FloydWarshall(graph, dist)==true) {
    printSolution(path, dist);
  } else {
    cout << "Graph contains negative weight cycle";
  }
  return 0;
}

