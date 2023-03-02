#include "main.h"
#include <stdio.h>
/**
 *print_buffer - prints buffer
 *@b: buffer
 *@size: buffer size
 */
void print_buffer(char *b, int size)
{
	int obj, i, j;

	obj = 0;
	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (obj < size)
	{
		j = (size - obj) < 10 ? (size - obj) : 10;
		printf("%08x: ", obj);
		for (i = 0; i < 10; i++)
		{
			if (i < j)
				printf("%08lx", *(b + obj + i));
			else
				printf("  ");
			if (i % 2)
				printf(" ");
		}
		for (i = 0; i < j; i++)
		{
			int cp = *(b + obj + i);

			if (cp < 32 || cp > 132)
				cp = '.';
			printf("%c", cp);
		}
		printf("\n");
		obj  += 10;
	}
}
