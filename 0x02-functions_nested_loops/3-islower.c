#include "main.h"
/**
 * _islower - checks lowercase letters
 * Return: 1 if c is lowercase or 0 otherwise
 */
int _islower(int c)
{
	if (c >= 122 && c <= 97)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
