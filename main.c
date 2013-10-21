/* Moving Average Assignment
 * created by Linnea Larson
 * This program will create a system of averaging out two numbers in a series.
 */
#include <msp430.h> 
#include "average.h"
/*
 * main.c
 */
int main(void) {
    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer
	
    int arrayLength = 10;
    int array[]={45, 42, 41,40, 43, 45, 46, 47, 49, 45};
    int average;
    int max;
    int min;
    int range;

    average = getAverage(array, arrayLength);
    max = max(array, arrayLength);
    min = min(array, arrayLength);
    range = range (array, arrayLength);

	return 0;
}
