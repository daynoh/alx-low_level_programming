#include <main.h>
/**
 * main - Entry to program
 *
 * Return: returns 0 if successful
 */

int main(void)
{
	char name[] = "_putchar";
	int i = 0;
	
	while (name[i] != '\0')
	{
		_putchar(name[i]);
		i++;
	}
	_putchar('\n');

	return (0);
