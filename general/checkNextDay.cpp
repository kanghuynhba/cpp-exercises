#include <iostream>

using namespace std;

int checkLeapYear(int year);
int nDayOfMonth(int month, int year);
void checkNextDay(int &day, int &month, int &year);

int main() {
    int day, month, year;

    checkNextDay(day, month, year);    

    cout << day << "/" << month << "/" << year;
}

int checkLeapYear(int year) {
    if ( year < 1900 || year > 10000) {
        return -1;
    } else return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int nDayOfMonth(int month, int year) {
    int nDay;

    if (month < 1 || month > 12) {
        return -1;
    } else {
        switch (month) { 
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                nDay= 31; 
                break;
            case 4: case 6: case 9: case 11:
                nDay= 30; 
                break;
            default :
                if (checkLeapYear(year)) {
                    nDay = 29;
                } else {
                    nDay = 28;
                }
        }
    }

    return nDay;
}

void checkNextDay(int &day, int &month, int &year) {
    cout << "day = ";
    cin >> day;

    cout << "month = ";
    cin >> month;
 
    cout << "year = ";
    cin >> year;
    
    int nDay = nDayOfMonth(month, year);

    if (day < 1 || day > nDay) {
        cout << "Invalid!";
    } else if (day < nDay) {
        day++;
    } else if (month < 12) {
        day = 1;
        month++;
    } else { //day == nDay && month == 12
        day = 1;
        month = 1;
        year++;
    }
}
