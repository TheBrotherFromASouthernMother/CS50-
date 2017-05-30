/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */
 
#include <cs50.h>
#include <math.h>
#include "helpers.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // TODO: impl;ement a searching algorithm
    int min = 0;
    int max = n-1;
    int guess = floor((max + min)/2); ;
    
    while (max >= min) {
        
        if (values[guess] == value ) {
            
            return true;
        } 
        
        else if (values[guess] < value) {
            min = guess + 1; 
        } 
        
        else if ( values[guess] > value ) { 
            max = guess -1;
        } 

        else {
            return false;
        }
    }
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement a sorting algorithm
    int minimum;
    
    for (int i = 0; i < n-2; i ++) {
       
        minimum = i;
        
        for (int j = i+1; j < n; j ++) {
            
            if (values[j] < values[minimum]) {
                minimum = j;
            }
            
        }
            
        int temp = values[i];
        values[i] = values[minimum];
        values[minimum] = temp;
        
    }
    
    return;
}
