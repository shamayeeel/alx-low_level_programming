/**
 * flip_bits - Returns the number of bits needed to flip to get from one number to another
 * @n: First unsigned long integer
 * @m: Second unsigned long integer
 *
 * Return: Number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}

	return (count);
}
