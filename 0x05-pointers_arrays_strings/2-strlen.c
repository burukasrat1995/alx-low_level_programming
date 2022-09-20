#include "main.h"
/**
 * _strlen - gives the length of the string
 * @s: the character
 * Return: the length
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
