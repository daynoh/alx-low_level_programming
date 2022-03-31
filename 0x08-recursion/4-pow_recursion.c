#include "main.h"

/**
 * _pow_recursion - computes x raised to y
 * @x: value of x
 * @y: power of x
 *
 * Return: power of x to y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y == 1)
	{
		return (x);
	}
	return (x * _pow_recursion(x, y - 1));
}
