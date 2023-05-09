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
 * @file stats.h 
 * @brief Contains Declarations and Documentation of the various functions in the project
 *
 * This file contains function prototypes and brief documentation for each functions along
 * with their input parameters and output parameter.
 *
 * @author Gokulakannan A
 * @date 09/05/2023
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief prints all the statistics of the given array
 *
 * This function works by calling other function declared in this file by simply passing the 
 * given input array and size of the array as arguments to calling functions and prints the
 * result to the console.
 *
 * @param array - unsigned char array
 * @param size - size of the array in int
 *
 * @return void
 */
 void print_statistics(unsigned char* array,int size);


/**
 * @brief prints the given array to the console
 *
 * using printf function this function displays the contents of the array to the stdout console
 *
 * @param array - unsigned char array
 * @param size - size of the array in int
 *
 * @return void
 */
 void print_array(unsigned char* array,int size);


/**
 * @brief finds the median value from the array
 *
 * This function takes an array and size as input and returns the median value by sorting and
 * finding the middle value from the array
 *
 * @param array - unsigned char array
 * @param size - size of the array in int
 *
 * @return median value of the given array items
 */
 unsigned char find_median(unsigned char* array,int size);


/**
 * @brief finds the mean value from the array
 *
 * This function takes an array and size as input. It adds all the array items and divides 
 * them with the number of items to find the mean value.
 *
 * @param array - unsigned char array
 * @param size - size of the array
 *
 * @return mean value of the given array items
 */
 double find_mean(unsigned char* array,int size);


/**
 * @brief finds the maximum value from the array
 *
 * This function takes an array and length of the array as input and iterates through the
 * array to find the maximum value.
 *
 * @param array - unsigned char array
 * @param size - size of the array in int
 *
 * @return maximum value from the given array as unsigned char
 */
 unsigned char find_maximum(unsigned char* array,int size);


/**
 * @brief finds the minimum value from the array
 *
 * This function takes an array and length of the array as input and iterates through the
 * array to find the minimum value.
 *
 * @param array - unsigned char array
 * @param size - size of the array in int
 *
 * @return minimum value from the given array as unsigned char
 */
 unsigned char find_minimum(unsigned char* array,int size);


/**
 * @brief sorts the given array in descending order
 *
 * This function uses quick sort function to sort the array items ascending order and
 * then reverses it to descending order
 *
 * @param array - unsigned char array
 * @param size - size of the array
 *
 * @return void
 */
 void sort_array(unsigned char* array,int size);


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

#endif /* __STATS_H__ */
