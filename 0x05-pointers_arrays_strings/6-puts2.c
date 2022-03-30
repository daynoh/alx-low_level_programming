#include "main.h"

/*
 * puts- prints values in an char array skiping one  value
 *
 * Return : always 0.
 */

void puts2(char *str)
{
	int i;
	int l;

	for (i = 0; str[i] != '\0'; i++)
		;
	i++;
	for (l = 0; l < i; l = l+2)
	{
		_putchar(str[l]);
	}
	_putchar('\n');
}
