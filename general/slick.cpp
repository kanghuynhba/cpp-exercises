#include <iostream> 
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;
#define MAX 250 
int N, M;
bool visited[MAX][MAX];
int maze[MAX][MAX];
struct Cell {
  int r, c;
};
struct Slick {
  int size, slick;
};
bool isValid(int r, int c) {
  return r<N && r>=0 && c<M && c>=0;
}
bool option(const Slick &a, const Slick &b) {
  return a.size<b.size;
}
int BFS(Cell s) {
  int count=0;
  queue<Cell> q; 
  q.push(s);
  while(!q.empty()) {
    int dr[]={0, 0, 1, -1};
    int dc[]={1, -1, 0, 0};
    Cell u=q.front();
    q.pop();
    for(int i=0; i<4; i++) {
      int r= u.r+dr[i];
      int c= u.c+dc[i];
      if(isValid(r, c) && maze[r][c]==1) {
        q.push(Cell {r, c});
        count++;
        maze[r][c]=2;
      }
    }
  }
  return count;
}
int main() {    
  vector<Slick> results[MAX];
  int k=0;
  cin >> N >> M;
  while(N!=0 && M!=0) {
    for(int i=0; i<N; i++) {
      for(int j=0; j<M; j++) {
        cin >> maze[i][j]; 
      }
    }
    for(int i=0; i<N; i++) {
      Cell s;
      for(int j=0; j<M; j++) {
        if(maze[i][j]==1) {
          s.r=i;
          s.c=j;
          results[k].push_back(Slick {BFS(s), 1});
        }
      }
    }
    k++;
    cin >> N >> M;
  }
  for(int i=0; i<k; i++) {
    cout << results[i].size() << endl;
    if(results[i].size()==0) {
      continue;
    }
    sort(results[i].begin(), results[i].end(), option);
    for(int j=0; j<results[i].size()-1; j++) {
      if(results[i][j].size==results[i][j+1].size) {
        results[i][j+1].slick=results[i][j].slick+1;
        vector<Slick>::iterator it;
        it=results[i].begin()+j;
        results[i].erase(it);
        j--;
      }
    }
    for(int j=0; j<results[i].size(); j++) {
      if(results[i][j].size==0) {
        results[i][j].size=1;
      } 
      cout << results[i][j].size  << " " <<  results[i][j].slick << endl;
    }
  }

  return 0;
}   