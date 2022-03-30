#include "main.h"

/*
 * puts- prints values in an char array skiping one  value
 *
 * Return : always 0.
 */

void puts2(char *str)
{
	for(int i = 0; str[i] != "\n"; i+2)
	{
		_putchar(str[i]);
	}
}
