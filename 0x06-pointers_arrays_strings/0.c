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
	char *destr = dest;

	for (n = 0; n < j && src[n] != '\0'; n++)
	{
		destr[i + n] = src[n];
	}
	destr[i + j] = '\0';

	l = strlen(destr);

	printf("%d\n", l);

	printf("%s\n", destr);
}
