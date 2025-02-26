// An implementation of the merge sort 
// sorting an array into ascending order
#include<iostream>
using namespace std;
void merge_2sorted_halvesArray(int Array[], int first, int mid, int last) {
		// declare a temporary array with 100 items and its index
		// initialize the local indices to indicate the subarrays
		int index_of_temporary_array = first;// next available location of temporary array
		int temporary_array[100];// temporary array 
		int first_halve1 = first;
		int last_halve1 = mid;
		int first_halve2 = mid + 1;
		int last_halve2 = last;
		
		// the condition of while loop guaranteed two subarrays is not empty
		while ((first_halve1 <= last_halve1) && (first_halve2 <= last_halve2)) {
			// compare the value at the first location in each subarray, 
			// which one is smaller is located to temporary array at index location
			// move the first of this subarray to next location 
			if (Array[first_halve1] > Array[first_halve2]) {
				temporary_array[index_of_temporary_array++] = Array[first_halve2++];

			}
			else {
				temporary_array[index_of_temporary_array++] = Array[first_halve1++];
			}
		}
		
		// when one of two subarrays is not empty,
		// assigning all value in the rest location of the remaining array to temporary array 
		while (first_halve1 <= last_halve1) {
			temporary_array[index_of_temporary_array++] = Array[first_halve1++];
		}
		while (first_halve2 <= last_halve2) {
			temporary_array[index_of_temporary_array++] = Array[first_halve2++];
		}
		
		
		// assigning all value of temporary array to original array 
		for (index_of_temporary_array = first; index_of_temporary_array <= last; index_of_temporary_array++) {
			Array[index_of_temporary_array] = temporary_array[index_of_temporary_array];
		}

	
}
void mergeSort(int Array[], int first, int last) {
	if (first < last) {
		int mid = (first + last) / 2;
		mergeSort(Array, first, mid);
		mergeSort(Array, mid + 1, last);
		merge_2sorted_halvesArray(Array, first, mid, last);
	}
	

}

int main() {
	// initialze an array and its array
	int arr[] = { 29, 10, 14, 37, 13 };
	int size = 5;

	// sorting array into ascending order
	mergeSort(arr, 0, size-1);

	// print array after sorting to the screen 
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}