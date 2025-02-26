#include <iostream>

using namespace std;

typedef long long ll;

ll convert(ll n, ll b) {
    if(n/b==0) {
        return n%b;
    }
    return convert(n/b, b)*10+n%b;
}

int main() {
    ll n, b;
    cin >> n >> b;
    cout << convert(n, b);
    return 0;
}