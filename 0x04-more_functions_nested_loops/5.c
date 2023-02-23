# include <stdio.h>

/**
 * main - function that print numbers from 0 to 14
 * 10 times
 * Return: void
 */
int main(void)
{
	int j, i;

	for (i = 0; i <= 9; i++)
	{

	for (j = 0; j <= 14; j++)
	{
	putchar(j + 48);
	}
	putchar('\n');
	}
}
