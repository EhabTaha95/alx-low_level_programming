#include "main.h"

/**
 * _isalpha - checks for lower and upper case alphabets
 * @c: check character
 * Return: 1 if c is lower or upper character
 * else return 0
 */
int _isalpha(int c)
{
	if (c >= 'a')
		return (1);
	else if (c >= 'A')
		return (1);
	else
		return (0);
}
