#include <stdio.h>
#include <stdlib.h>
/**
  * main - main
  * @argc: argumetns num
  * @arcv: argumetns
  * Return: 0 on successs 1 otherwise
  */
int main(int argc, char *arcv[])
{
	int i;

	if (argc > 1)
	{
		i = atoi(arcv[1]) * atoi(arcv[2]);
		printf("%d\n", i);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
