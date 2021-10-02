//
//  main.c
//  pointers
//
//  Created by Pedro Jose Cuji on 1/26/17.
//  Copyright © 2017 Pedro Jose Cuji. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int i = 5;
    int *p ;
    p = &i; // I think p is pointing to the address of i
    
    
    printf("%d\n", i);  // 5
    printf("%d\n", p);    //address fo i
    printf("%d\n",*p);    //i = 5
    printf("%d\n", &i);   //address of i
    
    printf("second part \n");

    int j;
    j = *p; //this stores the value p poinst into
    
    int t;
    
    //p->t;  // why does this one does not work?
    
    
    printf("%d\n", j);

    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
