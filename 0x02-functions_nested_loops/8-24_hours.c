#include "main.h"

/**
 *jack_bauer - prints every minute of the day of Jack Bauer, from 00:00 to 23:59
 */

void jack_bauer(void)
{
	int i = 0, j = 0, k = 0, l = 0;

	while (i <= 2)
	{
		j = 0;
		while (i <= 9)
		{
			if ((i <= 1 && j <= 9) || (i <= 2 && j <= 3))
			{
				k = 0;
				while (k <= 5)
				{
					l = 0;
					while (l <= 9)
					{
						_putchar(i + '0');
						_putchar(j + '0');
						_putchar(58);
						_putchar(k + '0');
						_putchar(l + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
