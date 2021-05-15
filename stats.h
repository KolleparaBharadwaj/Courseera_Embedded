/******************************************************************************
 * Copyright (C) 2021 Kollepara Bharadwaj
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Kollepara Bharadwaj is not liable for any misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.h
 * @brief header file for stats
 *
 *This file contains the function function declerations
 * 
 * @author Kollepara Bharadwaj 
 * @date 15 May 20201
 *
 */
#ifndef __STATS_H__
#define __STATS_H__



/**
 * @brief print_statistics(unsigned char *array, unsigned int array_size) 
 *
 * This function prints the Maximum value, Minimum value, Mean, Median for the
 * provided data in form of a array
 *
 * @param *array 	pointer to array
 * @param  array_size 	Size of the array passed to the function
 * 
 * @return returns void
 */
void print_statistics(unsigned char *array, unsigned int array_size);





/**
 * @brief rint_array(unsigned char *array, int array_size)
 *
 * This function prints the data contained in the array as per the size parameter
 *
 * @array *array	Pointer to the array
 * @param  array_size	Size of the array
 * 
 * @return returns void
 */
void print_array(unsigned char *array, int array_size);






/**
 * @brief find_median(unsigned char *array, int array_size)
 *
 * This function finds the median for the given set of data by sorting 
 * them in descending order, then check the size of the array for odd or even. 
 * If odd, it simply retuns the data present in the middle of the array
 * If even, then it applies the formula and returns the median. 
 *
 * @param *array	Pointer to array
 * @param array_size	Size of the array
 * 
 * @return retuns median as float data type
 */
float find_median(unsigned char *array, int array_size);







/**
 * @brief find_maximum(unsigned char *array, int array_size)
 *
 * This function find the maximum value in the given data set 
 *
 * @param *array	Pointer to array
 * @param array_size	Size of the array
 * 
 * @return returns the maximum value
 */
unsigned char find_maximum(unsigned char *array, int array_size);






/**
 * @brief find_minimum(unsigned char *array, int array_size)
 *
 * This function find the maximum value in the given data set 
 *
 * @param *array	Pointer to array
 * @param array_size	Size of the array
 * 
 * @return returns the maximum value
 */
unsigned char find_minimun(unsigned char *array, int array_size);







/**
 * @brief find_mean(unsigned char *array, int array_size)
 *
 * This function finds the mean of the value
 *
 * @param *array	Pointer to array
 * @param array_size	size of the array
 * 
 * @return returns the mean value as double data type
 */
double find_mean(unsigned char *array, int array_size);







/**
 * @brief sort_array(insigned char *arary, int array_size)
 *
 *
 * @param array     -  arrady that needs to be sorted 
 * @param array_zie -  Size of the array 
 
 *
 * @return void
 */
void sort_array(unsigned char *array, int array_size);







/**
 * @brief Function to swap data
 *
 *
 * @param &a and &b are the data that needs to be swaped

 * @return void
 */
void swap (unsigned char *a, unsigned char *b);



#endif /* __STATS_H__ */
