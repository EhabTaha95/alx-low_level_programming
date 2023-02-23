# include <stdio.h>

/**
 * main - function that prints a triangle
 * @size: size of the triangle
 * Return: prints a triangle
 */
int main(void)
{
	int size = 10;


	if (size > 0)
	{
	int n, j, m;

	j = 1;

	while (j <= size)
	{
	n = size -j;

	while (n > 0)
	{
	putchar(' ');
	n--;
	}
	for (m = 1; m <= j; m++)
	{
		putchar('#');
	}
	putchar('\n');
	j++;
	}
	}
	else
	putchar('\n');
}
