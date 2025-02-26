#include <iostream>

using namespace std;

int main() {
    int n, a, b, peopleOnTram, max;

    max=0;
    peopleOnTram = 0;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> a;
        cin >> b;
        peopleOnTram += b-a;
        if(peopleOnTram>max) {
            max=peopleOnTram;
        }
    }
    cout << max;
    
    return 0;
}