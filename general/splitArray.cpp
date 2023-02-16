#include <iostream>

using namespace std;

void splitArray(int a[], int n, int arr1[] , int &k, int arr2[], int &h);

int main() {
    int a[20];
    int n;
    int arr1[20], arr2[20];
    int k,h;

    cout << "n= ";
    cin >> n;

    cout << "Nhap mang: ";
    for(int i=0; i<n; i++) {
        cin >> a[i];
    };

    splitArray(a, n, arr1, k, arr2, h);

    cout << "Mang 1 sau khi chia: ";
    for(int i=0; i<k; i++) {
        cout << arr1[i] << " ";
    };
    cout << "Mang 2 sau khi chia: ";
    for(int i=0; i<h; i++) {
        cout << arr2[i] << " ";
    };

}

void splitArray(int a[], int n, int arr1[] , int &k, int arr2[], int &h) { 
    k=h=0;

    for(int i=0; i<n/2; i++) {
        arr1[k++] = a[i];
    }
    for(int i=n/2; i<n; i++) {
        arr2[h++] = a[i];
    }
}
