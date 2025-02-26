#include <bits/stdc++.h>

using namespace std;

struct Date {
    int day, month, year;
}

Date increaseDate(Date& D) {
    Date nextDay;
    int daysInMonth;
    switch D.month:
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            daysInMonth=31;
        case 4: case 6: case 9: case 11:
            daysInMonth=30;
        case 2:
            if((D.year%4==0 && D.year%100!=0) || y%400==0) {
                daysInMonth=29;
            } else {
                daysInMonth=28;
            }
        default:
            daysInMonth=0;

}

int main() {

    return 0;
}