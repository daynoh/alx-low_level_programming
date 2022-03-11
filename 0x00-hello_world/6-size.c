#include <stdio.h>
/**
 * main - returns size of stuff
 * @intT: int
 * @ch: char
 * @lonInt: long int
 * @lonlongint: Long long int
 * @flt: float
 *
 * Return: Returns 0 
 */

int main(void)
{
	int intT;
	char ch;
	long int lonInt;
	long long int lonlongInt;
	float flt;


	printf("Size of a char: %lu byte(s)",sizeof(ch));
	printf("Size of an int: %lu byte(s)",sizeof(intT));
	printf("Size of a long int %lu byte(s)",sizeof(lonInt));
	printf("Size of a long long int %lu byte(s)",sizeof(lonlongInt));
	printf("Size of a float: %lu byte(s)",sizeof(flt));

	return (0);
