#include <sdtio.h>
#include <stdlib>


/**
 *
 *
 *
 *
 *
 */

void _puts_recursion(char *s)
{	
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		putchar(s[i]);

	}
	putchar ('\n');

}

