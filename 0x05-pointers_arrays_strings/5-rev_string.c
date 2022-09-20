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

	char r;
	int n = 0, half = i/2;

	while (half--)
	{
		r = s[i];
		s[i] = s[n];
		s[n] = r;
		n++;
	}
}
