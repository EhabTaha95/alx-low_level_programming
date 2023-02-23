# include "main.h"

/**
 * print_line - function that prints a straight line
 * @n: number of dash characters
 * Return: draws a straight line followed by new line
 */
void print_line(int n)
{
	if (n == 0)
		_putchar('\n');

	while (n > 0)
	{
	_putchar('-');
	n--;
	_putchar('\n');
	}
}
