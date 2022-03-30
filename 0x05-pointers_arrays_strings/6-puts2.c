#include "main.h"

/*
 * puts2 - prints
 *
 * Return : nothing.
 */

void puts2(char *str)
{
	int i;
	int l;

	for (i = 0; str[i] != '\0'; i++)
		;
	for (l = 0; l < i; l = l + 2)
	{
		_putchar(str[l]);
	}
	_putchar('\n');
}
