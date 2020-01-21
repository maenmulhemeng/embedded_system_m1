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
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

 	unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
                                

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
 
  

  //print_array(test,SIZE);
  printf("====================\n");
  sort_array_inc(test,SIZE);
  print_statistics(test);
  sort_array(test,SIZE);
  print_array(test,SIZE);
}

/* Add other Implementation File Code Here */
void print_statistics(unsigned char* ar){
	
  unsigned char min = find_minimum(ar,SIZE);
	
  unsigned char max = find_maximum(ar,SIZE);	
  
	float mean = find_mean(ar,SIZE);
	float median = find_median(ar,SIZE);
	printf("min is %i , max is %i, mean is %f and finally the median is %f\n",min,max,mean,median );
}

void print_array(unsigned char* ar,int l){
	for(int i = 0 ; i < l ; i++){		
		printf("%i\n",ar[i] );
	}
}

float find_median(unsigned char* ar,int l){

	int medianIndex = l/2;
		
	float median = ar[medianIndex];
	if (l % 2 == 0){

		median = (ar[medianIndex] + ar[medianIndex-1])/2.0;

	}

	return median;
}
float find_mean(unsigned char* ar,int l){
	float sum = 0;
	for(int i=0; i < l; i++){
		sum += ar[i];
	}

	return sum/l;
}

unsigned char find_maximum(unsigned char* ar,int l){
	
  unsigned char max = ar[0];
	for(int i=0; i < l; i++){
		if (ar[i] >  max){
			max = ar[i];
		}
	}
	return max;
}

unsigned char find_minimum(unsigned char* ar,int l){
	
  unsigned char min = ar[0];
	for(int i=0; i < l; i++){
		if (ar[i] <  min){
			min = ar[i];
		}
	}
	return min;
}
void sort_array(unsigned char* ar,int l){
	for(int i = 0 ; i < l-1; i++){
		for(int j = i+1; j<l; j++){
			if (ar[i] < ar[j]){
				unsigned char temp = ar[i];
				ar[i] = ar[j];
				ar[j] = temp;
			}
		}
	}
}
void sort_array_inc(unsigned char* ar,int l){
	for(int i = 0 ; i < l-1; i++){
		for(int j = i+1; j<l; j++){
			if (ar[i] > ar[j]){
				unsigned char temp = ar[i];
				ar[i] = ar[j];
				ar[j] = temp;
			}
		}
	}
	
}