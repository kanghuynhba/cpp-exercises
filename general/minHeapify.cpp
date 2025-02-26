#include <iostream>
#include <vector>
using namespace std;
vector<int> h;
void minHeapify(int i) {
    int smallest=i; // assume i is the smallest value
    int left=2*i+1;
    int right=2*i+2;
    if(left<h.size() && h[left]<h[smallest]) {
        smallest=left;
    }
    if(right<h.size() && h[right]<h[smallest]) {
        smallest=right;
    }
    if(smallest!=i) {
        swap(h[i], h[smallest]);
        minHeapify(smallest);   
    }
}
void push(int value) {
    int i=h.size()-1;
    h.push_back(value);
    while (i!=0 && h[(i-1)/2]>h[i]) {
        swap(h[i], h[(i-1)/2]);
        i=(i-1)/2;
    }
}
void pop() {
    int length=h.size();
    if(length==0) {
        return;
    }
    h[0]=h[length-1];
    h.pop_back();
    minHeapify(0);
}
void buildHeap(int N) {
    for(int i=N/2-1; i>=0; i--) {
        minHeapify(i);
    }
}
int main() {
    int N;
    cin >> N;
    for(int i=0; i<N; i++) {
        int k;
        cin >> k;
        h.push_back(k);
    }
    buildHeap(N);
    return 0;
}