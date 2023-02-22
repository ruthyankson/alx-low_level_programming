#include "main.h"

/**
 *print_sign - prints the sign of a number.
 *@n: parameter to be checked (int)
 *Return: 1 (Positive), 0 (Zero), -1 (Negative)
 */

int print_sign(int n)
{
	if (n > '0')
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
