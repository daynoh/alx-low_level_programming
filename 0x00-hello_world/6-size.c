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


	printf("Size of a char: %u byte(s)",sizeof(ch));
	printf("Size of an int: %u byte(s)",sizeof(intT));
	printf("Size of a long int %u byte(s)",sizeof(lonInt));
	printf("Size of a long long int %u byte(s)",sizeof(lonlongInt));
	printf("Size of a float: %u byte(s)",sizeof(flt));

	return (0);
