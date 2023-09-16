#include "main.h"
/**
 * print_number - function to print integer n without using printf
 *@n: the integer to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	int i, digits = 0;
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (n != 0)
	{
		n /= 10;
		digits++;
	}
	for (i = digits - 1; i >= 0; i--)
	{
		int digit = n % 10;

		_putchar('0' + digit);
		n /= 10;
	}
}
