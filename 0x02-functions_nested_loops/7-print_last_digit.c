# include "main.h"

/**
 * print_last_digit - prints last digit of number
 * @n: number to checked
 * Return: last digit of the nimber
 */
int print_last_digit(int n)
{
	int c;

	c = n % 10;
	if (c < 0)
		c *= -1;

	_putchar(c);
	return (c);
}
