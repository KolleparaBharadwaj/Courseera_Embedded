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
 * @brief This file contains logic/algorithm to calculate the MAXIMUM, MINIMUM,
 * MEDIAN and MENA for the provided set of data in from of an array.
 *
 * This file also ocontains fuction's for swaping the data as well as function
 * for sorting the data in Decending order
 *
 * @author Kollepara Bharadwaj
 * @date 13 May 2021
 *
 */



#include <stdio.h>
#include <math.h>
#include "stats.h"


/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

 
  /* Statistics and Printing Functions Go Here */
  
  printf("\r\nData berofe sorting the arrary\r\n");
 
  print_array(test, SIZE);
 
  sort_array(test, SIZE);
 
  printf("\r\n\nData after sorting the arrary\r\n");
 
  print_array(test, SIZE);
 
  print_statistics(test, SIZE);

}

// /* Add other Implementation File Code Here */

void print_statistics(unsigned char *array, unsigned int array_size)
{
  double mean;
  unsigned char maximum;
  unsigned char minimum; 
  double median;

  maximum = find_maximum(array, array_size);
  minimum = find_minimun(array, array_size);
  mean = find_mean(array, array_size);
  median =  find_median(array, array_size);
  
  printf("\r\n\r\n      STATISTICS");
  printf("\r\n___________________________\r\n");
  printf("\r\n Minimum value = %d  ", minimum);
  printf("\r\n Maximum value = %d  ", maximum);
  printf("\r\n Mean          = %lf  ", round(mean));
  printf("\r\n Median        = %lf  ",round(median));
  printf("\n___________________________\r\n");


}

void print_array(unsigned char *array, int array_size)
{
  int i;

  for (i = 0 ; i<array_size; i++)
  {
    printf("%d ", array[i]);
  }
}

float find_median(unsigned char *array, int array_size)
{
  int even_or_odd =0;
  int temp_value_1;
  float median;


  even_or_odd = array_size%2;

  if(even_or_odd != 0)
  {
    temp_value_1= ((array_size+1)/2)-1;
    median = array[temp_value_1];
  }
  else if (even_or_odd == 0)
  {
    temp_value_1 = ((array_size+1)/2)-1;
    median = array[temp_value_1]+array[temp_value_1+1];
    median = median/2;
    
  }
   
  return median;
}

double find_mean(unsigned char *array, int array_size)
{
  double sum = 0;
  double mean = 0;

  for(int i = 0 ; i<array_size ; i++)
  {
    sum = array[i] + sum;
  }
  mean = sum/array_size;

  return mean;
}

unsigned char find_maximum(unsigned char *array, int array_size)
{
  unsigned char max ;

  for(int i = 0 ; i < array_size ; i++)
  {
    if(array[i] > max)
    {
      max = array[i];
    }
  }
  return max;
}

unsigned char find_minimun(unsigned char *array, int array_size)
{
  unsigned char min;

  for (int i = 0 ; i < array_size ; i++)
  {
    if(array[i] < min)
    {
      min = array[i];
    }
  }
  return min;
}

void sort_array(unsigned char *array, int array_size)
{
  for(int i = 0 ; i<array_size ; i++)
  {
    for(int j = 0 ; j < (array_size-1) ; j++)
    {
      if(array[j]<array[j+1])
      {

        swap(&array[j], &array[j+1]);

      }
    }

  }
}


void swap (unsigned char *a, unsigned char *b)
{
  unsigned char temp;
  temp = *a;
  *a = *b;
  *b = temp;
}