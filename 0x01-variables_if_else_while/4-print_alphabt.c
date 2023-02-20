#include <stdio.h>

/**
 *main - prints from a..z and exclude(e, q) using putchar only
 *
 *Return: 0
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)

	if (i != 'q' && i != 'e')
	putchar(i);

	putchar('\n');
	return (0);
}
