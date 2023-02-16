#include <iostream>
using namespace std;
int main(){
    float check, fee;
    cout << "The number of checks is "; cin >> check;
    if (check < 0) cout << "Do not accept a negative value for the number of checks written";
    else if (check < 20) fee = 10 + check*0.1;
    else if (check >= 20 && check < 40) fee = 10 + 19*0.1+ (check - 19)*0.08;
    else if (check >= 40 && check < 60) fee = 10 + 19*0.1 +  19*0.08 + (check - 48)*0.06;
    else if (check >60) fee = 10 + 19*0.1 +  19*0.08 + 19*0.06 + (check - 67)*0.04;
    cout << "The total fee is " << fee << endl;    
    return fee;
}