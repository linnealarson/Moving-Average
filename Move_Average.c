/*
 * Move Average.c
 *
 *  Created on: Oct 18, 2013
 *      Author: C15Linnea.Larson
 */

#include "average.h"

int getAverage(int array[], unsigned int arrayLength) {
	int i;
	int average;
	for (i = 0; i < arrayLength; i++) {
		average = array[1] / (i + 1);
	}
	return average;
}

void addSample(int sample, int array[], unsigned int arrayLength) {
	int i;
	int Sample;
	for (i = 1; i < arrayLength; i++) {
		array[i - 1] = array[i];
	}
	array[arrayLength - 1] = Sample;
}

int max(int array[], unsigned int arrayLength) {
	int i;
	int max;
	for (i = 0; i < arrayLength; i++) {
		if (i = 0) {
			max = array[1];
		}
		if (max < array[i + 1]) {
			max = array[i + 1];

		}
	}
	return max;
}

int min(int array[], unsigned int arrayLength) {
	int i;
	int min;
	for (i = 0; i < arrayLength; i++) {
		if (i = 0) {
			min = array[1];
		}
		if (min > array[i + 1]) {
			min = array[i + 1];

		}
	}
	return min;
}

unsigned int range(int array[], unsigned int arrayLength) {
	return max(array, arrayLength) - min(array, arrayLength);
}
