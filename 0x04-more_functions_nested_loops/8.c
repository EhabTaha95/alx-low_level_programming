# include <stdio.h>

/**
 * main - function that prints squares
 * @size: size of the square
 * Return: prints squares followed with new line
 */
int main(void)
{
	int size = 2;


	if (size > 0)
	{
	int n;

	for (n = 1; n <= size; n++)
	{
	putchar('#');
	}
	}
	putchar('\n');
}
