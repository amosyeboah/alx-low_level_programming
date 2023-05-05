#include "main.h"
#include <stdio.h>

/**
 *print_binary - A function to print Binary Representation of a number
 *
 *@n: Parameter
 *
 *Return: Resuult
 */

void print_binary(unsigned long int n)
{
	int i;
	int a;
	unsigned int num;

	for (i = 31; i > 0; i--)
	{
		num = n >> i;

		if (num & 1)
		{
			_putchar('1');
			a++;
		}
		else if (a)
		{
			_putchar('0');
		}
	}

	if (!a)
	_putchar('0');
}
