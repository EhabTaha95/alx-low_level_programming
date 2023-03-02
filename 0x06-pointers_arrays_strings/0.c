# include <stdio.h>
# include <string.h>

/**
 * main - add two strings
 * @dest: first str
 * @src: second str
 * @i: character
 * @j: character
 * Return: pointer
 */
int main(void)
{
	char *dest = "Hello ";
	char *src = "World";
	int i = strlen(dest);

	printf("%d\n", i);

	int j = strlen(src);

	printf("%d\n", j);
	int n;
	int l;

	printf("%s\n", dest);

	for (n = 0; dest[n] != '\0'; n++)
	{}
	printf("%d\n", n);
	for (l = 0; src[l] != '\0'; l++, n++)
	{
		dest[n] = src[l];
	}
	dest[n] = '\0';

	printf("%s\n", dest);
}
