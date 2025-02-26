#include <iostream>
using namespace std;
#define MAX 20
int ranks[MAX+5];
int parent[MAX+5];
void makeSet() { // make parent array
    for(int i=0; i<MAX; i++) {
        parent[i]=i;
        //Improvement
        ranks[i]=0;
    }
}
int findSet(int u) { // find present element
    while(u!=parent[u]) {
        u=parent[u];
    }
    return u;
}
// Improvement: Path compression
int findSetImprovement(int u) {
    if(parent[u]!=u) {
        // Recursion case 
        parent[u]=findSetImprovement(parent[u]);
    }
    // Base case
    return parent[u];
}
void unionSet(int u, int v) {
    int up=findSet(u);
    int vp=findSet(v);
    parent[up]=vp;
}
// Improvement: Union by Rank
void unionSetImprovement(int u, int v) {
    int up=findSet(u);
    int vp=findSet(v);
    if(up==vp)  {
        return;
    }
    if(ranks[up]>ranks[vp]) {
        parent[vp]=up;
    } else if(ranks[up]<ranks[vp]) {
        parent[up]=vp;
    } else {
        parent[up]=vp;
        ranks[vp]++;   
    }
}
int main() { 
    int Q, u, v, q;
    cin >> Q;
    makeSet();
    for(int i=0; i<Q; i++) {
        cin >> u >> v >> q;
        if(q==1) {
            unionSet(u, v);
        } 
        if(q==2) {
            int parentU=findSet(u);
            int parentV=findSet(v);
            if(parentU==parentV) {
                cout << "YES";
            } else {
                cout << "NO";
            }
            cout << endl;
        }
    }
    return 0;
}
