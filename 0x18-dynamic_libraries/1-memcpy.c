#include "main.h"

/**
 * _memcpy - Copy memory area
 * @dest: Destination to copy to
 * @src: memory to copy
 * @n: number of time to copy
 *
 * Return: char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
