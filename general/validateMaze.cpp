#include <iostream>
#include <vector>
#include <queue>
using namespace std;
#define MAX 21
int n, m;
bool visited[MAX][MAX];
string maze[MAX];
struct Cell {
  int r, c;
};
bool isValid(int r, int c) {
  // Đảm bảo tọa độ nằm trong mê cung
  return r<n && c<m && r>=0 && c>=0;
}
bool BFS(Cell s, Cell f) {
  int dr[]={0, 0, 1, -1};
  int dc[]={1, -1, 0, 0};
  queue<Cell> q;
  q.push(s);
  visited[s.r][s.c]=true;
  while(!q.empty()) {
    Cell u=q.front();
    q.pop();
    if(u.c==f.c && u.r==f.r) {
      return true;
    }
    for(int i=0; i<4; i++) {
      int r=u.r+dr[i];
      int c=u.c+dc[i];
      if(isValid(r, c) && maze[r][c]=='.' && !visited[r][c]) {
        visited[r][c]=true;
        q.push(Cell {r, c});
      }
    }
  }
  return false;
}
int main() {    
  int t;
  cin >> t;
  queue<bool> ans;
  while(t--) {
    cin >> n >> m;
    for(int i=0; i<n; i++) {
      cin >> maze[i];
    }
    // Mảng chứa biên là lối vào của maze
    vector<Cell> entrance;
    // Chuẩn bị dữ liệu
    for(int i=0; i<n; i++) {
      for(int j=0; j<m; j++) {
        visited[i][j]=false;
        if(maze[i][j]=='.' && (i==n-1 || i==0 || j==m-1 || j==0)) {
          entrance.push_back(Cell {i, j});
        }
      }
    }
    if(entrance.size()!=2) {
      ans.push(false);
    } else {
      Cell s=entrance[0];
      Cell f=entrance[1];
      BFS(s, f) ? ans.push(true) : ans.push(false);
    }
  }
  while(!ans.empty()) {
    cout << (ans.front() ? "valid" : "invalid") << endl;
    ans.pop();
  }
  return 0;
}