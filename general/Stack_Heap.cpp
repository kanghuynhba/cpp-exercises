#include <iostream>

using namespace std;

int main() {
    int *a = new int(5); // Được tạo ra trên vùng nhớ Heap vì là đối tượng của con trỏ

    cout << *a << endl;

    delete a;

    int *b = new int[3]; // Khai báo biến con trỏ b với 3 vùng nhớ
    
    for(int i=0; i<3; i++) {
        b[i]=1;
    }

    cout << "Cac phan tu truoc khi them: " << endl;
    for(int i=0; i<3; i++) {
        cout << b[i] << endl;
    }
    // Tạo mảng động mới có số lượng phần tử là 4
    int *newArr= new int[4];

    // Sao chép toàn bộ giá trị từ mảng cũ sang mảng mới
    for(int i=0; i<3; i++) {
        newArr[i]=b[i];
    }

    newArr[3]=2;

    // Xóa vùng nhớ cũ
    delete[] b; // delele[] để xóa hết tâp hợp phần tử của vùng nhớ b  

    // Gán vùng nhớ mới cho con trỏ b
    b = newArr; // Con trỏ b được gán số vùng nhớ của con trỏ newArr là 4k

    cout << "Cac phan tu sau khi them:" << endl;
    for(int i=0; i<4; i++) {
        cout << b[i] << " ";
    }

    return 0;
}