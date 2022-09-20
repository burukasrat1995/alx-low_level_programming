#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - prints string in reverse
 * @s: the string
 * Return: void
 */
void print_rev(char *s)
{
	int i = strlen(s);

	while (i >= 0)
	{
		printf("%c", s[i--]);
	}
	_putchar('\n');
}
