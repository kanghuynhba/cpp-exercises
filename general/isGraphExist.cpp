// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;

// Function that returns true if
// a simple graph exists
bool graphExists(vector<int> &a, int n)
{
    // Keep performing the operations until one
    // of the stopping condition is met
    while (1)
    {
        // Sort the list in non-decreasing order
        sort(a.begin(), a.end(), greater<>());

        // Check if all the elements are equal to 0
        if (a[0] == 0)
            return true;

        // Store the first element in a variable
        // and delete it from the list
        int v = a[0];
        a.erase(a.begin() + 0);

        // Check if enough elements
        // are present in the list
        if (v > a.size())
            return false;

        // Subtract first element from next v elements
        for (int i = 0; i < v; i++)
        {
            a[i]--;

            // Check if negative element is
            // encountered after subtraction
            if (a[i] < 0)
                return false;
        }
    }
}

// Driver Code
int main()
{
    int n;
    cin >> n;
    vector<int> a;
    int val;
    for(int i=0; i<n; i++) {
        cin >> val;
        a.push_back(val);
    }

    graphExists(a, n) ? cout << "Yes" : 
                        cout << "NO" << endl;

    return 0;
}

// This code is contributed by
// sanjeev2552
