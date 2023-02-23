# include "main.h"

/**
 * print_line - function that prints a straight line
 * @n: number of dash characters
 * Return: draws a straight line followed by new line
 */
void print_line(int n)
{

	while (n > 0)
	{
	_putchar('_');
	n--;
	}
	_putchar('\n');
}
