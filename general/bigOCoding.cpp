#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int numb, sum;
    
    cin >> numb;

    sum=0;
    while(numb != 0) {
        sum+=numb%10;
        numb/=10;
    }
    sum%= 10;

    cout << sum;
    
    return 0;
}