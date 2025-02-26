#include <iostream>
#include <vector>
using namespace std;
vector<int> h;
void maxHeapify(int i) {
    int largest=i;
    int left=n/2+1;
    int right=n/2+2;
    if(left<h.size() && h[left]>h[largest]) {
        largest=left;
    }
    if(right<h.size() && h[right]>h[largest]) {
        largest=right;
    }
    if(largest!=i) {
        swap(h[i], h[largest]);
        maxHeapify(largest);
    }
}
void pop() {
    int length=h.size();
    if(length==0) {
        return;
    }
    h[0]=h[length-1];
    h.pop_back();
    maxHeapify(0);
}
void push(int value) {
    h.push_back(value);
    int i=h.size()-1;
    while(i!=0 && h[(i-1)/2]<h[i]) {
        swap(h[i], h[(i-1)/2]);
        i=(i-1)/2;
    }
}
void buildHeap(int n) {
    for(int i=n/2-1; i>=0; i--) {
        maxHeapify(i);
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