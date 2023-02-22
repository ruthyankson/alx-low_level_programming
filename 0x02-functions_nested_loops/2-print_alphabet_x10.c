#include "main.h"

/**
 *void print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 */
void print_alphabet_x10(void)
{
	int ch = 97;
	int times = 10;

	while (times > 0)
	{
		while (ch <= 122)
		{
			putchar(ch);
			ch++;
		}
		times--;
	}
	putchar('\n');
}
