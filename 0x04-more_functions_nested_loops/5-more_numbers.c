#include "main.h"
#include <stdio.h>

/**
 * more_numbers - function that prints 10 times the number
 *  from 0 to 14, followed by a new line.
 */
void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i >= 10)
			{
				_putchar('0' + i / 10);
			}

			_putchar('0' + i % 10);
		}
		_putchar('\n');
	}
}
