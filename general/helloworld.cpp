#include <iostream>
#include <math.h>

using namespace std;
bool isPrime(int n);
int main() {    

    int arr[10][10];
    int row, col;
    int count=0;
cout<<"hellp world";
    cin >> row >> col;
    
    // for(int i=0; i<row; i++) {
    //     for(int j=0; j<col; j++) {
    //         cin >> arr[i][j];
    //     }
    // }                   
    // for(int i=0; i<col; i++) {
    //     if(isPrime(arr[0][i])) {
    //         count++;
    //     }
    //     if(isPrime(arr[row-1][i])) {
    //         count++;
    //     }
    // }
    // for(int i=1; i<row; i++) {
    //     if(isPrime(arr[i][0])) {
    //         count++;
    //     }
    //     if(isPrime(arr[i][col-1])) {
    //         count++;
    //     }
    // }
    // cout << count;
    return 0;

}

bool isPrime(int n) {
    bool flag = true;
    if (n < 2) {
        flag = false;
    }
    for(int i= 2; i<=sqrt(n); i++) {
        if(n%i==0) {
            flag = false;
        }
    }
    return flag;
}
