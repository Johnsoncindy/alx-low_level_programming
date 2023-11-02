#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * string_nconcat - function that concatenate two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of characters to concatenate
 * Return: pointer to a newly allocated space memory, which contains s1,
 * if the function fails, it should return NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int s1_len;
	unsigned int s2_len;
	unsigned int concat_len;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}
	s1_len = strlen(s1);
	s2_len = strlen(s2);

	if (n >= s2_len)
	{
		n = s2_len;
	}
	concat_len = s1_len + n;

	p = malloc(concat_len + 1);

	if (p == NULL)
	{
		return (NULL);
	}
	strcpy(p, s1);
	strncat(p, s2, n);

	return (p);
}
