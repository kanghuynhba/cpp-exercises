#include <iostream>

using namespace std;

void passByReference(int &n);
void passByValue(int n); 
void passByRefArr(int* &dynArr);
void passByValArr(int arr[], int *dynArr); 

int main() {
    int a;
    int arr[20];
    int *dynArr= new int[5];


    // cout << "Địa chỉ của biến trước: " << &a << "\tx" << endl; 
    // cout << "Địa chỉ của mảng tĩnh trước: " << &arr << "\t/"  << endl; 
    cout << "Địa chỉ của mảng động trước: " << dynArr << "\t*" << endl; 

    // passByReference(a);
    // passByValue(a);
    // passByRefArr(dynArr);
    passByValArr(arr, dynArr);

    // cout << "Địa chỉ của biến sau: " << &a << "\tx" << endl; 
    // cout << "Địa chỉ của mảng tĩnh sau: " << &arr << "\t/"  << endl; 
    cout << "Địa chỉ của mảng động sau: " << dynArr << "\t*" << endl; 
    
    return 0;
}

void passByReference(int &n) {
    cout << "Địa chỉ của biến tham chiếu: " << &n << "\tx" << endl;
}

void passByValue(int n) { 
    cout << "Địa chỉ của biến tham trị: " << &n << endl;
}

void passByValArr(int arr[], int *dynArr) {
    cout << "Địa chỉ của mảng tham trị tĩnh: " << arr << endl;

    cout << "Địa chỉ của mảng tham trị động trước: " << dynArr << "\t*" << endl;

    int *tmpArr=new int[5];
    delete[] dynArr;
    dynArr=tmpArr;
    
    cout << "Địa chỉ của mảng tham trị động tạm thời sau: " << tmpArr << "\t~" << endl;
    cout << "Địa chỉ của mảng tham trị động sau: " << dynArr << "\t*" << endl;
}

void passByRefArr(int* &dynArr) { 
    cout << "Địa chỉ của mảng tham chiếu động trước: " << dynArr << "\t*" << endl;

    int *tmpArr=new int[5];
    delete[] dynArr;
    dynArr=tmpArr;

    cout << "Địa chỉ của mảng tham chiếu động tạm thời sau: " << tmpArr << "\t~" << endl;
    cout << "Địa chỉ của mảng tham chiếu động sau: " << dynArr << "\t*" << endl;
}
