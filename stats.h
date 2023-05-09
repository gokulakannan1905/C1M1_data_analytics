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
 void print_statistics(const unsigned char* array,int size);


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
 void print_array(const unsigned char* array,int size);


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
 unsigned char find_median(const unsigned char* array,int size);


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
 double find_mean(const unsigned char* array,int size);


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
 unsigned char find_maximum(const unsigned char* array,int size);


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
 unsigned char find_minimum(const unsigned char* array,int size);


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

#endif /* __STATS_H__ */
