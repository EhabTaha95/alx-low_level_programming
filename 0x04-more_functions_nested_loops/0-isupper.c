# include "main.h"

/**
 * _isupper - to determine upper and lower case alphabets
 * @c: character to be checked
 * Return: 1 if @c isupper case character
 * else return 0 if @c is lower case character
 */
int _isupper(int c)
{
		return (c >= 65 && c <= 90 ? 1 : 0);
}
