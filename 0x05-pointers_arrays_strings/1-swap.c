#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 *
 * @a: Pointer variable of a
 * @b: Pointer variable of b
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;

}
