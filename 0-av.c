#include <stdio.h>

/**
 * main - This prints all the arguments without using ac.
 * @ac: Number of items in av.
 * @av: Null terminated array of strings.
 * Return: Always 0, on success.
 */

int main(int ac, char **av)
{
	int index; /* index for string */

	for (index = 0; av[index]; index++)
	{
		printf("%s\n", av[index]);
	}
	return (0);
}
