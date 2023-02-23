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

	for (j = 0; j <= 9; j++)
	{
	putchar(j + 48);
	}
	for (j = 49; j <= 52; j++)
	{
		putchar(j + 57);
	}
	putchar('\n');
	}
}
