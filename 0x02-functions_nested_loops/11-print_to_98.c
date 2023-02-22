#include "main.h"

/**
 *print_to_98 - prints all natural numbers from n to 98
 *@n: minimum limit input
 */

void print_to_98(int n)
{
	int max_lim = 98, num, l_num;

	while (n != max_lim)
	{
		num = n;
		if (num < 0)
		{
			_putchar('-');
			num = -num;
		}
		while ((num / 10) != 0)
		{
			l_num = num % 10;
			num = ((num - l_num) / 10);
		}
		_putchar(num + '0');
		_putchar(l_num + '0');
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
