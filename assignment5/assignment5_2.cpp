#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;
int main()
{
    ofstream outfile;
    outfile.open("People.txt");
    if (outfile) {
        outfile << "PRAIRIEVILLE POPULATION GROWTH" << endl;
        outfile << "(each * represents 1,000 people)" << endl;
        outfile << "1900" << setw(8) << "**" << endl;
        outfile << "1920" << setw(8) << "****" << endl;
        outfile << "1940" << setw(8) << "*****" << endl;
        outfile << "1960" << setw(8) << "*******" << endl;
        outfile.close();
    } else {
        cout << "File not found" << endl;
    }

    return 0;
}