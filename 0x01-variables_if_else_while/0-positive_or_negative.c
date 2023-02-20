#include <stdio.h>
#include <time.h>

/**
 * main - simple main function to determine whether number is positive or negative
 * Return: 0 exit code
 */
int main(void)
{
	int n;
	srand(time(0));
        n = rand() - RAND_MAX / 2;
	if (n>0)
	{
		printf("the number is greater than 0: is positive\n");
	}
	else if (n=0)
	{
		printf("the number is 0: is zero\n");
	}
	else
	{
		printf("the number is less than 0: is negative\n");
	}
	return (0);
}
