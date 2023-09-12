#include "main.h"
#include <limits.h>
/**
 * print_last_digit - function to print a last digit of an int n
 * @n: the integer
 *
 * Return: Always n
 */
int print_last_digit(int n)
{
	if (n == INT_MIN)
	{
		_putchar('0' + (n % 10) * -1);
		return ((n % 10) * -1);
	}
	if (n < 0)
	{
		n = n * -1;
		_putchar('0' + n % 10);
		return (n % 10);
	}
	_putchar('0' + n % 10);
	return (n % 10);
}
