#include <iostream>

using namespace std;

int main() {
    int n, m, matrix1[10][10], matrix2[10][10];

    cout << "n= ";
    cin >> n;

    cout << "m= ";
    cin >> m;
   
    cout << "Nhap ma tran 1: " << endl;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin >> matrix1[i][j]; 
        }
    }
    
    cout << "Nhap ma tran 2: " << endl;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin >> matrix2[i][j]; 
        }
    }

    cout << "Tong 2 ma tran: " << endl;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            int s= matrix1[i][j] + matrix2[i][j];
            cout << s << " ";
        }        
        cout << endl;
    }
}