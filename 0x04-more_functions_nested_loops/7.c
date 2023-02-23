# include <stdio.h>

/**
 *main - function that prints a diagonal line
 *@n: character to be checked
 *Return: diagonal line
 */
int main(void)
{
	int n = 10;

	if (n <= 0)
	putchar('\n');
	else if (n == 1)
	{
	putchar('\\');
	putchar('\n');
}
else
	{
	int j, m;

	for (m = 1; m <= n; m++)
	{
	for (j = 1; j < m; j++)
	{
	putchar(' ');
	}
	putchar('\\');
	putchar('\n');
	}
	}
}
