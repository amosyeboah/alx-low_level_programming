#include "main.h"
#include <unistd.h>

/**
 *_putchar - write the chracters to the stdout
 *
 *
 *Return : 1 on Success
 *On error - 1 is returned
 */

int _putchar(char c)
{
	return (write(1,&c,1));

}
