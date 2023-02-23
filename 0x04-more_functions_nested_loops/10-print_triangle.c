# include "main.h"

/**
 * print_triangle - function that prints a triangle
 * @size: size of the triangle
 * Return: prints a triangle
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int n, j, m;

		j = 1;

		while (j <= size)
		{
		n = size - j;

		while (n > 0)
		{
			_putchar(' ');
			n--;
		}
		for (m = 1; m <= j; m++)
		{
		_putchar('#');
		}
		_putchar('\n');
		j++;
		}
	}
	else
		_putchar('\n');
}

