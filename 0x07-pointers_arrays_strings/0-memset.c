#include "main.h"

/**
 * _memset - fill the first n byte to the memory.
 * @s: starting address of the memory to be filled
 * @b: value to be filled
 * @n: number of time to fill it
 *
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
