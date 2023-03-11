#include <iostream>
#include <vector>

using namespace std;
void arrayInput(vector<auto> &a);
void arrayOutput(vector<auto> &a);
int main() {
    vector<double> b;
    arrayInput(b);
    arrayOutput(b);
    return 0;
}

void arrayInput(vector<auto> &a) {
    int n=0;

    while(1) {
        cout << "n element(s), Please input n = ";
        cin >> n;

        if(n<0) {
            cout << "Error, try again...";
        } else {
            break;
        }
    }
    a.resize(n);
    for(int i=0; i<n; i++) {
        cout << "a["<<i<<"] = "; cin >> a[i];
    }
}
void arrayOutput(vector<auto> &a) {
    for(int i=0; i<a.size(); i++) {
        cout << a[i] << " ";
    }
}
