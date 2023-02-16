#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int integer;
    cout << "Enter a positive integer <=15 to display the square: "; cin >> integer;
   
    for (int i = integer - 1; i >= 0; i--) { 

    for (int a=0; a < i ;a++)  { 
        cout << "X";
    };
  
    cout << "X"<< endl;
    };
    
    return 0;
}