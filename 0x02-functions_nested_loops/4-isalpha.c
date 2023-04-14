#include "main.h"

/**
 * _isalpha - check if c is a letter, lowercase or uppercase
 *@c: parameter
 *Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' || 'A') && (c <= 'z' || 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
