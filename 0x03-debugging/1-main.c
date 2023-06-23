#include "main.h"

/**
 * largest_number - returns the largest number of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest integer
 */
int largest_number(int a, int b, int c)
{
	int largest;
	if (a > b && b > c)
	{
		largest = a;
	}
	else if (b > a && a > c)
	{
		largest = b;
	}
	// comment out the else condition to avoid infinite loop
	// else
	//{
	// largest = c;
        //} 
	
	      return  largest = c;
}
