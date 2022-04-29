#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints argumetsss number
 * @argc: argumetns number
 * @argv: argumets string
 * Return: 0 on success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
		printf("%d", argc - 1);
	printf("\n");

	return (0);
}
