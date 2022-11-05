#include <stdio.h>
#include <string.h>

/**
 * main - This splits a string and returns an array of each word of the string.
 * Return: 0, on success.
 */

int main(void)
{
	char str[18] = "the-shell-project";
	char *token; /* pointer to token */
	char delim[2] = "-"; /* delimeiter */

	token = strtok(str, delim);
	while (token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, delim);
	}
	return (0);
}
