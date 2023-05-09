/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c 
 * @brief This file contains all the function definitions 
 *
 * This file contains all the function definitions for the functions declared in the header
 * file "stats.h"
 *
 * @author Gokulakannan A
 * @date 09/05/2023
 *
 */

/**
 * @brief helper function for quick sort algorithm
 *
 * This function takes the array, start index and end index as input.It selects 1st number
 * as pivot and places that number at the correct position and returns that index. numbers 
 * less than this pivot value is placed at left side of the pivot index and numbers larger than this
 * pivot is placed at right size of the pivot index.
 *
 * @param array - unsigned char array
 * @param start - start index of the array in int
 * @param end - end index of the array in int
 *
 * @return pivot index of the number in int
 */
 static int pivot(unsigned char* array,int start,int end);


/**
 * @brief another helper function for quick sort algorithm
 *
 * This function takes array and two indexes of that array and swap the value at those indexes
 *
 * @param array - unsigned char array
 * @param i - index of the array in int
 * @param j - index of the array in int
 *
 * @return void
 */
 static void swap(unsigned char* array,int i,int j);


/**
 * @brief sorts the given array in ascending order
 *
 * This function uses quick sort algorithm to sort the array items in ascending order. After 
 * getting the pivot index from the helper function, the array is separated as left sub array
 * and right sub array and then recursively sorted.
 *
 * @param array - unsigned char array
 * @param start - start index of the array in int
 * @param end - end index of the array in int
 *
 * @return void
 */
 static void quickSort(unsigned char* array,int start,int end);

#include <stdio.h>
#include <string.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

int main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  print_statistics(test,SIZE);
  sort_array(test,SIZE);
  print_array(test,SIZE);
  
}

/* Add other Implementation File Code Here */
void print_statistics(const unsigned char* array,int size){
  printf("Minimum value of the given array: %d\n",find_minimum(array,size));  
  printf("Maximum value of the given array: %d\n",find_maximum(array,size));  
  printf("Mean value of the given array   : %.2lf\n",find_mean(array,size));
  printf("Median value of the given array : %d\n",find_median(array,size));
}

void print_array(const unsigned char* array,int size){
  printf("Array                           : [");
  for(int i=0;i<size;i++){
    printf("%d, ",array[i]);
  }
  printf("]\n");
}

unsigned char find_median(const unsigned char* array,int size){
  unsigned char sorted_array[size];
  memcpy(sorted_array,array,size);
  sort_array(sorted_array,size);
  int index = 0;
  if(size&1){
    index = (size + 1)/2;
    return sorted_array[index];
  }
  else{
    index = size/2;
    return (sorted_array[index] + sorted_array[index+1])/2;
  }
}

double find_mean(const unsigned char* array,int size){
  int sum = 0;
  for(int i=0;i<size;i++){
    sum+= array[i];
  }
  return (double)sum/size;
}

unsigned char find_maximum(const unsigned char* array,int size){
  unsigned char max = array[0];
  for(int i=1;i<size;i++){
    if(array[i] > max){
      max = array[i];
    }
  }
  return max;
}

unsigned char find_minimum(const unsigned char* array,int size){
  unsigned char min = array[0];
  for(int i=1;i<size;i++){
    if(array[i] < min){
      min = array[i];
    }
  }
  return min;
}

void sort_array(unsigned char* array,int size){
  unsigned char reversed_array[size];
  quickSort(array,0,size-1);
  int index = 0;
  for(int i = size-1;i>=0;i--){
    reversed_array[index++] = array[i];
  }
  memcpy(array,reversed_array,size);
}

static void swap(unsigned char* array,int i,int j){
  unsigned char temp = array[i];
  array[i] = array[j];
  array[j] = temp;
}
static int pivot(unsigned char* array,int start,int end){
  unsigned char currentValue = array[start];
  int pivotIndex = start;
  for(int i=start+1;i<= end;i++){
    if(array[i] < currentValue){
      pivotIndex++;
      swap(array,i,pivotIndex);
    }
  }
  swap(array,start,pivotIndex);
  return pivotIndex;
}

static void quickSort(unsigned char* array,int start,int end){
  if(start<end){
    int pivotIndex = pivot(array,start,end);
    quickSort(array,start,pivotIndex-1);
    quickSort(array,pivotIndex+1,end);
  }
}