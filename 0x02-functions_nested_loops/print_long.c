#include "main.h"

/**
 *print_long - print integer in long format
 *@n: value to be printed by putchar
 */

void print_long(long value)
{
	if (value != 0)
	{
		putchar((value % 10) + '0');
	}
}
