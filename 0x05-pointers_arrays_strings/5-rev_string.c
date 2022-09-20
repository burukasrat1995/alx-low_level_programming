#include "main.h"
/**
 * rev_string - reverses a string
 * @s: the string
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	char r[];
	int n = 0;

	while (i--)
	{
		r[n] = s[i];
		n++;
	}

	n = 0;
	while (r[n])
	{
		s[n] = r[n];
		n++;
	}
}
