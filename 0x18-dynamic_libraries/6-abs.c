#include "main.h"


/**
  * _abs - Computes the absolute value of an integer.
  * @n: computed integer.
  *
  * Return: Absolute value of number or 0
  */

int _abs(int n)
{

	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (0);
	}

}
