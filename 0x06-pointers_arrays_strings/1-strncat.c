/**
 * _strncat - concatenate two strings
 * @dest: first string
 * @src: second string
 * @n: number of bytes
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	char *s = dest;

	while (*s != '\0')
	{
		s++;
	}
	for (i = 0; i < n && *src != '\0'; i++)
	{
		*s = *src;
		src++;
		s++;
	}
	*s = '\0';
	return (s);
}
