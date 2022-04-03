#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - computes and prints
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a = 1024 / 3;
	int b = 1024 / 5;
	int x;
	int y;
	int c = 0;
	int d = 0;

	for (x = 1; x <= a; x++)
	{
		c += x * 3;
	}

	for (y = 1; y <= b; y++)
	{
		d += y * 5;
	}

	printf("%d", c + d);
	return (0);
}
