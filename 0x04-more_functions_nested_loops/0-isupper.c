#include "main.h"
/**
 * _isupper - checks for Uppercase character
 * @c: character to test
 * Return: 1 if @c is Uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	else
		return (0);
}
