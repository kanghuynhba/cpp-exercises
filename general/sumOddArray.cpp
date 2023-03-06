#include <iostream>

using namespace std;

int main() {
    int n, m, arr[10][10];

    cout << "n= ";
    cin >> n;

    cout << "m= ";
    cin >> m;

    cout << "Nhap ma tran: " << endl;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin >> arr[i][j];
        }
    }

    int sum=0;

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(arr[i][j]%2 != 0) {
            sum+=arr[i][j];
           } 
        }
    }

    cout << "Tong cac so le: ";
    cout << sum;
}