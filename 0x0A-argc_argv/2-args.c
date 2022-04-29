#include <stdio.h>
#include <stdlib.h>
/**
 * main - shows the arguments
 * @argc: number of arguments
 * @argv: argumets srting
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s", argv[i]);
			printf("\n");
		}
	}

	return (0);
}
