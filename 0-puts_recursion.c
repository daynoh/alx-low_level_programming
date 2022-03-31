#include "main.h"

/*
 * _puts_recursion - recursively prints a characters in an array
 * @s : contains the array of characters
 *
 * Return : always true
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s+1);
	}
}
