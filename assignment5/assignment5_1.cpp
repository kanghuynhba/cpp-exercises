#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int distance, time, speed;

    cout << "What is the speed of the vihecle in mph? ";cin >> speed;
    cout << "How many hours has it travelled? ";cin >> time;
    cout << "Hour Distance Travelled\n" << endl;

    cout << "--------------------------------------\n" << endl;
    
    
    for (int i = 1; i <= time ; ++i) {
        cout << i << setw(16) <<speed*i<< endl;
    }

    return 0;
}