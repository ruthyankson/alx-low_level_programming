#include "main.h"

/**
 *_abs - computes the absolute value of an integer.
 *@n: input value (int)
 *Return: the absolute value of the input number (Success)
 */

int _abs(int n)
{
	return (n * ((n > 0) - (n < 0)));
}
