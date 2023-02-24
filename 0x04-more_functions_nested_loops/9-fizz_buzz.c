#include <stdio.h>
/**
 *main - fizz_buzz program
 *Return: 0, Always success
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			putchar('F');
			putchar('i');
			putchar('z');
			putchar('z');
		}
		else if (i % 5 == 0)
		{
			putchar('B');
			putchar('u');
			putchar('z');
			putchar('z');
		}
		else if (i % 15 == 0)
		{
			putchar('F');
			putchar('i');
			putchar('z');
			putchar('z');
			putchar('B');
			putchar('u');
			putchar('z');
			putchar('z');
		}
		else
		{
			if (i > 9 && i < 100)
				putchar((i / 10) + '0');
			else if (i == 100)
			{
				putchar((i / 100) + '0');
				putchar((i % 100) + '0');
			}
			putchar((i % 10) + '0');
		}
		putchar(32);
	}
	putchar('\n');
	return (0);
}
