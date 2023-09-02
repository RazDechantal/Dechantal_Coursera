#pragma once
/**
 * @file stats.h
 * @brief header file holding the declrartion of functions
 *
 * function declration for analyzing a data set.
 *
 * @author Raz Dechantal
 * @date 02/09/2023
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief Returns the minimum
 *
 * Print the min of an array
 *
 * @param unsigned char pointer
 * @return void
 */
void find_minimum(unsigned char *t);

/**
 * @brief Returns the maximum
 *
 * Print the max of an array
 *
 * @param unsigned char pointer
 * @return void
 */
void find_maximum(unsigned char *t);

/* Add Your Declarations and Function Comments here */

/**
 * @brief Returns the mean
 *
 * Print the mean of an array
 *
 * @param unsigned char pointer
 * @return void
 */
void find_mean(unsigned char *t);

/* Add Your Declarations and Function Comments here */

/**
 * @brief Returns the median
 *
 * Print the median of an array
 *
 * @return void
 */
void find_median(unsigned char *t);

/**
 * @brief Print statistics
 *
 * Print statistics
 *
 * @param unsigned char pointer
 * @return void
 */
void print_statistics(unsigned char *t);

/**
 * @brief sortArray
 *
 * Sort array
 *
 * @param unsigned char pointer
 * @return void
 */
unsigned char *sort_array(unsigned char *t);

/**
 * @brief print array
 *
 * Print array
 *
 * @param unsigned char pointer
 * @return unsigned char pointer
 */
void print_array(unsigned char *t);

#endif /* __STATS_H__ */
