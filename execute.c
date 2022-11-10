#include "main.h"

pid_t fork_child(void); /*declare helper function */

/**
 * main - This creates a program that executes the command
 * ls -l /tmp in 5 different child processes. Each child
 * should be created by the same process (the father).
 * Wait for a child to exit before creating a new child.
 *
 * Return: 0 on success.
 */

int main(void)
{
	char *argv[] = {"/bin/ls", "-l", "/tmp/", NULL};
	pid_t child_ret;
	int index; /* for loop */
	int status;

	for (index = 0; index < 5; index++)
	{
		child_ret = fork_child();
		if (child_ret == -1)
			return (-1);
		if (child_ret == 0)
		{
			if (execve(argv[0], argv, environ) == -1)
				return (-1);
		}
		else if (child_ret > 0)
			wait(&status);
	}
	return (0);
}

/**
 * fork_child - This helper function forks a child process.
 *
 * Return: Process ID on success, -1 on failure.
 */

pid_t fork_child(void)
{
	pid_t child = fork();

	if (child < 0)
		return (-1);
	exit(0);
}
