#include "main.h"

/**
  * print_alphabet_x10 - Make alphabet x10 times
  *
  * void: function takes no arguments
  * Return: void
  */

void print_alphabet_x10(void)

{

	char c;
	int j = 0;


	while (j < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);

		}

		j++;

		_putchar('\n');

	}

}
