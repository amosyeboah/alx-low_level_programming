#include "main.h"

/**
 * print_alphabet_x10 - Print alphabet a-z 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char j;

	for (; i <= 9; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}

	 _putchar('\n');
	}
}
