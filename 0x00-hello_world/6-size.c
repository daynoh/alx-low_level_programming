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


	printf("Size of a char: ",sizeof(ch)," byte(s)");
	printf("Size of an int: ",sizeof(intT)," byte(s)");
	printf("Size of a long int: ",sizeof(lonInt)," byte(s)");
	printf("Size of a long long int: ",sizeof(lonlongint)," byte(s)");
	printf("Size of a float: ",sizeof(flt)," byte(s)");

	return (0);
