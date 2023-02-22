#include "main.h"
/* #include <stdio.h> */

/**
 *print_to_98 - prints all natural numbers from n to 98
 *@n: minimum limit input
 */

void print_to_98(int n)
/* int main(void) */
{
	int max_lim = 98, num;
	int div10 = 1;

	/* int n = 81; */
	if (n <= max_lim || n >= max_lim)
	{
		while (n != max_lim)
		{
			num = n;
			if (num < 0)
			{
				_putchar('-');
				num *= -1;
			}
			while (num != 0)
			{
				num /= 10;
				div10 *= 10;
			}
			num = n;
			div10 /= 10;
			/* printf("%d booyy \n", div10); */
			while ((num / 10) != 0 && div10 != 0)
			{
				_putchar((num / div10) + '0');
				num %= div10;
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
			/* printf("%d", n); */
		}
		if (n == max_lim)
		{
			_putchar(57);
			_putchar(56);
		}
	}
	_putchar('\n');
	/* return (0); */
}
