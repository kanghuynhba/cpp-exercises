// An implementation of the quick sort 
// sorting an array into ascending order
#include<iostream>
using namespace std;
int partition(int Array[],int first, int next_tolast) {
	int i = first;
	int j = next_tolast;
	int pivot = Array[first];
	while (i < j) {
		do {
			i++;
		} while (Array[i] < pivot);
		do {
			j--;
		} while (Array[j] > pivot);
		if (i < j) {
			swap(Array[i], Array[j]);
		}
	}
	swap(Array[first], Array[j]);
	return j;
}
void quickSort(int Array[], int first, int  size) {
	int next_tolast = size;
	if (first < next_tolast) {
		int index_pivot = partition(Array, first, next_tolast+1);
		quickSort(Array, first, index_pivot);
		quickSort(Array, index_pivot + 1, next_tolast);
	}
	
}

int main() {
	// initialze an array and its array
	int arr[] = { 29, 10, 14, 37, 13 };
	int size = 5;

	// sorting array into ascending order
	quickSort(arr, 0, size - 1);

	// print array after sorting to the screen 
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}