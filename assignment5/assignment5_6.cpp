#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int integer;
    cout << "Enter a positive integer <=15 to display the square: "; cin >> integer;
    if (integer > 15 && integer > 0) {  
    cout << "The integer must be no greater than 15 and positive";
    };
    for (int i = 0; i < integer;i++){
    for (int a=0; a < integer;a++)  { 
        cout << "X";
    };
    cout << "X" << endl;
    };
    return 0;
}