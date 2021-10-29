#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * string_nconcat - Concatenates 2 strings
 * @s1: string one
 * @s2: string two
 * @n: Number of bytes
 * Return: The string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int s2_contribution, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (length(s2) > n)
		s2_contribution = n;
	else
		s2_contribution = length(s2);


	c = (char *)malloc((length(s1) + s2_contribution + 1) * sizeof(char));

	if (c == NULL)
	{
		free(c);
		return (NULL);
	}

	for (i = 0; i < length(s1); i++)
		*(c + i) = *(s1 + i);

	for (j = 0; j < s2_contribution; j++)
		*(c + i + j) = *(s2 + j);

	*(c + i + j) = '\0';

	return (c);

}

/**
 * length - length of a string
 * @str: The string
 * Return: length
 */

unsigned int length(char *str)
{
	unsigned int i;

	for (i = 0; *(str + i); i++)
		;

	return (i);
}