#include "main.h"
#include <stdio.h>
/**
 * main - main function
 * Return: void
 */
int main()
{
	int number = 0;
	int result = 0;

	while (number < 1024)
	{
		if (((number % 3) == 0 || (number % 5) == 0))
		{
			result =+ number;
			number++;
		}
		else
			number++;
	}
}
