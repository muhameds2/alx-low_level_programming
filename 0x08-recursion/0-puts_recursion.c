#include "main.h"
/**
 * _puts_recursion - function that prints a string,
 * followed by a newline using recursive functions
 * @s: the string to be printed
 *
 * Return: Always void
 */
void _puts_recursion(char *s)
{
	char *c = s;

	if (!(*s == '\0'))
	{
		_putchar(*c);
		c++;
		_puts_recursion(c);
	}
	if (*s == '\0')
		_putchar('\n');
}
