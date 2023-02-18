#include<stdio.h>
/**
* main - Entry point
* printf to print whole numbers
* Return: Always 0 (Success)
*/
int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}
	putchar(10);
	return (0);
}
