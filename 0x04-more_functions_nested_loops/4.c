# include <stdio.h>

/**
 * main - function that print most numbers except 2 & 4
 * Return: void
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
	if (i != 50 && i != 52)
	putchar(i);
	}
	putchar('\n');
	
}
