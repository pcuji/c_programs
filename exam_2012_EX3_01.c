#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
int main () {
    fork();
	printf("0");
    if (fork() == 0) {
	/* this next exec prints "1" */
	execl("/bin/echo", "echo", "1", NULL);
	fork();
	printf("2");
    }
    printf("3");
    return 0;
}
