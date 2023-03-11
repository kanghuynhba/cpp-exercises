#include <iostream>
#include <vector>
using namespace std;
void arrDoubleInput(vector<double> &a);
void arrDoubleOutput(const vector<double> &a);
int main() {
    vector<double> a;
    cout << "Input a[], press Ctrl X then Enter to stop:" << endl;
    arrDoubleInput(a);
    cout << "Element(s) in the array: ";
    arrDoubleOutput(a); cout << endl;  
    return 0;
}

void arrDoubleInput(vector<double> &a) {
    double x;
    while (cin >> x) { // Lưu ý: Ấn Ctrl X khi muốn dừng nhập số.
        a.push_back(x);
    }
}
void arrDoubleOutput(const vector<double> &a) {
    for(int i=0; i<a.size(); i++) {
        cout << a[i] << " ";
    }
}
