#include <stdio.h>
#include <unistd.h>

int main(void)
{
	int a = 4;
	int b = 3;
	pid_t ppid;
	
	int sum = a + b;
	
	printf("sum is %d\n", sum);
	
	ppid = getppid();
	printf("ppid is %u\n", pid);

	return 0;
}
