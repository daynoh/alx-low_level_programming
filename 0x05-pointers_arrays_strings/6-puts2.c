#include "main.h"

/*
 * puts- prints values in an char array skiping one  value
 *
 * Return : always 0.
 */

void puts2(char *str)
{
	int i = 0;
	
	for (i = 0; str[i] != '\0'; i++)
		;
	for (int l = 0; l < i; l+2)
	{
		_putchar(str[i]);
	}
}
