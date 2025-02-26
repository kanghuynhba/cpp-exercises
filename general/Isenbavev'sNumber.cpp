#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <map>
using namespace std;
#define MAX 1001 
int N;
vector<int> graph[MAX];
int dist[MAX];
void BFS(int s) {
    for(int i=0; i<N; i++) {
        dist[i]=-1;
    }
    queue<int> q;
    dist[s]=0;
    q.push(s);
    while(!q.empty()) {
        int u=q.front();
        q.pop();
        for(int i=0; i<graph[u].size(); i++) {
            int v=graph[u][i];
            if(dist[v]==-1) {
                dist[v]=dist[u]+1;
                q.push(v);
            }
        }
    }
}
int main() {
    int n;
    cin >> n;
    int count=0;
    map<string, int> teams;
    map<string, int>::iterator it;
    for(int i=0; i<n; i++) {
        string str[3];
        for(int j=0; j<3; j++) {
            map<string, int>::iterator temp;
            cin >> str[j];
            temp=teams.find(str[j]);
            if(temp==teams.end()) {
                teams[str[j]]=count;
                count++;
            }
        }
        for(int j=0; j<3; j++) {
            if(j==2) {
                graph[teams[str[0]]].push_back(teams[str[2]]);
                graph[teams[str[2]]].push_back(teams[str[0]]);
            } else {
                graph[teams[str[j]]].push_back(teams[str[j+1]]);
                graph[teams[str[j+1]]].push_back(teams[str[j]]);
            }
        }
    }
    N=teams.size();
    for(it=teams.begin(); it!=teams.end(); it++) {
        if(it->first=="Isenbaev") {
            BFS(it->second);
            break;
        }
    }
    int i=0;
    for(it=teams.begin(); it!=teams.end(); it++) {
        if(dist[it->second]!=-1) {
            cout << it->first << " " << dist[it->second] << endl;
        } else {
            cout << it->first << " " << "undefined" << endl;
        }
        i++;
    }
    return 0;
}