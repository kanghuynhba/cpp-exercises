#include"InsertionSort_lib.h"
void insertionSort(int Array[], int sizeofArray) {
	for (int index_1stItem_Unsorted = 1; index_1stItem_Unsorted < sizeofArray; index_1stItem_Unsorted++) {
		
		int copy_1stItem_Unsorted = Array[index_1stItem_Unsorted];
		int index_at_the_left_of_the_correct_position = index_1stItem_Unsorted - 1;
		
		
		while ((copy_1stItem_Unsorted < Array[index_at_the_left_of_the_correct_position]) && index_at_the_left_of_the_correct_position >= 0) {
			Array[index_at_the_left_of_the_correct_position + 1] = Array[index_at_the_left_of_the_correct_position];
			index_at_the_left_of_the_correct_position--;
		}
		Array[index_at_the_left_of_the_correct_position + 1] = copy_1stItem_Unsorted;

	}
}