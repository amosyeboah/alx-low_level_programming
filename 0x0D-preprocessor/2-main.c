#include <stdio.h>

/**
 * main - A function that print the name of the file it was compile from
 *
 * Return: (0) on Success.
 *
 */

int main(void)
{
	printf("This is the file %s \n", __FILE__);
	return (0);
}

