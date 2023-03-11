#include <iostream>

using namespace std;

int* arrayInput(int& n);
void arrayOut(int a[], int n);

int main() {
    int n;
    int* b = arrayInput(n);
    
    if(n>0) {
        arrayOut(b, n);
        delete[] b; // Giải phóng bộ nhớ
    }

    return 1;
}

int* arrayInput(int& n) {
    int *a=NULL; // a sẽ giữ địa chỉ bộ nhớ mảng

    while (1) {
        cout << "So phan tu can su dung: "; cin >> n;
        if(n<0) {
            cout << "Nhap sai, moi ban nhap lai..." << endl;
        } else {
            break;
        }
    } 

    a = new int[n]; // Xin n phần tử kiểu int

    if(a==NULL) { // Không thể cấp phát bộ nhớ động
        n=0;
        return NULL;
    }

    cout << "Nhap gia tri cho mang:" << endl;

    for(int i=0; i<n; i++) {
        cout << "a[" << i << "] = "; cin >> a[i];
    }

    return a;
}

void arrayOut(int a[], int n) {

    cout << "Mang sau khi nhap la:" << endl;

    for(int i=0; i<n; i++) {
        cout << a[i] << " ";
    }
} 
