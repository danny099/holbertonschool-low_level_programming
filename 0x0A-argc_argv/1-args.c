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
	int i;

	for (i = 0; argv[i] != '\0'; i++)
	{
	}
	printf("%d\n", argc - 1);
	return (0);
}
