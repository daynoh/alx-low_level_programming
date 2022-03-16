#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int x;
	int y;
	
	for (y = 1; y <= 10; y++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}
