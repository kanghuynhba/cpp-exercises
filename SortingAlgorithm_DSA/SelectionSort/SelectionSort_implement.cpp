#include"SelectionSort_lib.h"
int findIndexOfLargestItem(int Array[], int sizeOfArray) {
	//Initialize variable
	int indexLargest = 0;
	
	//Find the index of the largest item in an array and return it
	for (int currentIndex = 1; currentIndex < sizeOfArray; currentIndex++) {
		if (Array[indexLargest] < Array[currentIndex]) {
			indexLargest = currentIndex;
		}
	}
	return indexLargest;
}

void selection_sort(int Array[], int sizeofArray) {
	for (int indexLastItem = sizeofArray - 1; indexLastItem >= 1; indexLastItem--) {
		int indexofLargest = findIndexOfLargestItem(Array, indexLastItem + 1);
		swap(Array[indexofLargest], Array[indexLastItem]);
	}

}
int find_smallest_item(int a[],int size){
    int smallest = 0;
    for(int i = 0;i< size ; i++){
        if(a[i]<a[smallest]){
               smallest = i; 
        }
    }
    return smallest;
}
void selection_sort_2ndversion(int a[],int size){
    int index_first_item_Unsorted = 0;// equal to size of Sorted array
    while(index_first_item_Unsorted < size-1){
        
        int size_Unsorted = size - index_first_item_Unsorted;
        int indexOfSmallestItem = find_smallest_item(a + index_first_item_Unsorted,size_Unsorted);
        swap(a[index_first_item_Unsorted],a[indexOfSmallestItem]);
        index_first_item_Unsorted ++;  
    }

}