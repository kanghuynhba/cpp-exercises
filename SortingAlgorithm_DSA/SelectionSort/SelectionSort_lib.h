#ifndef Selection_Sort_H_
#define Selection_Sort_H_
// An implementation of the selection sort 
// sorting an array into ascending order
#include<iostream>
using namespace std;

int findIndexOfLargestItem(int Array[], int sizeOfArray);
void selection_sort(int Array[], int sizeofArray);
int find_smallest_item(int a[],int size);
void selection_sort_2ndversion(int a[],int size);
#endif