#include "main.h"
/*
 * _print_rev_recursion- Print a string in reverse
 * @s: The string to be printed
 */
void _print_rev_recursion(char *S)
{
	if (*S)
	{
		_print_rev_recursion(s+1);
		_putchar(*S);
	}
}
