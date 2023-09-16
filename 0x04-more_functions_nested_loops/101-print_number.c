#include "main.h"
/**
 * print_number - function to print integer n without using printf
 *@n: the integer to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	int is_negative = n < 0;

	if (is negative)
	{
		_putchar('-');
		n = -n
	}
	int digits = 0;

	while (n != 0)
	{
		n /= 10;
		digits++;
	}
	int i;

	for (i = digits - 1; i >= 0; i--)
	{
		int digit = n % 10;

		_putchar('0' + digit);
		n /= 10;
	}
}
