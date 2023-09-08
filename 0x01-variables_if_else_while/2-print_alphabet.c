#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: this script writes the minimalized
 * alphabet with using putchar only on time in the
 * entire code
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 97 ; n <= 122; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
