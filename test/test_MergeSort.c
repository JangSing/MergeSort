#include "unity.h"
#include "MergeSort.h"
#include <malloc.h>
#include <stdio.h>

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

void test_merge_sort_function_given_integer_array_with_length_2_power_of_number_should_return_sorted_array()
{
  int arr1[]={2,4,50,1,6,20,100,11};
  int *ptr;
  int i;
  
  ptr=mergeSort(arr1,sizeof(arr1)/sizeof(int));

  TEST_ASSERT_EQUAL(1,*ptr);
  TEST_ASSERT_EQUAL(2,*(ptr+1));
  TEST_ASSERT_EQUAL(4,*(ptr+2));
  TEST_ASSERT_EQUAL(6,*(ptr+3));
  TEST_ASSERT_EQUAL(11,*(ptr+4));
  TEST_ASSERT_EQUAL(20,*(ptr+5));
  TEST_ASSERT_EQUAL(50,*(ptr+6));
  TEST_ASSERT_EQUAL(100,*(ptr+7));
  
  free(ptr);
}

void test_merge_sort_function_given_integer_array_with_length_not_2_power_of_number_should_return_sorted_array()
{
  int arr1[]={2,4,50,1,6,20,100,11,12,13,0};
  int *ptr;
  int i;
  
  ptr=mergeSort(arr1,sizeof(arr1)/sizeof(int));
  
  TEST_ASSERT_EQUAL(0,*ptr);
  TEST_ASSERT_EQUAL(1,*(ptr+1));
  TEST_ASSERT_EQUAL(2,*(ptr+2));
  TEST_ASSERT_EQUAL(4,*(ptr+3));
  TEST_ASSERT_EQUAL(6,*(ptr+4));
  TEST_ASSERT_EQUAL(11,*(ptr+5));
  TEST_ASSERT_EQUAL(12,*(ptr+6));
  TEST_ASSERT_EQUAL(13,*(ptr+7));  
  TEST_ASSERT_EQUAL(20,*(ptr+8));  
  TEST_ASSERT_EQUAL(50,*(ptr+9));  
  TEST_ASSERT_EQUAL(100,*(ptr+10));  
  
  free(ptr);
}

void test_function_is_float()
{
  float len1=100,len2=100.1212;
  
  TEST_ASSERT_EQUAL(0,isFloat( len1 ));
  TEST_ASSERT_EQUAL(1,isFloat( len2 ));
  
}













