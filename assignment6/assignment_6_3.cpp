#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <iomanip>
using namespace std;
void orderData(int& o, int& s, double& f);
void calcOrder(int o, int s, double f);
int main()
{
    int spools_order, spools_in_stock;
    double special_charges = 10.0;
    orderData(spools_order, spools_in_stock, special_charges);
    calcOrder(spools_order, spools_in_stock, special_charges);
    return 0;
};
void orderData(int& o, int& s, double& f) {
    char answer;
    cout << "The number of spools ordered: ";cin >> o;
    cout << "The number of spools in stock: "; cin >> s; 
    while (o < 1 || s < 0) {
        if ( o < 1) {
        cout << "Do not accept numbers less than 1 for spools ordered" << endl;
        cout << "Please enter a valid number for spools ordered: ";cin >> o;
        } else if ( s < 0) {
        cout << "Do not accept numbers less than 0 for spools in stock" << endl;
        cout << "Please enter a valid number for spools in stock: ";cin >> s;
        }
    }
        cout << "Are there any special charges? (Y/N): "; cin >> answer;
        if ( answer == 'Y' || answer == 'y') {
            cout << "The special charges for spools: "; cin >> f;
            while (f < 0) {
        cout << "Do not accept numbers less than 0 for the special charges per spool" << endl;
        cout << "Please enter a valid number for the special charges per spool: ";cin >> f;
            }
        }
} 
void calcOrder(int o, int s, double f) {
    double price, charge;
    if (o <= s) {
        cout << "The number of spools ready to ship from current stock: " << o << endl;
        price = o*100;
    } else {
        cout << "The number of spools on backorder: " << s << endl;
        price = s*100;
        o=s;
    };
    charge = o*f;
    cout << "Subtotal of the portion ready to ship: " << price << endl;
    cout << "Total shipping and handling charges on the portion ready to ship: " << charge << endl;
}
