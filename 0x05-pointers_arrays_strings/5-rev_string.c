#include "main.h"
/**
 * rev_string - reverses a string
 * @s: the string
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0, n = 0;
	char r[i];

	while (s[i])
		i++;

	while (i--)
	{
		r[n] = s[i];
		n++;
	}

	while (n--)
	{
		s[i] = r[i];
		i++;
	}		
}
