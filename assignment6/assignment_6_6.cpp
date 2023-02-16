#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include <ctime>
using namespace std;
int getNumAccidents(string);
void findLowest(int, int, int, int, int);

int main()
{	
    int North, South, East, West, Central;

	North   = getNumAccidents("North");
	South   = getNumAccidents("South");
	East    = getNumAccidents("East");
	West    = getNumAccidents("West");
	Central = getNumAccidents("Central");
	findLowest(North, South, East, West, Central);

	return 0;
}
int getNumAccidents(string Region)
{
	int Accidents;

	do
	{
		cout << "How many traffic accidents were reported inthe "
			 << Region << " region during last year? ";
		cin  >> Accidents;

		if (Accidents < 0)
		{
			cout << "Invalid report! "
				 << "Accident number must be greater than 0.";
		}

	} while (!(Accidents > 0));
    cout << endl;
	return Accidents;
}
void findLowest(int North, int South, int East, int West, int Central)
{
	int Lowest = North;

	cout << "The fewest reported traffic accidents last year were in the ";

	if (Lowest > South) Lowest = South;  
	if (Lowest > East) Lowest = East;
    if (Lowest > West)  Lowest = West;
	if (Lowest > Central) Lowest = Central;
	if (Lowest == North)
	{
		cout << " North" << endl;
	}
	if (Lowest == South)
	{
		cout << " South" << endl;
	}
	if (Lowest == East)
	{
		cout << " East" << endl;
	}
	if (Lowest == West)
	{
		cout << " West" << endl;
	}
	if (Lowest == Central)
	{
		cout << " Central" << endl;
	}
	
    cout << "region which had " << Lowest << " reported traffic accidents.";
 
}
