#include "main.h"
#include <stdio.h>

/**
 * _isdigit - function that checks for digit
 * @c: digit
 * Return: 1 if digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
