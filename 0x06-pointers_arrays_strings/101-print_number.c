#include "main.h"
/**
 *print_number - prints a number
 *@n: integer number
 */
void print_number(int n)
{
	unsigned int un = n;

	if (n < 0)
	{
		_putchar(45);
		un = -1 * n;
	}
	if (un / 10 != 0)
	{
		print_number(un / 10);
	}
	_putchar((un % 10) + '0');
}
