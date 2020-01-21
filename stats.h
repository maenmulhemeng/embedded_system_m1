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
 * @brief The header of stats.c
 *
 * <Add Extended Description Here>
 *
 * @author Maen Mulhem
 * @date 20/01/2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <Add Return Informaiton here>
 */



/**
 * @brief A function that prints the statistics of an array including minimum, maximum, mean, and median.
 *
 * <Add Extended Description Here>
 *
 * @param ar it is an array of unsigned char
 *
 * @return void
 */
void print_statistics(unsigned char* ar);


/**
 * @brief Given an array of data and a length, prints the array to the screen.
 *
 * <Add Extended Description Here>
 *
 * @param ar it is an array of unsigned char
 * @param l it is the length of the passed array
 *
 * @return void
 */
void print_array(unsigned char* ar,int l);


/**
 * @brief Given an array of data and a length, returns the median value
 *
 * <Add Extended Description Here>
 *
 * @param ar it is an array of unsigned char
 * @param l it is the length of the passed array
 *
 * @return median of the array (float)
 */
float find_median(unsigned char* ar,int l);

/**
 * @brief Given an array of data and a length, returns the mean
 *
 * <Add Extended Description Here>
 *
 * @param ar it is an array of unsigned char
 * @param l it is the length of the passed array
 *
 * @return the mean of the array (float)
 */ 
float find_mean(unsigned char* ar,int l);

/**
 * @brief Given an array of data and a length, returns the maximum
 *
 * <Add Extended Description Here>
 *
 * @param ar it is an array of unsigned char
 * @param l it is the length of the passed array
 *
 * @return the maximum of the array (float)
 */ 

  unsigned char find_maximum(unsigned char* ar,int l);

/**
 * @brief Given an array of data and a length, returns the maximum
 *
 * <Add Extended Description Here>
 *
 * @param ar it is an array of unsigned char
 * @param l it is the length of the passed array
 *
 * @return the minimum of the array (float)
 */ 

  unsigned char find_minimum(unsigned char* ar,int l);

/**
 * @brief Given an array of data and a length, sorts the array from largest to smallest. (The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value. )
 *
 * <Add Extended Description Here>
 *
 * @param ar it is an array of unsigned char
 * @param l it is the length of the passed array
 *
 * @return the minimum of the array (float)
 */ 
void sort_array(unsigned char* ar,int l);


/**
 * @brief Given an array of data and a length, sorts the array increamentally  from the smallest to the largest.
 *
 * <Add Extended Description Here>
 *
 * @param ar it is an array of unsigned char
 * @param l it is the length of the passed array
 *
 * @return the minimum of the array (float)
 */
 void sort_array_inc(unsigned char* ar,int l);


#endif /* __STATS_H__ */
