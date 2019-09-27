#include <stdio.h>
#include <math.h>

/**
 * prime - number is prime
 * @p: is number
 *
 * Return
 */
int prime(unsigned long p)
{
	unsigned long i = 2;

	while (i <= sqrt(p))
	{
		if (p % i == 0)
			return (0);
		i++;
	}
	return (1);
}

/**
 * main - prints largest prime factor of 612852475143 followed by '\n'
 *
 * Return: Always 0, Success!
 */
int main(void)
{
	unsigned long num = 612852475143, i = 2, correct;

	while (i <= num / 2)
	{
		if (num % i == 0)
		{
			correct = num / i;
			num /= i;
			i--;
			if (prime(correct) == 1)
			{
				printf("%lu\n", correct);
				break;
			}
		}
		i++;
	}
	return (0);
}
