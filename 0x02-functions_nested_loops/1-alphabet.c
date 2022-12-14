#include "main.h"

/**
 * print_alphabet - Print lower case alphabet
 *
 * void: function takes no arguments
 * Return: Void
 */

void print_alphabet(void)

{
	char letter;



	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}

	_putchar('\n');

}
