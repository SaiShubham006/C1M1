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
 * @file <stats.c> 
 * @brief c file for assessment c1m1
 *
 *
 * @author Sai Shubham Biswal
 * @date 27/06/2025
 *
 */

#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE 40

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
int max=test[0];
int min=test[0];
  /* Statistics and Printing Functions Go Here */
int find_maximum(unsigned char test[],int len){
  for(int i=0;i<len;i++){
    if(test[i]>max){
      max=test[i];
    }
  }
  return max;
}

int find_minimum(unsigned char test[],int len){
  for(int i=0;i<len;i++){
    if(test[i]<min){
      min=test[i];
    }
  }
  return min;
}

int find_mean(unsigned char test[],int len){
  int sum=0;
  for(int i=0;i<len;i++){
    sum+=test[i];
  }
  int average=sum/len;
  return average;
}

int sort_array(unsigned char test[],int len){
  for(int i=0;i<len;i++){
    for(int j=0; j<len-i-1;j++){
      if(test[j]<test[j+1]){
        int temp=test[j];
        test[j]=test[j+1];
        test[j+1]=temp;
      }
    }
  }
}

int find_median(unsigned char test[],int len){
  sort_array(test,SIZE);
    if(len%2==0){
      return (test[len/2 -1]+test[len/2])/2.00;
    }
    else{
      return test[len/2];
    }
}

void print_statistics(){
  printf("Maximum is: %d\n",find_maximum(test,SIZE));
  printf("Minimum is: %d\n",find_minimum(test,SIZE));
  printf("Mean is: %d\n",find_mean(test,SIZE));
  printf("Median is: %d\n",find_median(test,SIZE));
}

void print_array(unsigned char test[], int len){
  for(int i=0;i<len; i++){
    printf("%d element is %d\n",i+1,test[i]);
  }
}

print_array(test,SIZE);
print_statistics();
printf("After sorting\n:");
print_array(test,SIZE);

}

/* Add other Implementation File Code Here */

