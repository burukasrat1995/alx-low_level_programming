#include "main.h"
/**
 * rev_string - reverses a string
 * @s: the string
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0, n = 0, half;
	char r;

	while (s[i])
		i++;

	half = i/2;

	while (half--)
	{
		r = s[i];
		s[i] = s[n];
		s[n] = r;
		n++;
	}
}
