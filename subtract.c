#include <stdio.h>
#include <unistd.h>

int main(void)
{
	int a = 9;
	int b = 3;
	int diff = a - b;
	pid_t ppid;

	printf("difference is %d\n", diff);

	ppid = getppid();

	printf("my ppid is %d\n", ppid);

	return 0;
}
