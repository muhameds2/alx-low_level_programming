#include <unistd.h>
/**
 * main - Entry point
 *
 * Description: script to print '_putchar'
 *		without using stdio.h library
 * @c: the char that will be printed
 * _putchar: print char c
 *
 * Return: Always 0 (Success)
 */
int _putchar(char);

int main(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');
	return (0);
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}
