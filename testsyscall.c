#include <unistd.h>
#include <sys/syscall.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	int retval = syscall(353, 24);
	if (retval < 0)
	{
		perror("COMP7506 system call returned with an error code.");
	}
	printf("COMP7506 system call returned %d.\n", retval);
	return 0;
}