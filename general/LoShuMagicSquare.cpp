#include <iostream>

using namespace std;

void LoShuSquare(int arr[3][3]);

int main() {
    int arr[3][3];

    cout << "Nhap mang 2 chieu: " << endl;
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            cin >> arr[i][j];
        }
    }

    LoShuSquare(arr);

    cout << "Mang 2 chieu la: " << endl;
     for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            cout << arr[i][j] << " ";
        }
            cout << endl;
    }
    return 0;
}

void LoShuSquare(int arr[3][3]) {
    int s=0, h=0, k=0;
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
        s+= arr[i][j];
        k+= arr[j][i];
        }
        h+= arr[i][i];
        cout << h << " " << k << " " << s << endl;
    }
    if(s==15 && h==15 && k==15) {
        cout << "The array is a Lo Shu Magic Square.";
    } else {
        cout << "The array is not a Lo Shu Magic Square.";
    }
}