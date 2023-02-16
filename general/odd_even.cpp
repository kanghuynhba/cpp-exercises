#include <iostream>

using namespace std;

void splitOddEven(int a[], int n, int odd[], int &k, int even[], int &h);

int main() {
    int a[20];
    int n;
    int odd[20], even[20];
    int k,h;

    cout << "n= ";
    cin >> n;

    cout << "Nhap mang: ";
    for(int i=0; i<n; i++) {
        cin >> a[i];
    };

    splitOddEven(a, n, odd, k, even, h);

   cout << "Mang chan sau khi them: ";
    for(int i=0; i<k; i++) {
        cout << even[i] << " ";
    };
    cout << "Mang le sau khi them: ";
    for(int i=0; i<h; i++) {
        cout << odd[i] << " ";
    };

}

void splitOddEven(int a[], int n, int odd[], int &k, int even[], int &h) {

    k=h=0;
    
    for(int i=0; i<n; i++) {
        if(a[i]%2 == 0) {
            even[k++] = a[i];
        } else {
            odd[h] = a[i];
            h++;
        }
    }
}


