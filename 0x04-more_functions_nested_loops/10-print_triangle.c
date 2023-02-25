#include "main.h"
/**
 *print_triangle - prints a triangle, followed by a new line.
 *@size: triangle size (int)
 */
void print_triangle(int size)
{
	int i, j, space;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (space = 0; space < size - (i + 1); space++)
			{
				_putchar(32);
			}
			for (j = 0; j < i + 1; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
