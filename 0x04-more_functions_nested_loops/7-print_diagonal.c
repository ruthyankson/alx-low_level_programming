#include "main.h"
/**
 *print_diagonal - draws a diagonal line on the terminal.
 *@n: length of digonal line (int)
 */
void print_diagonal(int n)
{
	int i = 0, j;

	while (i < n && (!(n < 0 || n == 0)))
	{
		for (j = 0; j < i; j++)
			_putchar(32);
		_putchar('\\');
		_putchar('\n');
		i++;
	}
	_putchar('\n');
}
