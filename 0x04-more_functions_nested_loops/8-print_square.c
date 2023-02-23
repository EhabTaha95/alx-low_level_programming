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
		int n;

		for (n = 1; n <= size; n++)
		{
			_putchar('#');
		}
	}
	_putchar('\n');
}
