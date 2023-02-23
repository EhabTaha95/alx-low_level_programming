# include <stdio.h>

/**
 * main - function that prints a straight line
 * @n: number of dash characters
 * Return: draws a straight line followed by new line
 */
int main(void)
{
	int n = -4;

	while (n > 0)
	{
	putchar('_');
	n--;
	}
	putchar('\n');
}
