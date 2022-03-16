#include "main.h"

/**
 * jack_bauer- prints every minute 
 *
 * Return: void
 */

void jack_bauer(void)
{
	int i = 0;

	while (i <= 23)
	{
		int j = 0;

		while(j <= 59)
		{
			_putchar(i + '0');
			_putchar(':');
			_putchar(j + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
