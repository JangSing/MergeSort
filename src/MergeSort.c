#include "MergeSort.h"
#include <stdio.h>
#include <malloc.h>
#include <math.h>

int intCompare(int num1,int num2){
  if(num1>num2)
    return 1;
  else if(num1<0 || num2<0)
    return -1;
  else
    return 0;
}

int isFloat(float f){
  if (f-(int)f == 0){
    return 0; //not a floating number
  }
  else
    return 1; //it is a floating number
}

int *mergeSortedList(int arr1[],int arr2[],int arrSize1,int arrSize2){
  int *finalArr = (int *)malloc((arrSize1+arrSize2)*sizeof(int));

  int i=0,j=0,k=0;

  while(i!=arrSize1 || j!=arrSize2){
    if(intCompare(arr1[i],arr2[j])==1){
      *(finalArr+k)=arr2[j];
      j++;
      if(j==arrSize2 && i!=arrSize1){
        for(i=i;i<arrSize1;i++){
          k++;
          *(finalArr+k)=arr1[i];
        }
      }
    }
    else if(intCompare(arr1[i],arr2[j])==0){
      *(finalArr+k)=arr1[i];
      i++;
      if(i==arrSize1 && j!=arrSize2){
        for(j=j;j<arrSize2;j++){
          k++;
          *(finalArr+k)=arr2[j];
        }
      }
    }
    else{}
    k++;
  }

  return finalArr;
}



int *mergeSort(int arr1[],int len){
  int split=2;
  int i,j,k;
  int arrSize2=0,arrSize3=0;
  int *ptr;
  float f;

  f=log10(len)/log10(2);

  if(isFloat(f)==1){
    len=pow(2,((int)(f+1)));
  }

  int arr2[len],arr3[len],finalArr[len];


  while(split<=len){
    for(i=0;i<len;i=i+split){
      for(j=0;j<(split/2);j++){
        arr2[j]=arr1[i+j];
        arrSize2++;
        arr3[j]=arr1[i+(split/2)+j];
        arrSize3++;
      }
      ptr = mergeSortedList(arr2,arr3,arrSize2,arrSize3);
      arrSize2=0;arrSize3=0;
      for(k=0;k<split;k++)
        finalArr[i+k]=*(ptr+k);
    }
    arr1=finalArr;
    split=split*2;
  }
  ptr=finalArr;

  return ptr;
}
