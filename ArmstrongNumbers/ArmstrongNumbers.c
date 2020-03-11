/* 
 * File:   		Exercise6.c
 * Author:      Shane Wirkes
 * Description: Working with Multiple Files
 */

#include <stdio.h>
#include "Armstrong.h"
#include "PrimeFactor.h"



int main() {

	int armstrongArray[20] = { };
	int negativeArray[2] = {-12, -13};
	
	primeFactors(armstrongNumberFinder(armstrongArray), 20);	
	sumAndAverage(armstrongNumberFinder(armstrongArray), 20);
	
	primeFactors(negativeArray, 2);
	

    	return 0;
}


