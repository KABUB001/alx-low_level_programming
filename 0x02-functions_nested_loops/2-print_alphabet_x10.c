#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	int a;
	int ch;

	for (a = 1; a <= 10; a++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
	}
}
