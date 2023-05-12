#include <stdio.h>
/**
 * main - starting point of the code
 * @argv: The name of argument
 * @argc: The character to print
 * Return:success
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc >= 1)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
