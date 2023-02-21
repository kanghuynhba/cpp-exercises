#include <iostream>

using namespace std;

int sum2DArray(int arr[10][10], int col, int row);

int main() {
    int row, col;
    int arr[10][10];

    cout << "column: ";
    cin >> col;
    cout << "row: ";
    cin >> row; 

    // Nhap mang
    cout << "Nhap mang: " << endl;
    for(int i=0; i<col; i++) {
        for(int j=0; j<row; j++) {
            cin >> arr[i][j];
        }
    }

    // SUM
    int Sum;

    Sum = sum2DArray(arr, col, row);

    // max of col
    for(int i=0; i<col; i++) {
        int max;
        max = arr[i][0];
        for(int j=1; j<row; j++) {
            if(arr[i][j] > max) {
                max = arr[i][j]; 
            }
        }
        cout << max << endl;
    };

    // Xuat mang
    for(int i=0; i<col; i++) {
        for(int j=0; j<row; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Tong cac phan tu cua mang: " << Sum << endl;

    return 0;
}

int sum2DArray(int arr[10][10], int col, int row) {
    int S = 0;

    for(int i=0; i<col; i++) {
        for(int j=0; j<row; j++) {
            S += arr[i][j];
        }
    };

    return S;
}