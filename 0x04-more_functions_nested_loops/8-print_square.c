# include "main.h"

/**
 * print_square - function that prints squares
 * @size: size of the square
 * Return: prints squares followed with new line
 */
void print_square(int size)
{
	if (size > 0)
	{
		int n, j;

		for (j = 1; j <= size; j++)
		{

		for (n = 1; n <= size; n++)
		{
			_putchar('#');
		}
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
