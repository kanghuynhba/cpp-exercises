#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <iomanip>
using namespace std;
int numbEmployees();
void numAbsentDays(int e, int& d);
double averageDaysAbsent(int e, int d);
int main()
{
    int employees = numbEmployees();
    int total_days;
    double average_days;
    numAbsentDays(employees, total_days);
    average_days = averageDaysAbsent(employees, total_days);
    return 0;
};
int numbEmployees() {
    int employees;
    cout << "The number of employees in the company: "; cin >> employees;
    while (employees < 1) {
        cout << "Input Validation: Do not accept a number less than 1 for the number of employees" << endl;
        cout << "Please enter the valid number of employees: "; cin >> employees;
     };
    return employees; 
};
void numAbsentDays(int e, int& d) {
    d = 0;
    for (int i = 1, days; i <= e; i++) {
        cout << "The number of days employee " << i << " missed: "; cin >> days;
        while (days < 0) {
            cout << "Input Validation: Do not accept a negative number for the days any employee missed";
            cout << "Please enter the valid number of days from employee " << i << " : " ; cin >> days;
        };
        d += days;
    }
};   
double averageDaysAbsent(int e, int d) {
    double a;
    return a = d/e;
}