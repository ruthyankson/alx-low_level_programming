#include "main.h"

/**
 *_islower - checks for lowercase character
 *@c: function parameter (int)
 *Return: 1(Success) or 0(Failure)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
