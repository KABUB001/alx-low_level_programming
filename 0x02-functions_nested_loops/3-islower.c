#include "main.h"
/**
 * _islower - checks for lowercase character
 *
 * @c: character to test
 *
 * Return: 1 if is a lowercase letter, 0 if isn't a lowercase letter
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	return (0);
}
