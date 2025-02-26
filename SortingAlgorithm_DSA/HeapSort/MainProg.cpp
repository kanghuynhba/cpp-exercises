#include"HeapSort_lib.h"
int main(){
// initialze an array and its array
	int arr[] = { 2,3,5,2,1,5,7,6,4,8,2,3,5 };
	int size = 13;

	// sorting array into ascending order
	heapSort(arr,13);

	// print array after sorting to the screen 
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}