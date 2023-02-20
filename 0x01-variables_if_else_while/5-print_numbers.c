#include <stdio.h>
/**
 *main - main function to write numbers till 10
 *
 *Return: 0 exit code
 */
int main(void)
{
	char n;

	for (n = 0; n < 10; n++)
		printf("%d", n);
	putchar('\n');

	return (0);
}
