#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: number to calculate the natural square root
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1);
	return (_sqrt(n, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @n: number to calculate the square root of
 * @i: iterate
 * Return: the resulting square root
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;
	if (sqrt > n)
	return (-1);
	if (sqrt == n)
	return (i);
	return (_sqrt(n, i + 1));
}
