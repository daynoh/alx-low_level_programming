#include "main.h"

/**
 * _isalpha- checks whether or not a value is uppercase
 * @c: ascii value of character
 *
 * Return: 1 if true 0 if false
 */

int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
