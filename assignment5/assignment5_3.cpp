#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include <ctime>
using namespace std;
int main()
{
    int random_number, max, min, guess_number;
    cout << "Enter the range of the random numbers" << endl;
    cout << "Min: "; cin >> min;
    cout << "Max: "; cin >> max; 
    cout << "The user's guess number: "; cin >> guess_number;
    srand(time(NULL));
    random_number = rand() % (max - min + 1) + min;

     for (
        int i=0 ;
        max > min && guess_number <= max && guess_number >= min;   
    )
    {
        if ( random_number < guess_number) {
            cout << "Too high, try again: "; cin >> guess_number;
            i++;
        }; 
        if (random_number > guess_number) {
            cout << "Too low, try again: "; cin >> guess_number;
            i++;
        };
        if (random_number == guess_number) {
            cout << "You correctly guess the random number." << endl;
            cout << "The number of guesses " << i;
            break;
        };
    };
    if ( max == min || max < min ) {
        cout << "Error range";
    } else if (guess_number >= max || guess_number <= min) { 
        cout << "Your guess number is out of range";
    };
    return 0;
}