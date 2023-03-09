#include "main.h"
/**
 *_sqrt_recursion - returns the natural square root of a number.
 *@n: given number
 *Return: natural square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (asqrt(n, 0));
}
/**
 *asqrt - returns the natural square root of a number by recursion
 *@n: given number
 *@i: iterator
 *Return: the resulting square root
 */
int asqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (asqrt(n, i + 1));
}
