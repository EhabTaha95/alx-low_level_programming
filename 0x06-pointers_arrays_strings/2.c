# include "main.h"

/**
 * _strncpy - function that copy strings
 * @dest: destination string
 * @src: source string
 * @n: number of characters to be copied
 * Return: pointer ptr to destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	char *ptr = dest;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
	*dest = src[i];
	dest++;
	}
	*dest = '\0';
	return (ptr);
}
