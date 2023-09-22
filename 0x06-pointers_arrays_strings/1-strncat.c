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
	char *s = dest;

	while (*s != '\0')
	{
		s++;
	}
	while (*src != '\0' && n > 0)
	{
		*s = *src;
		s++;
		src++;
		n--;
	}
	*s = '\0';
	return (s);
}
