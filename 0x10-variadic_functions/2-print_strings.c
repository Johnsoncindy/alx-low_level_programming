#include "variadic_functions.h"
#include "stdio.h"
#include <stdarg.h>
/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: is the string to be printed between the strings
 * @n: is the number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list args;

	va_start(args, n);

	if (!separator)
	{
		separator = "";
	}
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (!str)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
