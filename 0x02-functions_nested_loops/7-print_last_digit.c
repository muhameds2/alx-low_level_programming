#include "main.h"
/**
 * print_last_digit - function to print a last digit of an int n
 * @n: the integer
 *
 * Return: Always n
 */
int print_last_digit(int n)
{
	int k;

	k = n % 10;
	_putchar(k);
	return (k);
}
