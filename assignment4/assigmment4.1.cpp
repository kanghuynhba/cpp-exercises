#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int num_1,num_2, answer;char y;
    cout << "Enter number : ";cin >> num_1;
    cout << "Enter number : ";cin >> num_2;
   

    cout << setw(4) << num_1 << setw(2) <<"+"<< setw(4) <<num_2<<" = ?\n" << endl;
    cout << "Press enter to continue..." ;
    cin.get(y);
    y = cin.get();
    cout << endl;

    cout << setw(4) << num_1 << setw(2) <<"+"<< setw(4) <<num_2<< setw(2) <<"=";
    cout << setw(4) << num_1 + num_2 << endl;
    cout << "\n-----------------------------------------\n";
    cout << endl;

    return 0;
}