#include <iostream>

using namespace std;

void Remove(int a[],int &n, int k);
bool Insert(int a[], int &n, int x, int k);

int main() {
    int a[20];
    int n,k;

    cout << "n= ";
    cin >> n;

    cout << "Nhap mang: ";
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }

    cout << "deleteIndexInArray= ";
    cin >> k;

    Remove(a, n, k);
    // Insert(a, n, x, k);

    cout << "Mang sau khi them: ";
    for(int i=0; i<n; i++) {
        cout << a[i] << " ";
    }
}

void Remove(int a[],int &n, int k) {    
    if (k<0 || k>n) {
        return ;
    }

    for(int i=k; i<n-1; i++) {
        a[i] = a[i+1];
    };
    --n;
}

bool Insert(int a[], int &n, int x, int k) {
    if (k<0 || k>n) {
        return false;
    }

    for(int i=n; i>k; i--) {
        a[i] = a[i-1];
    }
    a[k]=x;
    ++n;
    return true;
}