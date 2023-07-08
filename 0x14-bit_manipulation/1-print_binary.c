#include "main.h"

/**
 * print_binary - Print the binary rep of a number.
 * @n: unsigned long int to be converted and printed.
 *
 * Return: none.
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar ((n & 1) + '0');
}
