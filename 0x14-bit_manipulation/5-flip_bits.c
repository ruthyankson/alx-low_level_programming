/**
 * flip_bits - counts the number of bits to flip
 * to get from on number to another
 * to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, counter = 0;
	unsigned long int temp;
	unsigned long int exclusive_or = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		temp = exclusive_or >> i;
		if (temp & 1)
			counter++;
	}

	return (counter);
}
