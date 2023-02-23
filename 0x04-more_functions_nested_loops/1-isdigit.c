# include "main.h"

/**
 * _isdigit - function to check whether it is digit or not
 * @c: character to be checked
 * Return: 1 if @c is digit
 * else return 0 if @c is not a digit
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
