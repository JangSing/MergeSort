#include "MergeSort.h"
#include <stdio.h>
#include <malloc.h>


int intCompare(int num1,int num2){
  if(num1>num2)
    return 1;
  else if(num1<0 || num2<0)
    return -1;
  else
    return 0;
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
    else {}
    k++;
  }

  // for(i=0;i<arrSize1+arrSize2;i++){
    // printf("%d\n",*(finalArr+i));
  // }

  return finalArr;
}

// int *mergeSort(int arr1[],int len){
  // int i,j=0;
  // int *ptr;
  // int finalArr[len];
  
  // int arr2[len];
  // int arr3[len];
  // int split=2;
  
  // for(i=0;i<len;i=i+split){
    // for(j=0;j<=i;j++){
      // arr2[j]=arr1[i+j];
      // arr3[j]=arr1[i+j+(split/2)];
    // }
    
      // ptr = mergeSortedList(arr2,arr3,1,1);
      // finalArr[i]=*ptr;
      // finalArr[i+1]=*(ptr+1);
  // }
  
    // printf("%d\n",finalArr[0]);
    // printf("%d\n",finalArr[1]);
    // printf("%d\n",finalArr[2]);
    // printf("%d\n",finalArr[3]);
    // printf("%d\n",finalArr[4]);
    // printf("%d\n",finalArr[5]);
    // printf("%d\n",finalArr[6]);
    // printf("%d\n",finalArr[7]);
    // printf("%d\n",finalArr[8]);
    // printf("%d\n",finalArr[9]);
// }

int mergeSort(int arr1[],int len){
  int i,j=0,k;
  int arrSize2=0,arrSize3=0;
  int *ptr;
  int finalArr[len];
  int split=2;
  
  int arr2[len];
  int arr3[len];
  
  // for(i=0;i<len;i=i+split){
      // arr2[j]=arr1[i];
      // arrSize2++;
      // arr3[j]=arr1[i+1];
      // arrSize3++;
      
      // ptr = mergeSortedList(arr2,arr3,arrSize2,arrSize3);
      // arrSize2=0;arrSize3=0;
      
      // finalArr[i]=*ptr;
      // finalArr[i+1]=*(ptr+1);      
  // }
    
  for(i=0;i<len;i=i+split){
      arr2[j]=arr1[i];
      arrSize2++;
      arr3[j]=arr1[i+1];
      arrSize3++;
      
      ptr = mergeSortedList(arr2,arr3,arrSize2,arrSize3);
      arrSize2=0;arrSize3=0;
      
      finalArr[i]=*ptr;
      finalArr[i+1]=*(ptr+1);      
  }
  
    printf("%d\n",finalArr[0]);
    printf("%d\n",finalArr[1]);
    printf("%d\n",finalArr[2]);
    printf("%d\n",finalArr[3]);
    printf("%d\n",finalArr[4]);
    printf("%d\n",finalArr[5]);
    printf("%d\n",finalArr[6]);
    printf("%d\n",finalArr[7]);
    printf("%d\n",finalArr[8]);
    printf("%d\n",finalArr[9]);
  
  
  
  
}







