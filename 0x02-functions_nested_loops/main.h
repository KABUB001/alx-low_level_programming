#include <stdio.h>
#include <unistd.h>
/**
 * main - use printf function
 *
 * Return: Always 0 (success)
 */

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 *
 *
 *
 *
 */
void print_alphabet(void)
{
	char ch;
	for (ch='a'; ch <= 'z'; ch++)
	{
		return (write(1,&ch "\n",3));
	}	


}
