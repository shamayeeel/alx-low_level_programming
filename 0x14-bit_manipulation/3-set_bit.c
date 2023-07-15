/**
 * set_bit - Sets the value of a bit to 1 at a given index
 * @n: Pointer to the unsigned long integer
 * @index: Index of the bit to set (starting from 0)
 *
 * Return: 1 if successful, -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8) /* Check if index is out of range */
		return (-1);

	*n |= (1 << index); /* Set the bit to 1 at the given index */

	return (1);
}
