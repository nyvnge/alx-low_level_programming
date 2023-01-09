#include "main.h"

/**
 * _islower - checks for lowercase
 * @c: c is a variable that stores the values
 *
 * Return: 1 if lowercase 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
