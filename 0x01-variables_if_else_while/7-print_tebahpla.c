#include <stdio.h>
/**
 *main - main function to write all alpha
 *
 *Return: 0 exit code
 */
int main(void)
{
	char alph;

	for (alph = 'z'; alph >= 'a'; alph--)
	{
	putchar(alph);

	putchar('\n');
	}
	return (0);
}
