#include "main.h"
/**
 * _abs - absolute value of a number
 * Return: the absolute value
 * @c: value of the number
 */
int _abs(int c)
{
	if (c < 0)
		return (c*-1);
	else if (c >= 0)
		return (c);
}
