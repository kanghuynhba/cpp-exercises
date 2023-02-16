#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <cstdlib>
#include <math.h>
#include <iomanip>
using namespace std;
void enterValues (int randomNumber[], int size);
int largestValue (int numbs[], int size);
int smallestValue (int numbs[], int size);
int main () {
    const int SIZE =10;
    int  randomNumbs[SIZE];
    int largest, smallest;
    enterValues(randomNumbs, SIZE);
    largest = largestValue(randomNumbs, SIZE);
    smallest = smallestValue(randomNumbs, SIZE);
    cout << "The largest value stored in the array: " << largest << endl;
    cout << "The smallest value stored in the array: " << smallest;
};

void enterValues (int randomNumber[], int size) {
        cout << "Enter " << size << " into an array" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Value " << i+1 << ": "; cin >> randomNumber[i];
    }
}
int largestValue (int numbs[], int size) {
    int largest = numbs[0];
    for (int i = 1; i < size; i++){
        if (numbs[i] > largest) {
            largest = numbs [i];
        }
    }
    return largest;
}
int smallestValue (int numbs[], int size) {
    int smallest = numbs[0];
    for (int i = 1; i < size; i++){
        if (numbs[i] < smallest) {
            smallest = numbs [i];
        }
    }
    return smallest;
}