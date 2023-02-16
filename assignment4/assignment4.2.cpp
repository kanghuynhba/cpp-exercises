#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    string name, age, city, college, profession, animal, animalName; 
    
     
    cout << endl;
    cout << " His or her name: ";
    getline(cin, name);

    cout << "His or her age: ";
    getline(cin, age);

    cout << "The name of a city: ";
    getline(cin, city);

    cout << "The name of a college: ";
    getline(cin, college);

    cout << "A profession: ";
    getline(cin, profession);

    cout << "A type of animal: ";
    getline(cin, animal);

    cout << "A pet’s name: ";
    getline(cin, animalName);

    cout << endl;


    cout << "There once was a person named ";
    cout << name;

    cout << " who lived in ";
    cout << city;

    cout << ". At the age of  " << age << ", ";
    cout << name;

    cout << " went to college at " << college << ". ";
    cout << name;

    cout << " graduated and went to work as a ";
    cout << profession;

    cout << ". Then, " << name << " adopted a(n)  ";
    cout << animal << " named " << animalName;

    cout << ". They both lived happily ever after!\n" << endl;
    return 0;
}