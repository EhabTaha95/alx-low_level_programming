# include "main.h"
# include <stdio.h>

/**
 * main - print numbers from 0 t0 100
 *
 * Return: write numbers
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else if (n % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
		printf("%d", n);
		}
	putchar(' ');
	}
	putchar('\n');
}
