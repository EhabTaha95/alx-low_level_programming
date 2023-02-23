# include "main.h"

/**
 * print_diagonal - function that prints a diagonal line
 * @n: character to be checked
 * Return: diagonal line
 */
void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else if (n == 1)
	{
		_putchar('\\');
				_putchar('\n');
	}
	else
	{
		int j, m;

		for (m = 1; m <= n; m++)
		{
		for (j = 1; j < m; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
		}
	}
}
