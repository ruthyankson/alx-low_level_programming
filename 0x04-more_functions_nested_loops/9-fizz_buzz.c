#include <stdio.h>
/**
 *main - fizz_buzz program
 *Return: 0, Always success
 */
int main(void)
{
	int i, j;
	char fizB[] = {'F', 'i', 'z', 'z', 'B', 'u', 'z', 'z'};

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			for (j = 0; j <= 3; j++)
			{
				putchar(fizB[j]);
			}
		}
		else if (i % 5 == 0)
		{
			for (j = 4; j <= 7; j++)
			{
				putchar(fizB[j]);
			}
		}
		else if (i % 15 == 0)
		{
			for (j = 0; j <= 7; j++)
			{
				putchar(fizB[j]);
			}
		}
		else
		{
			if (i > 9 && i < 100)
				putchar((i / 10) + '0');
			putchar((i % 10) + '0');
		}
		putchar(32);
	}
	putchar('\n');
	return (0);
}
