#include <stdio.h>
#include "main.h"
/**
 *print_array - prints n elements of an array of integers.
 *@a: array
 *@n: number of elements to be printed
 */
void print_array(int *a, int n)
{
	int i;
	size_t arr_size = sizeof(a) / sizeof(a[0]);

	if (n <= arr_size)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", a[i]);
			if (i != n - 1)
			{
				_putchar(',');
				_putchar(32);
			}
		}
	}
	_putchar('\n');
}
