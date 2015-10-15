#include "unity.h"
#include "MergeSort.h"
#include <malloc.h>

void setUp()
{
}

void tearDown()
{
}

void test_int_compare_function()
{
	int num1=10,num2=20,num3=-30;

  TEST_ASSERT_EQUAL(1,intCompare(num2,num1));
  TEST_ASSERT_EQUAL(0,intCompare(num1,num2));
  TEST_ASSERT_EQUAL(-1,intCompare(num3,num2));
}

void test_Merge_Sorted_List_function_with_only_single_Element_in_Array()
{
	int arr1[]={2};
  int arr2[]={0};
  int *ptr;

  ptr= mergeSortedList(arr1,arr2,sizeof(arr1)/sizeof(int),sizeof(arr2)/sizeof(int));

  TEST_ASSERT_EQUAL(0,*ptr);
  TEST_ASSERT_EQUAL(2,*(ptr+1));

  free(ptr);
}

void test_Merge_Sorted_List_function_with_First_Array_has_more_element()
{
  int arr1[]={2,4,5,20,100};
  int arr2[]={0,1,6};
  int *ptr;

  ptr= mergeSortedList(arr1,arr2,sizeof(arr1)/sizeof(int),sizeof(arr2)/sizeof(int));

  TEST_ASSERT_EQUAL(0,*ptr);
  TEST_ASSERT_EQUAL(1,*(ptr+1));
  TEST_ASSERT_EQUAL(2,*(ptr+2));
  TEST_ASSERT_EQUAL(4,*(ptr+3));
  TEST_ASSERT_EQUAL(5,*(ptr+4));
  TEST_ASSERT_EQUAL(6,*(ptr+5));
  TEST_ASSERT_EQUAL(20,*(ptr+6));
  TEST_ASSERT_EQUAL(100,*(ptr+7));

  free(ptr);
}

void test_Merge_Sorted_List_function_with_Second_Array_has_more_element()
{
  int arr1[]={2,4,5};
  int arr2[]={0,1,6,20,100};
  int *ptr;

  ptr= mergeSortedList(arr1,arr2,sizeof(arr1)/sizeof(int),sizeof(arr2)/sizeof(int));

  TEST_ASSERT_EQUAL(0,*ptr);
  TEST_ASSERT_EQUAL(1,*(ptr+1));
  TEST_ASSERT_EQUAL(2,*(ptr+2));
  TEST_ASSERT_EQUAL(4,*(ptr+3));
  TEST_ASSERT_EQUAL(5,*(ptr+4));
  TEST_ASSERT_EQUAL(6,*(ptr+5));
  TEST_ASSERT_EQUAL(20,*(ptr+6));
  TEST_ASSERT_EQUAL(100,*(ptr+7));

  free(ptr);
}

void test_merge_sort_function()
{
	// int arr1[]={9,0,2,4,7,6,0,0};
	// int arr1[]={0,9,2,4,6,7,0,0};
	// int arr1[]={0,2,4,9,6,7,0,0};
	// int arr1[]={0,2,4,9,0,0,6,7};
  int arr1[]={2,4,50,1,6,20,100,11};
  int *ptr;
  int i;
  
  ptr=mergeSort(arr1,sizeof(arr1)/sizeof(int));
  
  for(i=0;i<8;i++)
    printf("%d\n",*(ptr+i));
}













