#include "main.h"

/**
 *print_to_98 - prints all natural numbers from n to 98
 *@n: minimum limit input
 */

void print_to_98(int n)
{
	int max_lim = 98, num;

	if (n < max_lim)
	{
		while (n <= max_lim)
		{
			num = (n / 10);
			_putchar((num % 10) + '0');
			if (n != max_lim)
			{
				_putchar(',');
				_putchar(32);
			}
			n++;
		}
	}
	else if (n > max_lim)
	{
		while (n >= max_lim)
		{
			num = (n / 10);
			_putchar((num % 10) + '0');
			if (n != max_lim)
			{
				_putchar(',');
				_putchar(32);
			}
			n--;
		}
	}
	else
	{
		_putchar(57);
		_putchar(56);
	}
	_putchar('\n');
}
