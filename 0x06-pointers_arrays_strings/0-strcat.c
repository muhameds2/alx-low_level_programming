/**
 * _strcat - function that cocatenates two strings
 *@dest: string 1
 *@src: string 2 to be concatenates to str 1
 * Return: a pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (dest);
}
