#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to convert and print
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int leading_zero = 1;

	while (mask > 0)
	{
		if (n & mask)
		{
			putchar('1');
			leading_zero = 0;
		}

		else if (!leading_zero)
		{
			putchar('0');
		}
		mask >>= 1;
		}

	if (leading_zero)
	{
		putchar('0');
	}
}
