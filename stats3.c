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
 * @brief analyze an array of unsigned char data items
 *
 * couple of functions that can analyze an array of unsigned char data items and report analytics on the maximum, minimum, mean, and median of the data set.
 *
 * @author Raz Dechantal
 * @date 02/09/2023
 *
 */

#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

int main()
{

  unsigned char test[SIZE] = {34, 201, 190, 154, 8, 194, 2, 6,
                              114, 88, 45, 76, 123, 87, 25, 23,
                              200, 122, 150, 90, 92, 87, 177, 244,
                              201, 6, 12, 60, 8, 2, 5, 67,
                              7, 87, 250, 230, 99, 3, 100, 90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

  print_statistics(test);

  return 0;
}

/* Add other Implementation File Code Here */
void find_minimum(unsigned char *t)
{
  int j = 10000000;
  for (unsigned int i = 0; i < SIZE; i++)
  {
    if (j > t[i])
    {
      j = t[i];
      /* code */
    }
  }
  printf("The min is: %u \n", j);
}

void find_maximum(unsigned char *t)
{
  int j = 0;
  for (unsigned int i = 0; i < SIZE; i++)
  {
    if (j < t[i])
    {
      j = t[i];
      /* code */
    }
  }
  printf("The max is: %u \n", j);
}

void find_mean(unsigned char *t)
{
  int sum = 0;
  for (unsigned int i = 0; i < SIZE; i++)
  {
    sum += t[i];
  }
  printf("The mean is: %u \n", sum / SIZE);
}

void find_median(unsigned char *t)
{
  int arr_size = sizeof(sort_array(t)) / sizeof(t[0]);
  // print_array(sort_array(t));
  printf("The median is: %u \n", t[SIZE / 2]);
}

void print_statistics(unsigned char *test)
{
  print_array(test);
  printf("The sorted array is:\n");
  print_array(sort_array(test));
  find_minimum(test);
  find_maximum(test);
  find_mean(test);
  find_median(test);
}

unsigned char *sort_array(unsigned char *arr)
{
  int i, j;
  for (i = 0; i < SIZE - 1; i++)
  {
    for (j = 0; j < SIZE - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        // Swap arr[j] and arr[j+1]
        unsigned char temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
  return arr;
}

void print_array(unsigned char *t)
{
  printf("[ ");
  for (unsigned int i = 0; i < SIZE; i++)
  {
    printf("%u  ", t[i]);
  }
  printf("]\n");
}
