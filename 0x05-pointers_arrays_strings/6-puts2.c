#include "main.h"

/*
 * puts- prints values in an char array skiping one  value
 *
 * Return : always 0.
 */

void puts2(char *str)
{
	int i;
	
	for (i = 0; str[i] != '\0'; i++)
		;
	int l;

	for (l = 0; l < i; l = l+2)
	{
		_putchar(str[i]);
	}
}
