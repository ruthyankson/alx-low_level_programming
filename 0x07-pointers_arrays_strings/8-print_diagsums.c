#include <stdio.h>
#include "main.h"
/**
 *print_diagsums - prints the sum of the two diagonals of a square matrix
 *of integers.
 *@a: array
 *@size: array size
 */
void print_diagsums(int *a, int size)
{
	int i, sumprin, sumsec;

	sumprin = 0;
	sumsec = 0;
	for (i = 0; i < size; i++)
	{
		sumprin += a[i * size + i];
	}
	for (i = size - 1; i >= 0; i--)
	{
		sumsec += a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", sumprin, sumsec);
}
