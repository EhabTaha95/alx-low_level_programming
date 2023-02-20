#include <stdio.h>
/**
 * main - main function to write alpha in lower and cap
 *
 * Return: 0 exit code
 */
int main(void)
{
	char low;
	char cap;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
	for (cap = 'A'; cap <= 'Z'; cap++)
		putchar(cap);

	putchar('\n');

	return (0);
}
