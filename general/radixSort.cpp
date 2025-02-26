#include <bits/stdc++.h>

using namespace std;

struct Item{
    int item;
    int key;
    vector<int> digits;
};

void countingSort(vector<Item>& A) {
    int size=A.size();
    int c=0;
    for(int i=0; i<size; i++) {
        c=max(c, A[i].key);
    }
    c++;
    vector<vector<Item>> count(c);
    for(int i=0; i<size; i++) {
        count[A[i].key].push_back(A[i]);
    }
    int k=0;
    for(int i=0; i<c; i++) {
        for(int j=0; j<count[i].size(); j++) {
            A[k++]=count[i][j];
        }
    }
}

void radixSort(vector<int>& A) {
    int size=A.size();
    int c=0;
    int maxNumb=0;
    for(int i=0; i<size; i++) {
        maxNumb=max(maxNumb, A[i]);
    }
    while(maxNumb>0) {
        maxNumb/=size;
        c++;
    }
    vector<Item> D;
    for(int i=0; i<size; i++) {
        vector<int> digits;
        int numb=A[i];
        for(int j=0; j<c; j++) {
            digits.push_back(numb%size);
            numb/=size;
        }
        D.push_back({A[i], -1, digits});
    } 
    for(int i=0; i<c; i++) {
        for(int j=0; j<size; j++) {
            D[j].key=D[j].digits[i];
        }
        countingSort(D);
    }
    for(int i=0; i<size; i++) {
        A[i]=D[i].item;
    }
}

int main() {
    int size;
    vector<int> A;
    cin >> size;
    int x;
    for(int i=0; i<size; i++) {
        cin >> x;
        A.push_back(x);
    }8
    radixSort(A);
    for(int i=0; i<size; i++) {
        cout << A[i] << " ";
    }
    return 0;
}