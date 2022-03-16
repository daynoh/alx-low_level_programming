#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_alphabet();
    return (0);
}

void print_alphabet(void)
{
	for (int x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');	
}
