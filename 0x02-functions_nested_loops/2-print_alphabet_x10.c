#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times in lower case
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char i, n;

	for (i = 0; i < 10; i++)
	{
		for (n = 'a'; n <= 'z'; n++)

			_putchar(n);

		_putchar('\n');
	}
}
