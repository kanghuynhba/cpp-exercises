#include <iostream>
#include <math.h>

using namespace std;

void Swap(auto& a, auto& b);
void Sort(auto a[], auto n);


int main() {
    double a[] = {9.7, 8.69, -12.45, -3.125, 4.889, 17.1125};
    int n = sizeof(a)/sizeof(a[0]);

    Sort(a, n);

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

