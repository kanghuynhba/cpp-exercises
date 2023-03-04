#include <iostream>

using namespace std;

void twoSum(int arr[],int n, int k, int &a, int &b);

int main() {
    int arr[20], n, k, a, b;

    cout << "n: ";
    cin >> n;

    cout << "Nhap mang: ";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    cout << "k= ";
    cin >> k;

    twoSum(arr, n, k, a, b);

    cout << "Mang sau khi nhap: ";
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }

    cout << "Ket qua: " << a << " " << b;

}  

void twoSum(int arr[],int n, int k, int &a, int &b) {
    
    for(int i=0; i<n; i++) {
        if (arr[i] < k) {
            int remain= k-arr[i];
            for(int j=i+1; j<n; j++) {
                if (remain == arr[j]) {
                    a=i;
                    b=j;
                } else {
                    a= -1;
                    b= -1;
                }
            }
        }      
    }

}