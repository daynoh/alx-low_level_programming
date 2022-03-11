#include <stdio.h>
/**
 * main - returns size of stuff
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
	printf("Size of a char: %d byte(s)",sizeof(ch));
	printf("Size of an int: %d byte(s)",sizeof(intT));
	printf("Size of a long int %d byte(s)",sizeof(lonInt));
	printf("Size of a long long int %d byte(s)",sizeof(lonlongInt));
	printf("Size of a float: %d byte(s)",sizeof(flt));
