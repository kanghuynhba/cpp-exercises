#include <iostream>
#include <vector>
using namespace std;
int binarySearch(const vector<int> &a, int left, int right, int x) {
    while(left<=right) {
        int mid=left+(right-left)/2;
        if(x==a[mid]) {
            return mid;
        } else if (x<a[mid]) {
            right=mid-1;
        } else if(x>a[mid]) {
            left=mid+1;
        }
    }
    return -1;
}
int binarySearchRecursion(const vector<int> &a, int left, int right, int x) {
    if(left<=right) {
        int mid=left+(right-left)/2;
        if(x==a[mid]) {
            return mid;
        } else if(x<a[mid]) {
            return binarySearchRecursion(a, left, mid-1, x);
        }
        return binarySearchRecursion(a, mid+1, right, x);
    }
    return -1;
}
int bsFirst(const vector<int> &a, int left, int right, int x) {
    if(left<=right) {
        int mid=left+(right-left)/2;
        if((mid==left||x>a[mid-1]) && x==a[mid]) {
            return mid;
        } else if(x>a[mid]) {
            return bsFirst(a, mid+1, right, x);
        } else {
            return bsFirst(a, left, mid-1, x);
        }
    }
    return -1;
}
int bsLast(const vector<int> &a, int left, int right, int x) {
    if(left<=right) {
        int mid=left+(right-left)/2;
        if((mid==right||x<a[mid+1]) && x==a[mid]) {
            return mid;
        } else if(x<a[mid]) {
            return bsLast(a, left, mid-1, x);
        } else {
            return bsLast(a, mid+1, right, x);
        }
    }
    return -1;
}
int lowerBound(const vector<int> &a, int left, int right, int x) {
    int pos=right;
    while(left<right) {
        int mid=left+(right-left)/2;
        if(a[mid]>=x) {
            pos=mid;
            right=mid;
        } else {
            left=mid+1;
        }
    }
    return pos;
}
int upperBound(const vector<int> &a, int left, int right, int x) {
    int pos=right;
    while(left<right) {
        int mid=left+(right-left)/2;
        if(a[mid]>x) {
            pos=mid;
            right=mid
        } else {
            left=mid+1;
        }
    }
    return pos;
}
int main() {
    vector<int> a;
    int n, x, value;
    cin >> n >> x;
    for(int i=0; i<n; i++) {
        cin >> value;
        a.push_back(value);
    }
    int result=binarySearch(a, 0, n-1, x);
    cout << result;
    return 0;
}