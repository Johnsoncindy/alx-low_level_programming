#include "main.h"
#include <stdio.h>

/**
 * print_line - function that draw a straight line
 * in the terminal
 * @n: number of times the character should be printed
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
