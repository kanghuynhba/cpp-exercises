#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> dist;
int N;
void FloyWarshall() {
    for(int k=0; k<49; k++) {
        for(int i=0; i<49; i++) {
            for(int j=0; j<49; j++) {
                if(i<=k && k<=j && dist[i][j]<dist[i][k]+dist[k][j]) {
                    dist[i][j]=dist[i][k]+dist[k][j];
                }
            }
        }
    }
}
int main() {
    int T;
    cin >> T;
    while(T--) {
        cin >> N;
        dist=vector<vector<int>> (49, vector<int>(49));
        for(int i=0; i<49; i++) {
            for(int j=0; j<49; j++) {
                dist[i][j]=0;
            }
        }
        for(int i=0; i<N; i++) {
            int S, E, C;
            cin >> S >> E >> C;
            if(C>dist[S][E]) {
                dist[S][E]=C;
            }
        }
        FloyWarshall();
        cout << dist[0][48] << endl;
    }
    return 0;
}