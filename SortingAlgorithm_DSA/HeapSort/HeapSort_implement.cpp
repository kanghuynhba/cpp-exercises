#include"HeapSort_lib.h"
void heapRebuild(int pos,int a[],int size){
    int index_can_swap = 2*pos+1;
    while(index_can_swap < size){
        if(index_can_swap + 1 <size ){
            if(a[index_can_swap + 1]>a[index_can_swap]){
                index_can_swap = index_can_swap+ 1;
            }
        }
        if(a[pos]>a[index_can_swap]){
            break;
        }
        else {
            swap(a[index_can_swap],a[pos]);
            pos = index_can_swap;
            index_can_swap= 2*pos + 1;
        }
    }
}
void construct_MaxHeap(int arr[],int sizeArray){
    int middle = (sizeArray-1)/2;
    int index = middle;
    while(index > 0){
        heapRebuild(index,arr,sizeArray);
        index --;
    }
}
void heapSort(int arr[],int size){
     int sizeOfMaxHeap=size;
    construct_MaxHeap(arr,size);
    while(sizeOfMaxHeap>0){
        swap(arr[0],arr[sizeOfMaxHeap-1]);
        sizeOfMaxHeap--;
        heapRebuild(0,arr,sizeOfMaxHeap);
    }
}