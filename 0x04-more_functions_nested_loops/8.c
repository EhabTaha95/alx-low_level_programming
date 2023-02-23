# include <stdio.h>

/**
 * main - function that prints squares
 * @size: size of the square
 * Return: prints squares followed with new line
 */
int main(void)
{
	int size = 0;


	if (size > 0)
	{
	int n, j;

	for (j = 1; j <= size; j++)
	{

	for (n = 1; n <= size; n++)
	{
	putchar('#');
	}
	putchar('\n');
	}
	}
	else
		putchar('\n');
}
