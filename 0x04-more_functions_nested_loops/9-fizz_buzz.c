#include "main.h"
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
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
		}
		else if (i % 5 == 0)
		{
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		}
		else if (i % 15 == 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		}
		else
		{
			if (i > 9 && i < 100)
				_putchar((i / 10) + '0');
			else if (i == 100)
			{
				_putchar((i / 100) + '0');
				_putchar((i % 100) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar(32);
	}
	_putchar('\n');
	return (0);
}
