#include "main.h"
/**
 * rev_string - prints a string in reverse
 * @s: the string to be printed in reverse
 * Return: void
 */
void rev_string(char *s)
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
