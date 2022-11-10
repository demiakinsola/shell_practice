#include "main.h"

/**
 * main - This function prints the environment.
 * @argc: Number of arguments.
 * @argv: List of argument strings.
 * @env: Null terminated array of strings for environment.
 *
 * Return: 0 on success.
 */

int main(int argc, char **argv, char **env)
{
	unsigned int index = 0;
	while (env[index] != NULL)
	{
		printf("%s\n", env[index]);
		index++;
	}
	return (0);
}
