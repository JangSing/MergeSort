#ifndef MergeSort_H
#define MergeSort_H

typedef struct{
  int *sortedArr[0];
  int Arrsize;
} MergedElement;


int intCompare(int num1,int num2);

int *mergeSortedList(int arr1[],int arr2[],int arrSize1,int arrSize2);

int *mergeSort(int arr1[],int len);

#endif // MergeSort_H
