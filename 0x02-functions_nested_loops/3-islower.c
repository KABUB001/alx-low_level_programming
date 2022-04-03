#include "main.h"
/**
 * main - checks for lowercase character
 *
 * @ch: character to test
 *
 * Return: 1 if is a lowercase letter, 0 if isn't a lowercase letter
 */
int _islower(int ch)
{
	if (ch >= 'a' && ch <= 'z')
	{
		return (1);
	}

	return (0);
}
