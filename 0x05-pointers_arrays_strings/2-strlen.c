/**
 * _strlen - function that returns the length of a string
 *@s: the address of the string
 *
 * Return: Length of a string
 */
int _strlen(char *s)
{
	int i, lenn = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		lenn++;
	}
	return (lenn);
}
