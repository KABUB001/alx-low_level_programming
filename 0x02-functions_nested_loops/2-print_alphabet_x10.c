#include "main.h"
#include "1-alphabet.c"
/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	int a;

	for (a = 1; a <= 10; a++)
	{
		 print_alphabet();
	}
}
