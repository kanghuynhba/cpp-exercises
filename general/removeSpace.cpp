#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;

    cout << "Nhap chuoi: ";
    getline(cin, str);

    // Xoa cach dau chuoi 
    while(str[0] == ' ') {
        str.erase(0,1);
    }

    // Xoa cach cuoi chuoi
    while (str[str.size()-1] == ' ') {
        str.erase(str.size()-1,1);
    }

    // Xoa cach o giua
    int i=0;
    while(i<str.size()) {
        if(str[i] == str[i+1] && str[i+1] == ' ') {
            str.erase(i,1);
        } else {
            i++;
        }
    }

    // Chuyen cac ky tu thanh chu thuong
    for(int i=0; i < str.size(); i++) {
        if (str[i] >= 65 && str[i] <= 90) {
            str[i] += 32;
        }
    }

    // Chuyen ky tu dau tien thanh viet hoa
    str[0] = toupper(str[0]); // tolower()...
    for(int i=0; i < str.size(); i++) {
        if (str[i] == ' ' && str[i+1] != ' ') {
            str[i+1] -= 32;
        }
    }



    cout << "Ket qua: ";
    cout << str;   
}