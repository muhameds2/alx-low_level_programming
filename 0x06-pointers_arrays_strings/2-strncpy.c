/**
 * _strncpy - copies n bytes of strings
 * @dest: first string
 * @src: second string
 * @n: number of bytes
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;
	char *s = dest;

	for (x = 0; x < n; x++)
	{
		if (*src != '\0')
		{
			*s = *src;
			src++;
			s++;
		}
		else
		{
			*s = '\0';
			s++;
		}
	}
	return (dest);
}
