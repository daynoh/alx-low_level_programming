#include "main.h"

int check_palindrome(char *s, int n)
{
	if (n <= 0)
	{
		if (*s == s[n])
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}

	while (n > 0)
	{
		if(*s == s[n])
		{
			check_palindrome(s+1, n-1);
		}
		else
		{
			return (0);
		}
	}
}
/**
 * is_palindrome - check is string is palindrome
 * @s: string to check
 *
 * Return: 1 if palindrome 0 if not
 */

int is_palindrome(char *s)
{
	int i;
	char *x = *s;

	for(i = 0; x != '\0'; i++)
	{
		x = x+1;
	}
	return (check_palindrome(*s, i));
}

