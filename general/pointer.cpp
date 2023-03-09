#include <iostream>

using namespace std;

// Con tro - pointer

void inputInteger(int *n);

int main() {
    int n=4;
    int *iPtr=&n; // Lưu địa chi vùng nhớ của biến n
    int numbers[4]= {1 ,2 ,3, 4};
    int *iPtr1;

    *iPtr=6; // Thay đổi giá trị tại địa chỉ con trỏ thì biến n sẽ thay đổi giá trị
    
    inputInteger(&n); // Hàm truyền vào địa chỉ của biến và nhập giá trị tại địa chỉ của biến đó

    // Biến của mảng sẽ lưu trữ địa chỉ là phần tử đầu tiên trong mảng đó
    cout << numbers << endl;
    cout << &numbers[0] << endl;


    for(iPtr1 = numbers; iPtr1<numbers + 4; iPtr1++) {
        cout << *iPtr1 << endl;
    }
        
    cout << &n << endl; // lấy địa chỉ của biến n
    cout <<  "n= " << *iPtr << endl; // lấy giá trị tại địa chỉ biến bằng địa chi con trỏ

    return 0;
}

void inputInteger(int *n) {
    cin >> *n; 
}