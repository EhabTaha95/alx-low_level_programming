#include "main.h"

/**
 * more_numbers - print from 0 to 14 in one line x10
 * Return: void
 */
void more_numbers(void)
{
	char i, j, a, b;

	for (i = 0; i < 10; i++)
	{
	for (j = 0; j <= 14; j++)
	{
	a = j / 10;
	b = j % 10;

	if (j >= 10)
	_putchar(a + '0');
	_putchar(b + '0');
	}
	_putchar('\n');
	}
}
