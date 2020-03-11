/* 
 * File:   	Armstrong.c
 * Author:      Shane Wirkes
 * Description: Function to find the Armstrong numbers between 0 - 100 000
 *              as well as a function to sum and average those numbers.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "Armstrong.h"

int *armstrongNumberFinder(int armArray[])
{
	int armNum = 0;
	int sum = 0;
	int temp = 0;
	int digit = 0;
	int numDigits = 0;
	int iterator = 0;

	for (int i = 0; i < 100000; i++)
	{
				
		armNum = i;
		temp = armNum;

		if (armNum != 0)
		{
			//find the number of digits in the integer			
			numDigits = floor(log10(abs(armNum))) + 1;

			while (armNum != 0)
			{
				//get the right-most digit from int				
				digit = armNum % 10;

				//take the digit to the power of the number 
				//of digits and add it to the total sum 
				sum = sum + pow(digit, numDigits);

				//drop the right-most digit from the int and start again
				armNum = armNum / 10;
				
			}

			//if the final sum equals the original number, 
			//add it to the array and increment the iterator
			if (temp == sum)
			{				
				armArray[iterator] = temp;
				iterator++;
			}
		}
		else
		{
			//if number is 0, add it to array			
			armArray[iterator] = temp;
			iterator++;
		}

		//reset sum for next Armstrong candidate
		sum = 0;
	}
	
	//print the Armstrong Number array
	printf("Armstrong Numbers found between 0 and 100 000:\n");
	for (int i = 0; i < 20; i++)
	{
		printf("%d ", armArray[i]);
	}
	
	printf("\n\n");

	return armArray;	
}

void sumAndAverage(int armArray[], int arrLength)
{
		
	
	int sum = 0;	
		
	for (int i = 0; i < arrLength; i++)
        sum += armArray[i];
	

	printf("The sum of the numbers in the given array is %d\n\n", sum);
	printf("The average of the numbers in the given array is %.2f\n\n", (float)sum / 20);
}

