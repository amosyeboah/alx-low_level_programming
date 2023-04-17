#include <stdio.h>

/**
 * main - A function that print the name of the file it was compile from
 *
 * Return: (0) on Success.
 *
 */

int main(void)
{
	const char* filename = __FILE__;
	while (*filename) {
	_putchar(*filename);
	++filename;
	}
 	_putchar('\n');
	return (0);
}

