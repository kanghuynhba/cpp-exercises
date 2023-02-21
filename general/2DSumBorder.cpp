#include <iostream>

using namespace std;

int sumBorderArray(int arr[10][10], int col, int row);

int main() {
    int arr[10][10];
    int col, row;

    cout << "column: ";
    cin >> col;
    cout << "row: ";
    cin >> row;

    while ( col < 2 || col > 10 || row < 2 || row > 10) {
        cout << "Invalid input, please type again!" << endl;
        cout << "column: ";
        cin >> col;
        cout << "row: ";
        cin >> row;
    }

    // Nhap mang
    cout << "Nhap mang: " << endl;
    for(int i=0; i<col; i++) {
        for(int j=0; j<row; j++) {
            cin >> arr[i][j];
        }
    }

    int sumBorder;

    sumBorder = sumBorderArray(arr, col, row);

    cout << "Tong bien cua mang la: " << sumBorder;
    return 0;
}

int sumBorderArray(int arr[10][10], int col, int row) {
    int S = 0;

    // Cach 1:
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            if(i == 0 || j == 0 || i == row-1 || j == col-1) {
            S+= arr[i][j];
            }
        }
    }
    // Cach 2:
    // for(int i=0; i<row; i++) {
    //     S+= arr[0][i] + arr[col-1][i];
    // }
    // for(int i=1; i<col-1; i++) {
    //     S+= arr[i][0] + arr[i][row-1];
    // }

    return S;
}