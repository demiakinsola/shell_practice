#include "main.h"

/**
 * main - This prints the envrionment using the global variable,
 * environ.
 * Return:0 on success.
 */

int main(void)
{
	unsigned int index = 0;
	//char **p = environ; /* to prevent seg fault */

	while(environ[index] != NULL)
	{
		printf("%s\n", environ[index]);
			index++;
	}
	return (0);
}
