#include "main.h"

/**
 * _islower - check for lower characters
 * @c: the character to check
 * Return: 0 if upper character or 1 for lower character
 */
int _islower(int c)
{
	if (c >= 'a')
		return (1);
	else
		return (0);
}
