#include <iostream>
using namespace std;

struct Date {
    int d, m, y;
}

int songay(int m, int y) {
    int sn[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if(y%4==0 && (y%10!=0 || y%400==0)) {
        sn[2]=29;
    }
    return sn[m];
}

Date &operator ++ (Date &x) {
    x.d++;
    if(x.d>songay(x.m, x.y)) {
        x.d=1;
        x.m++;
        if(x.m>12) {
            x.m=1;
            x.y++;
        }
    }
}

Date

int main() {

}