#include "main.h"
#include <stdio.h>
/**
 * main - main function
 * Return: void
 */
int main(void)
{
	int number = 0;
	int result;

	while (number < 1024)
	{
		if (((number % 3) == 0 || (number % 5) == 0))
		{
			result = result + number;
			number++;
		}
		else
			number++;
	}
	printf("%d\n", result);
	return (0);
}
