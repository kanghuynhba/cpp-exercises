#include <iostream>

using namespace std;

void addAlternativeArr2ToArr1(int arr1[], int &k, int arr2[], int h);

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

    addAlternativeArr2ToArr1(arr1, k, arr2, h);

   cout << "Mang sau khi gop: ";
    for(int i=0; i<k; i++) {
        cout << arr1[i] << " ";
    }
}

void addAlternativeArr2ToArr1(int arr1[], int &k, int arr2[], int h) {
        int x= 1;

        for(int i=0; i<h; i++) {

        for(int j=k; j>x; j--) {
            arr1[j]= arr1[j-1];
        };

        arr1[x] = arr2[i];

        (k>x) ? x+=2 : x++;
        
        k++;
        }
}
