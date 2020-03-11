/* 
 * File:   		PrimeFactor.c
 * Author: 		Shane Wirkes
 * Description: 	Function to find the prime factors 
 *			from an array of integers.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "PrimeFactor.h"

void primeFactors(int armArray[], int arrLength)
{	
	
	
	printf("Array size is %d\n", arrLength); 

	for (int i = 0; i < arrLength; i++)
	{
		int armNum = armArray[i];
		int primeNum = 2;
		int pFactors = armNum;
		int primeCounter = 0;
        
		printf("The prime factors of %d are:\n", armNum);
		if (armNum < 0)
		{
			printf("Negative numbers cannot be included.\n");
			armNum = armArray[i + 1];
		}
        
        	//exclude 0 and 1 then check for the first 3 prime numbers.
		else if (armNum < 2)
		{
            		printf("%d does not have any prime factors.\n\n", armNum);
        	}
        	else if (armNum < 4)
		{
			printf("%d is a prime number.\n\n", armNum);
			armNum = armArray[i + 1];
		}
        	else
        	{
            		//The largest prime factor can only be half the original number.
            		while (primeNum <= armNum / 2)
            		{
				//Starting with the first prime number, if the number is divisible by that prime,
				//print it as a factor and divide it by the prime number.
				if (pFactors % primeNum == 0)
				{
				    printf("%d ", primeNum);
				    pFactors = pFactors / primeNum;
				    primeCounter++;
				}
                		else
				{
					primeNum++;
                    		}	
                
            		}
            		//if there haven't been any prime factors, the number itself is prime.
            		if (primeCounter == 0)
			{
				printf("%d is a prime number.", armNum);
			}
                		
            		printf("\n\n");
        	}
	}
}
