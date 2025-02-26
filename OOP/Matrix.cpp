#include <bits/stdc++.h>
using namespace std;

void Nhap(int **a, int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout << "Phan tu hang " << i << " cot " << j << " : ";
            cin >> a[i][j];
        }
    }
}

void Xuat(int **a, int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout << setw(5) << a[i][j];
        }
        cout << endl;
    }
}

void XuatX(int *a, int n) {
    for(int i=0; i<n; i++) {
        cout << setw(5) << a[i];
    }
}

bool isPerfect(int x) {
    int s=0;
    for(int i=1; i<x; i++) {
        if(x%i==0) {
            s+=i;
        }
    }
    return s==x;
}

int sumPerfect(int **a, int n) {
    int S=0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(isPerfect(a[i][j])) {
                S+=a[i][j];
            }
        }
    }
    return S;
}

void findX(int **a, int n, int *x) {
    for(int i=0; i<n; i++) {
        x[i]=a[i][0];
        for(int j=1; j<n; j++) {
            if(x[i]<a[i][j]) {
                x[i]=a[i][j];
            }
        }
    }
}

int main() {
    int **a;  // ma tran cap phat dong
    int n;
    cout << "Nhap cap cua ma tran"; cin >> n;
    a=new int* [n];
    for(int i=0; i<n; i++) {
        a[i]= new int [n];
    }
    cout << "Nhap ma tran vuong a:" << endl;
    Nhap(a, n);     
    cout << "Ma tran a vua nhap: " << endl;
    Xuat(a, n);
    cout << "Tong hoan thien: " << sumPerfect(a, n) << endl;
    int *X;
    X=new int [n];
    findX(a, n, X);
    XuatX(X, n);
    for(int i=0; i<n; i++) {
        delete [] a[i];
    }
    delete [] a;
    return 0;
}