#include "main.h"

/**
 * _islower - function that computes the absolute
 *            value of an integer
 *
 * @n: takesin integer type input for function
 *
 * Return: Always 0(Success)
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
