#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
/**	unsigned int val = 0;
       	
	if (b == NULL) 
	{
        return (0);
	}
	
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1') 
		{
		       	return (0);
		}

	val = (val << 1) + (*b - '0');
        b++;
	}
	return (val);
	*/
	int i;
	unsigned int val = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		val = 2 * val + (b[i] - '0');
	}

	return (val);
}


