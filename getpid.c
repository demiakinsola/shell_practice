#include <unistd.h>
#include <stdio.h>

/**
 * main - This gets the Process ID(PID) of a process.
 * Return: Always 0 on success.
 */

int main(void)
{
	pid_t my_pid;

	my_pid = getpid();
	printf("%u\n", my_pid);
	return (0);
}
