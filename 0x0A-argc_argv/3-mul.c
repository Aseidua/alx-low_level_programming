#include <stdio.h>
#include <stdlib.h>

/**
* main - entry multiply two numbers
* @argc: arguement count of variables
* @argv: array of pointers to arguement strings
* Return: result of  1
**/
int main(int argc, char *argv[])
{
	int u, p, result;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
/* atoi convert a string to an int */
	u = atoi(argv[1]);
	p = atoi(argv[2]);
	result = u * p;
	printf("%d\n", result);
	return (0);
}
