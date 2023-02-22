#include "main.h"

/**
 *print_int - print integer in int format
 *@value: value to be printed by putchar
 */

void print_int(int value)
{
	if (value != 0)
	{
		print_int(value / 10);
		_putchar((value % 10) + '0');
	}
}
