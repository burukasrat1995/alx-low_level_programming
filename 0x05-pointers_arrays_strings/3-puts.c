#include "main.h"
/**
 * _puts - prints chars
 * @str: the string
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		printf("%c", str[i]);
		i++;
	}
	printf('\n');
}
