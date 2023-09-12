#include "main.h"
/**
 * print_sign - function that print the sign of a n
 * @n: the number to check sign of
 *
 * Return: 1 if n is positive, 0 if n is zero, -1 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar(45);
	return (-1);
}
