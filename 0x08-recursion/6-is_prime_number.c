#include "main.h"
/**
 *is_prime_number - returns 1 if the input integer is a prime number,
 *otherwise return 0.
 *@n: given number
 *Return: 1 (Success), 0 (Failure)
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, n - 1));
}

/**
 *prime - prime number detection by recursion
 *@n: number given
 *@i: iterator
 *Return: 1 (prime), 0 (not prime)
 */
int prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (prime(n, i - 1));
}
