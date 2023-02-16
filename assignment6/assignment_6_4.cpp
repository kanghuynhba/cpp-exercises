#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;
int check_the_input(int x)
{
	while (x < 0)
	{
		cout << "You entered the wrong data. " << endl;
		cout << "please re-enter. " << endl;
		cin >> x;
	}
	return x;
}
int sum_money_in_patient()
{
	int day, rate, medication, service;
	cout << "Enter the number of days spent in the hospital." << endl;
	cin >> day;
	while (day < 1)
	{
		cout << "You entered the wrong data. " << endl;
		cout << "please re-enter. " << endl;
		cin >> day;
	}

	cout << "Enter the daily rate. " << endl;
	cin >> rate;
	rate = check_the_input(rate);
	cout << "Enter Hospital medication charges." << endl;
	cin >> medication;
	medication = check_the_input(medication);
	cout << "Enter Charges for hospital services (lab tests, etc.) " << endl;
	cin >> service;
	service = check_the_input(service);
	return day*rate + medication + service;
}
int sum_money_out_patient()
{
	int medication, service;
	cout << "Enter Hospital medication charges." << endl;
	cin >> medication;
	medication = check_the_input(medication);
	cout << "Enter Charges for hospital services (lab tests, etc.) " << endl;
	cin >> service;
	service = check_the_input(service);
	return medication + service;
}
int main()
{
	int x;
	cout << "Are you an inpatient or outpatient ?" << endl;
	cout << "As an inpatient, enter 0" << endl;
	cout << "As an outpatient, enter 1" << endl;
	cin >> x;
	while (x < 0 || x> 1 )
	{
		cout << "You entered the wrong data. " << endl;
		cout << "please re-enter. " << endl;
		cin >> x;
	}

	if (x ==0)
	{
		int total_cost = sum_money_in_patient();
		cout << "total cost " << total_cost;
	}
	else if (x == 1)
	{
		int total_costs = sum_money_out_patient();
		cout << "total cost " << total_costs;
	}

}