#include <stdlib.h>
#include <stdio.h>
/**
*main - is a main
*@argc: is a int
*@argv: is a pointer
*Return: 0
	    */
int main(int argc, char *argv[])
{
	int mul;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
