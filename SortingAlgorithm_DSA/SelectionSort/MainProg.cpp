#include"SelectionSort_lib.h"

int main() {
	// initialze an array and its array
	int arr[] = {15,2,8,7,3,6,9,17};
	int size = 8;
	
	// sorting array into ascending order
	selection_sort_2ndversion(arr, size);
	
	// print array after sorting to the screen 
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}