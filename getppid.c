#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>

/**
 * main - This gets the process ID of the parent of the calling process.
 * Return: Always 0 on success.
 */

int main(void)
{
	pid_t my_ppid; /* declare a data type for process ID */

	my_ppid = getppid();
	printf("%u\n", my_ppid);
	return (0);
}
