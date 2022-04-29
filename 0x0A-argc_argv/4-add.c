#include <stdio.h>
#include <stdlib.h>
/**
* main - main
* @argc: argumetns num
* @argv: argumetns
* Return: 0 on successs 1 otherwise
*/
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (!(atoi(argv[i])))
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("%d", sum);
		printf("\n");
	}
	return (0);
}
