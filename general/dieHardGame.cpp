#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
    if(a>b) {
        swap(a, b);
    }
    while(a!=0) {
        int r=b%a;
        b=a;
        a=r;
    }
    return b;
}

void linearCombination(int& a, int& b, int& s, int& t, int& L) {
    if(a>b) {
        swap(a, b);
    }
    int x=0, y=0;
    while(x!=L && y!=L) {
        x+=a;
        y+=x;
        x=0;
        if(y>b) {
            x=y-b;
            y=0;
            t--;
        }
        s++;
        cout << " -> ("<< x << ", " << y << ")"; 
    }
}

int main() {
    int a, b, L;
    while(true) {
        cout << "Input a, b, L: ";
        cin >> a >> b >> L;
        if(L%gcd(a,b)==0) {
            break;
        } else {
            cout << "Invalid L (L is divisible by gcd(a,b))!" << endl;
        }
    }
    int s=0, t=0;
    linearCombination(a, b, s, t, L);
    cout << endl;
    cout << s << " " << t << endl;
    return 0;
}
