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
 * @file C1M1 
 * @brief Program to see the analytics of given data 
 *
 * Program to analyaze an array of unsigned char data items and return 
 * analytics on maximum, minimum, mean and median of the data. Also 
 * reorder this data set from large to small.
 *
 * @author Sai Shubham Biswal
 * @date 29/06/2025
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief Finds the maximum number in given array
 *
 * This function takes two inputs as 'Array', and the 'Size of the array'. After the
 * operations inside the function, it returns the maximum value of the array, given
 * as output.
 *
 * @param test This is the formal parameter name, which takes array as input
 * @param len Size of the given array as input
 *
 * @return The maximum value of the array
 */
int find_maximum(unsigned char test[],int len);

/**
 * @brief Finds the minimum number in given array
 *
 * This function takes two inputs as 'Array', and the 'Size of the array'. After the
 * operations inside the function, it returns the minimum value of the array, given
 * as output.
 *
 * @param test This is the formal parameter name, which takes array as input
 * @param len Size of the given array as input
 *
 * @return The minimum value of the array
 */
int find_minimum(unsigned char test[],int len);

/**
 * @brief Finds the mean of all number in given array
 *
 * This function takes two inputs as 'Array', and the 'Size of the array'. After the
 * operations inside the function, it returns the mean value of numbers in the 
 * array, given as output.
 *
 * @param test This is the formal parameter name, which takes array as input
 * @param len Size of the given array as input 
 *
 * @return The mean value of the array
 */
int find_mean(unsigned char test[],int len);

/**
 * @brief Sorts all number in given array in descending order
 *
 * This function takes two inputs as 'Array', and the 'Size of the array'. After the
 * operations inside the function, it sorts all numbers in the array in 
 * descending order.
 *
 * @param test This is the formal parameter name, which takes array as input
 * @param len Size of the given array as input
 *
 * @return --
 */
int sort_array(unsigned char test[],int len);

/**
 * @brief Finds the median of all number data in given array
 *
 * This function takes two inputs as 'Array', and the 'Size of the array'. After the
 * operations inside the function, it returns the median value of numbers in the 
 * array, given as output.
 *
 * @param test This is the formal parameter name, which takes array as input
 * @param len Size of the given array as input
 *
 * @return The median value of the array
 */
int find_median(unsigned char test[],int len);

/**
 * @brief Prints all the statistical values of given array
 *
 * This function prints all the statistical values from the numbers inside the array. 
 * Like Median, Mean, Maximum, Minimum.
 *
 *
 * @return --
 */
int print_statistics();

/**
 * @brief Prints all number data in given array
 *
 * This function takes two inputs as 'Array', and the 'Size of the array'. After the
 * operations inside the function, it prints all of numbers in the 
 * array.
 *
 * @param test This is the formal parameter name, which takes array as input
 * @param len Size of the given array as input
 *
 * @return --
 */
int print_array(unsigned char test[],int len);

#endif /* __STATS_H__ */
