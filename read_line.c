#include <stdio.h>
#include <stdlib.h>

/**
 * main - This program prints all the arguments, without using ac.
 *Return: 0 on success.
 */

int main(void)
{
	char **buffer;
	size_t bytes = 64;
	int index = 0;
	ssize_t ret_bytes; /* returned bytes for getline func. */

	buffer = malloc(sizeof(bytes)); /* allocate memory */
	
	while (1) /* infinite loop */
	{
		printf("$ ");
		ret_bytes = getline(buffer, &bytes, stdin);
		if (ret_bytes == -1) /* on failure/EOF */
			break;
		while (buffer[index])
		{
			printf("%s", buffer[index]);
			index++;
		}
		index = 0;
	}
	return (0);
}
