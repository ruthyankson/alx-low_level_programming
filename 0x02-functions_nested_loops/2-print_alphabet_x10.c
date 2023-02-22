#include "main.h"

/**
 *print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 */

void print_alphabet_x10(void)
{
	int times = 1;

	while (times <= 10)
	{
		int ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		times++;
		_putchar('\n');
	}
}
