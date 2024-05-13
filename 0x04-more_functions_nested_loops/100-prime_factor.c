#include <stdio.h>
int is_prime(long int number);
/**
 * main - finds and prints largest prime factor of number 612852475143
 * Return: Always 0 (Success)
 */
int main(void)
{
	long prime = 2;
	long int count = 2;
	long int num = 612852475143;

	while (count <= num / 2)
	{
		int check = is_prime(count);

		if (num % count == 0 && check == 1)
		{
			prime = count;
			num /= count;
			continue;
		}
		else
			count++;
	}
	printf("%ld\n", prime);
	return (0);
}

/**
 * is_prime - checks whether a number is a prime number
 * @number: number to be checked
 *
 * Return: 1 (True), 0 (False)
 */
int is_prime(long int number)
{
	long count = 2;

	while (count <= number / 2)
	{
		if (number % count == 0)
			return (0);
		count++;
	}
	return (1);
}
