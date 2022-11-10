#include "main.h"

/**
 * main - This prints each directory contained in the
 * environment variable PATH.
 * Return: 0 on success.
 */

int main(void)
{
	char *value = getenv("PATH");
	char *token;
	char *delimiter = ":";

	token = strtok(value, delimiter);
	while (token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, delimiter);
	}
	free(token);
	return (0);
}
