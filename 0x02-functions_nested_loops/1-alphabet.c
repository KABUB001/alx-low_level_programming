#include "main.h"
/**
 * print_alphabet - prints alphabet a to z
 *
 * Return: Always 0
 */
int print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}

	_putchar('\n');
	return (0);

}
