#include "main.h"
/**
 * _isupper - checks if the int is upper case
 * @c: value of the character
 * Return: 1 if uppercase 0 otherwise
 */
int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A') /* checks if c is in uppercase range*/
		return (1);
	else
		return (0);
}
