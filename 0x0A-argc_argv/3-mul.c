<<<<<<< HEAD
#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiply two numbers from the command line
 *
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: the product of the two numbers
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
=======
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to strings
 *
 * Return: 0 if no errors, else 1
 */
int main(int argc, char *argv[])
{
	int a, b, c;

	if (argc != 3)
	{
		puts("Error");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	c = a * b;
	printf("%d\n", c);
>>>>>>> fde2d928bf6c005533a9e713d2a9a992001747e2
	return (0);
}
