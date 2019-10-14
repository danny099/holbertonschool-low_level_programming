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
	int i, sum, number;

	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			number = atoi(argv[i]);
			if (number != 0)
			{
				sum += number;
			}
			else
			{
				printf("Error\n");
				return (1);
			}

		}
		printf("%d\n", sum);
	}
	

	return (0);
}
