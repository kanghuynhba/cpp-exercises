#include <iostream>

using namespace std;

int main() {
    int a[] = {1,3,5}, n;

    n=sizeof(a)/sizeof(a[0]);
    
    for(int i=0; i<n; i++) {
        cout << "a[" << i <<"]" << endl;
    }
}