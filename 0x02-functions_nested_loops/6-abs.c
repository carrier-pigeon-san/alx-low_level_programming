#include "main.h"
/**
 * _abs - computes the absolute vale of an integer
 * @int: number whose absolute value is to be determined
 *
 * Return: Absolute value
 */
int _abs(int);
int _abs(int n)
{

	if (n < 0)
	{
		return (n * -1);
		
	}
	else
	{
		return (n);
	}

}
