#include "main.h"

/**
 * main - This prints addresses of environ variable.
 * @ac: Number of arguments.
 * @av: Array of argument strings.
 * @env: Array of environment variables.
 * 
 * Return: 0 on success.
 */

int main(int ac, char *av[], char **env)
{
	printf("%p\n%p\n", env, environ);
	return (0);
}
