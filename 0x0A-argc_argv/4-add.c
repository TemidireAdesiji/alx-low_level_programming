<<<<<<< HEAD
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main -add positive numbers from
 * the command line
 *
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: the product of the two numbers
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;
	unsigned long int j;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);

	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < strlen(argv[i]); j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
=======
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds numbers
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to strings
 *
 * Return: 0 if no errors, else 1
 */
int main(int argc, char *argv[])
{
	int a = 0, i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				puts("Error");
				return (1);
			}
		}
	}
	for (i = 1; i < argc; i++)
	{
		a += atoi(argv[i]);
	}
	printf("%d\n", a);
>>>>>>> fde2d928bf6c005533a9e713d2a9a992001747e2
	return (0);
}
