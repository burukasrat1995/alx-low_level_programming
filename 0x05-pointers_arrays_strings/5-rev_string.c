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

	char rev[i];
	int n = 0;

	while (i--)
	{
		rev[n] = s[i];
		n++;
	}
}
