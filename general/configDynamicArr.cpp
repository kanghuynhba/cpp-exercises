#include <iostream>
#include <string>

using namespace std;

void inputInt(string label, int &n);
void arrInput(int *arr, int size);
void arrOutput(int *arr, int size);
void push(int* &arr, int &size, int new_element);
void remove(int* &arr, int &size, int deletedIndex);
void update(int* &arr, int &size, int updatedIndex, int newElement);
void sorting(int *arr, int size);
void bubleSorting(int *arr, int size);

int main() {
    int n, x, y;

    inputInt("n = ", n);
    cout << "Nhap mang: ";
    int *numbers= new int[n];
    arrInput(numbers, n);
    inputInt("y = ", y);
    inputInt("x = ", x);
    // push(numbers, n, x);
    // remove(numbers, n, x);
    update(numbers, n, x, y);
    bubleSorting(numbers,n);
    cout << "Mang sau khi nhap: ";
    arrOutput(numbers, n);

    return 0;
}

void inputInt(string label, int &n) {
    cout << label;
    cin >> n;
}

void arrInput(int *arr, int size) {

    for(int i=0; i<size; i++) {
    cin >> arr[i];
    }
}

void arrOutput(int *arr, int size) {
    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
}

void push(int* &arr, int &size, int newElement) {
     // Tạo ra 1 cái mảng mới 
     int newSize= size+1;
     int *tmpArr= new int[newSize];

     // Copy toàn bộ phần tử cũ sang mảng mới
     for(int i=0; i<size; i++) {
        tmpArr[i]=arr[i];
     }

     // Thêm phần tử cũ vào cuối mảng mới
     tmpArr[newSize-1]=newElement;

     // Gán mảng mới cho con trỏ cũ và tăng size lên 1 đơn vị
     delete[] arr;
     arr=tmpArr;
     size=newSize;
}

void remove(int* &arr,int &size,int deletedIndex) {
    // Xóa phần tử trên mảng động cũ
    for(int i=deletedIndex; i<size; i++) {
        arr[i]=arr[i+1];
    }

    // Tạo mảng mới có số lượng phần tử là size-1
    int newSize= size-1;
    int *tmpArr= new int[newSize];

    // Copy các phần tử của mảng cũ sang mảng mới
    for(int i=0; i<newSize; i++) {
        tmpArr[i]=arr[i];
    }

    // Gán mảng mới cho mảng cũ
    delete[] arr;
    arr=tmpArr;
    size=newSize;
}

void update(int* &arr, int &size, int updatedIndex, int newElement) {
    // Tạo ra 1 mảng mới
    int newSize=size+1;
    int *tmpArr=new int[newSize];

    // Copy toàn bộ mảng cũ sang mảng mới
    for(int i=0; i<updatedIndex; i++) {
        tmpArr[i]=arr[i];
    }
    for(int i=newSize; i>updatedIndex; i--) {
        tmpArr[i]=arr[i-1];
    }

    // Thêm phần tử mới vào mảng mới
    tmpArr[updatedIndex]=newElement;

    // Gán mảng mới cho con trỏ cũ và tăng size lên 1 đơn vị
    delete[] arr;
    arr=tmpArr;
    size=newSize;
}

void sorting(int *arr, int size) {
    for(int i=0; i<size; i++) {
        for(int j=i+1; j<size; j++) {
            if(arr[i]>arr[j]) {
                int tmp=arr[i];
                arr[i]=arr[j];
                arr[j]=tmp;
            }
        }
    }
}

void bubleSorting(int *arr, int size) {
    for(int i=size-1; i>0; i--) {
        for(int j=0; j<i; j++) {
            if(arr[j]>arr[j+1]) {
                int tmp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tmp;
            }
        }
    }
}

