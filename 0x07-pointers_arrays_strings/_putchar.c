#include "main.h"
#include <unistd.h>
/**
 * On error, -1 
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

