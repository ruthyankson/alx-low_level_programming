#include "main.h"

/**
 *print_sign - prints the sign of a number.
 *@n: parameter to be checked (int)
 *Return: 1 (Positive), 0 (Zero), -1 (Negative)
 */

int print_sign(int n)
{
	if (n > 48)
	{
		_putchar(43);
		_putchar(44);
		_putchar(32);
		return (1);
	}
	else if (n == 48)
	{
		_putchar(48);
		_putchar(44);
		_putchar(32);
		return (0);
	}
	else if (n <= "-1")
	{
		_putchar(48);
		_putchar(44);
		_putchar(32);
		return (-1);
	}
}
