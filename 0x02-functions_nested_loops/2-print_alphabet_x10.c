#include "main.h"

/**
 *print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 */

void print_alphabet_x10(void)
{
	int ch = 'a';
	int times = 10;

	while (times > 0)
	{
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		times--;
	}
	_putchar('\n');
}
