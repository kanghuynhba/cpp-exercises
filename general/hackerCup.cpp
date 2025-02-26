#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    unordered_map<string, vector<int>> k;
    k["ha"].push_back(1);
    k["ha"].push_back(2);
    k["ha"].push_back(3);
    k["ha"].push_back(4);
    cout << k["ha"][1];
}