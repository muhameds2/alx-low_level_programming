#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: the string to be printed in reverse
 * Return: void
 */
void print_rev(char *s)
{
	int i, k, y;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		k = i;
	}
	for (y = k; y >= 0; y--)
	{
		_putchar(*(s + y));
	}
	_putchar('\n');
}
