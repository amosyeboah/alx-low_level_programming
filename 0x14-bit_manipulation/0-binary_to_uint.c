#include "main.h"

/**
 *binary_to_uint - A function that converts a binary number to unsigned int
 *
 *@b: a pointer to the string 0 and 1
 *
 *Return: the decimal value
 */

	unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec = 0;

	for (i = 0; b[i]; i++)
	{
	if (b[i] == '1' || b[i] == '0')
	{
		dec = 2 * dec + (b[i] - '0');
	}
	else
	{
	return (0);
	}
	}

	return (dec);
}

