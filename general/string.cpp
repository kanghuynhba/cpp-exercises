#include <iostream>
#include <string>

using namespace std;

// string - chuoi ky tu
/*
    - str.substr(x, y) : lấy ra chuỗi con có độ dài là y kí tự từ vị trí x của chuỗi str
    - str.find(s) : nhập vào chuỗi s và tìm kiếm s có trong str hay ko, có sẽ trả về vị trí chuỗi đấy (index)
    - str.erase(x, n) : xóa đi n ký tự bắt đầu bằng ký tự x
    - str.replace(x, n, s) : thay thế n phần tử từ vị trí x bằng chuỗi ký tự s
    - str.compare(s) : so sánh giữa chuỗi str và chuỗi s, giá trị bằng trả ra 0, str>s trả ra 1 else -1 (lớn hơn nhỏ hơn dựa trên bảng mã ASCII quy đổi ký tự ra số)
    - str.insert(x, s) : chèn chuỗi s vào vị trí x trong chuỗi str
    -str.length, str.size() : trả về độ dài của chuỗi đó
*/

int main() {
    string str;
    int n;

    cout << "n= ";
    cin >> n;
    cin.ignore();

    cout << "Nhap chuoi: ";
    getline(cin, str);
    
    cout << "Chuoi vua nhap: " << str[3];

    return 0;    
}