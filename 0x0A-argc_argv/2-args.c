#include "main.h"
#include <stdio.h>

/**
 * main - Prints all the args content
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always zero
 */
int main (int argc, char *arggv[])
{
	int i;
	for (i = 0; i < argc; i++)
	{
	printf("%s\n", arggv[i]);
	}
	return (0);
	}
