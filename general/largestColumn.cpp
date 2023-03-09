#include <iostream>

using namespace std;

int largestColumn(int arr[20][20], int n);

int main() {
   int arr[20][20];
   int n, k;

   cout << "n: ";
   cin >> n;
   
   cout << "Nhap mang 2 chieu: " << endl;
   for(int i=0; i<n; i++) {
      for(int j=0; j<n; j++) {
         cin >> arr[i][j];
      }
   }

   k= largestColumn(arr, n);

   cout << "The largest column is: " << k << endl;
}

int largestColumn(int arr[20][20], int n) {
   int k=0, s=0;
   int largest=0;

   for(int i=0; i<n; i++) {
      for(int j=0; j<n; j++) {
         s+= arr[j][i];
      }
      if(largest < s) {
         largest = s;
         k++;
      }
      s=0;
   }
   return k;
}
