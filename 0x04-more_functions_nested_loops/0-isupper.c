# include "main.h"

/**
 * _isupper - to determine upper and lower case alphabets
 * @c: character to be checked
 * Return: 1 if upper case character
 * else return 0 if lower case character
 */
int _isupper(int c)
{
	char c;

	if (c >= 'A')
		return (1);
	else
		return (0);
}
