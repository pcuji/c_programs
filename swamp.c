#include <stdio.h>

//creating a swamp function

   void swap (int *p, int *q) {
       int tmp =*p;
	*p = *q;
	*q = tmp;

}

int main () {
   int a = 5, b =10;
   swap (&a, &b);
printf( "a=%d ,b= %d", a , b );


}


