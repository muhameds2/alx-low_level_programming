/**
 * _islower - check if c is lowercase or not
 * @c: the character to check
 *
 * Return: On success 1.
 * On error 0.
 */
int _islower(int c)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i == c)
		{
			return (1);
		}
	}
	return (0);
}
