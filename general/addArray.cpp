#include <iostream>

using namespace std;

void addArr2ToArr1(int arr1[], int &k, int arr2[], int h);

int main() {
    int arr1[20], arr2[20];
    int k, h;

    cout << "k= ";
    cin >> k;
    
    cout << "Nhap mang 1: ";
    for(int i=0; i<k; i++) {
        cin >> arr1[i];
    };

    cout << "h= ";
    cin >> h;

    cout << "Nhap mang 2: ";
    for(int i=0; i<h; i++) {
        cin >> arr2[i];
    };

    addArr2ToArr1(arr1, k, arr2, h);

   cout << "Mang sau khi gop: ";
    for(int i=0; i<k; i++) {
        cout << arr1[i] << " ";
    }
}

void addArr2ToArr1(int arr1[], int &k, int arr2[], int h) {

    for(int i=0; i<h; i++) {
        arr1[k++] = arr2[i];      
    }
}
