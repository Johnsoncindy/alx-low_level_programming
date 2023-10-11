#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - function that prints only
 * a diagonal line in the terminal
 * @n: is the number of times the character should be printed
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
