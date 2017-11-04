/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */
 
#include <cs50.h>
#include <string.h>
#include <stdio.h>
#include "helpers.h"


/**
 * Returns true if value is in array of n values, else false.
 */
 //needle. haystack. size
bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm
    //linear search
    // for (int i = 0; i < n; i++)
    // {
    //     if ( values[i] == value)
    //     {
    //         printf("%i\n", value);
    //         return true;
    //     }
    // }
    
    // Binary search
    int L = 0; //index
    int R = n - 1;
    int M;
    
    while(L <= R)
    {
        M = (L + R) / 2;
        
        if (values[M] == value) return true;
        if (values[M] > value)
        {
            R = M - 1;
        }
        else //value[M] < value
        {
            L = M + 1;
            
        }
    }
    
    // look at middle of array
    // if element you're looking for
    //     return true
    // else if element is to left
    //     search left half of array
    // else if element is to right
    //     search right half of array
    // else
    //     return false
    return false;
}



void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement a sorting algorithm
    //bubble sort
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n-1-k; i++)
        {
            //printf("i= %i\n", i);
            if (values[i] > values[i+1])
            {
                //printf("before:value %i: %i, i+1: %i\n", i, values[i], values[i+1]);
                swap(&values[i], &values[i+1]);
                //printf("change:value %i: %i, i+1: %i\n", i, values[i], values[i+1]);
                
            }
            else
            {
                values[i] = values[i];
                //printf("else:value %i: %i, i+1: %i\n", i, values[i], values[i+1]);
            }
            
        }
        // for(int i = 0; i < n; i++)
        // {
        //     printf("%i\n", values[i]);
        // }
        
    }
    for(int i = 0; i < n; i++)
        {
            printf("%i\n", values[i]);
        }
    
    
    // repeat until no swaps
    //     for i from 0 to n-2
    //         if i'th and i+1'th elements out of order
    //             swap them
   
    return;
}

