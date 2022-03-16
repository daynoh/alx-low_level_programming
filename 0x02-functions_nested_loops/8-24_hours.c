#include "main.h"

/**
 * jack_bauer- prints every minute 
 *
 * Return: void
 */

void jack_bauer(void)
{
	int i;
	int j;

	while (i <= 23)
	{
		while(j <= 59)
		{
			_putchar(i + '0');
			_putchar(':');
			_putchar(j + '0');
		}
		_putchar('\n');
	}
}
