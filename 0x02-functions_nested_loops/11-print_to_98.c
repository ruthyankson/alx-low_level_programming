#include "main.h"

/**
 *print_to_98 - prints all natural numbers from n to 98
 *@n: minimum limit input
 */

void print_to_98(int n)
{
	int max_lim = 98, num, count, div10;

	while (n <= max_lim || n >= max_lim)
	{
		num = n;
		if (num < 0)
		{
			_putchar('-');
			num = -num;
		}
		count = 0;
		while (num != 0)
		{
			n /= 10;
			count++;
		}
		div10 = 10 ^ count;
		while ((num / 10) != 0)
		{
			_putchar(((num - (num % div10)) / div10) + '0');
			_putchar((num % div10) + '0');
			num /= 10;
			div10 /= 10;
		}
		if ((num / 10) == 0)
			_putchar(num + '0');
		if (n != max_lim)
		{
			_putchar(',');
			_putchar(32);
		}
		if (n < max_lim)
			n++;
		else if (n > max_lim)
			n--;
	}
	_putchar('\n');
}
