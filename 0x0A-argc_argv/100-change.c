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
	int cents, change, i;

	change = 0;
	if (argc == 2)
	{
		cents = atoi(argv[1]);

		if (cents < 0)
			printf("0\n");
		else
		{
			int arrayCents[] = {25, 10, 5, 2, 1};

			for (i = 0; i < 5; i++)
			{
				change += cents / arrayCents[i];
				cents = cents % arrayCents[i];
			}
			printf("%d\n", change);
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
