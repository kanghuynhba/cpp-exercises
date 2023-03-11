#include <iostream>
#include <math.h>

using namespace std;

void Swap(auto& a, auto& b);
void Sort(auto a[], auto n);
void bubleSort(auto a[], auto n);


int main() {
    double a[] = {9.7, 8.69, -12.45, -3.125, 4.889, 17.8};
    int n = sizeof(a)/sizeof(a[0]);

    bubleSort(a, n);

    cout << "After sorting: " << endl;
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

}

void Swap(auto& a, auto& b) {
    auto c = a;
        a = b;
        b = c;
}

void Sort(auto a[], auto n) {
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++ ) {
            if (a[i] > a[j]) {
            Swap(a[i], a[j]);
            }   
        }
    }
}

void bubleSort(auto a[], auto n) {
    for(int i=n-1; i>0; i--) {
        for(int j=0; j<i; j++) {
            if(a[j] > a[j+1]) {
                Swap(a[j], a[j+1]);
            }
        }
    }
}