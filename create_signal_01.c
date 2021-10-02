#include <stdio.h>
#include <signal.h>


void myhandler(int mysignal){



}


int main(int argc, char *argv[]){

    int i;
    signal(SIGTERM, myhandler);
    while(1){
	printf("i = %d\n", i );
	i++;
	sleep(1);


	
    }
    return 0;
}


