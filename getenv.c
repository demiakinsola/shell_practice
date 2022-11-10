#include "main.h"

/**
 * main - This gets an envrionment variable.
 * Return: 0 on success.
 */

int main(void)
{
	char *value;

	value = getenv("PATH");
	printf("%s\n", value);
	return (0);
}
