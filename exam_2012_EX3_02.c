#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>


int main () {
    if (fork() != 0) {
	wait(NULL);
	printf("0");
    } 
    else if (fork() == 0) {
	printf("1");
    } else {
	fork();
	printf("2");
	exit(0);
    }
    printf("3");
    return 0;
}
