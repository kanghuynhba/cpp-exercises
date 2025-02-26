#include"Bubble_Sort_lib.h"
void bubbleSort(int Array[],int sizeArray){
	// sorted is a flag to check when swaps occur
	bool sorted = false; // sorted is false when the swaps occur
	int pass = 1; // the current number of pass


	// this function will be end when none of swaps statement occurs during one pass or pass is equal to size array 
	// because the largest continues bubbled after end of a pass
	// pass is size array, that means n-1 items are bubbled to its proper-place 
	while (!sorted && pass < sizeArray)   
	{
		sorted = true; // assume sorted

		// begin a pass
		for (int index = 0; index < sizeArray - pass; index++)   
		{
			int nextIndex = index + 1;
			if (Array[nextIndex] < Array[index]) //exchange them if the second item is biggers than the first one   
			{
				swap(Array[index], Array[nextIndex]);
				sorted = false;
			}
		}
		// after a pass end the largest item bubbled to its proper place

		pass++; // move to the next pass
	}
}
void bubbleSort_Descending(int Array[],int sizeArray){
    int number_element_sorted_array = 1;
	while(number_element_sorted_array < sizeArray){
		for(int index = 0; index < sizeArray - number_element_sorted_array;index++)
		{
			int nextIndex=index+1;
			if(Array[nextIndex]>Array[index]){
				swap(Array[index],Array[nextIndex]);
			}
		}
		number_element_sorted_array++;
	}
}