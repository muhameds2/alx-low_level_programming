#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: write the alphabet without e & q
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 97; n <= 122; n++)
	{
		if (n == 101 || n == 113)
			continue;
		else
			putchar(n);
	}
	putchar('\n');
	return (0);
}
