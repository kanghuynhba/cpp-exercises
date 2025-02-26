#include <iostream>
#include <vector>
using namespace std;
void inputMat(int n, vector<vector<int>> &mat) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cin >> mat[i][j];
        }
    }
}
void matrixMultiply(vector<vector<int>> &A,vector<vector<int>> &B, vector<vector<int>> &C, int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            for(int k=0; k<n; k++) {
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
}
// Divide and Conquer
void matrixMultiplyRecursion(vector<vector<int>> &A,vector<vector<int>> &B, vector<vector<int>> &C, int n) {
}
int main() {
    int n;
    cin >> n;
    vector<vector<int>> A, B, C;
    A=vector<vector<int>>(n, vector<int>(n, 0));
    B=vector<vector<int>>(n, vector<int>(n, 0));
    C=vector<vector<int>>(n, vector<int>(n, 0));
    inputMat(n, A);
    inputMat(n, B);
    // matrixMultiply(A, B, C, n);                                                                                                                                              
    matrixMultiplyRecursion(A, B, C, n);                                                                                                                                              
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}