#include"InsertionSort_lib.h"
int main() {
	// initialze an array and its array
	int arr[] = { 29, 10, 14, 37, 13 };
	int size = 5;

	// sorting array into ascending order
	insertionSort(arr, size);

	// print array after sorting to the screen 
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}