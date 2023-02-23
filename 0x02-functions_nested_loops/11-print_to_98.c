#include "main.h"
/**
 *print_to_98 - prints all natural numbers from n to 98
 *@n: range limit input
 */
void print_to_98(int n)
{
	int max_lim = 98, num, div10, div_num;

	while (n <= max_lim || n >= max_lim)
	{
		num = n;
		if (num < 0)
		{
			_putchar('-');
			num *= -1;
		}
		div10 = 1;
		div_num = num;
		do {
			div_num /= 10;
			div10 *= 10;
		} while (div_num != 0);
		div10 /= 10;
		while (div10 != 0)
		{
			_putchar((num / div10) + '0');
			num %= div10;
			div10 /= 10;
		}
		if (n != max_lim)
		{
			_putchar(',');
			_putchar(32);
		}
		if (n < max_lim)
			n++;
		else if (n > max_lim)
			n--;
		else if (n == max_lim)
			break;
	}
	_putchar('\n');
}
