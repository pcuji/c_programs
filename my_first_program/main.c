//
//  main.c
//  my_fist_program
//
//  Created by Pedro Jose Cuji on 12/19/16.
//  Copyright © 2016 Pedro Jose Cuji. All rights reserved.
//

#include <stdio.h>
//#include<conio.h>

int gcd (int u, int v)
{
    int t;
    while (u> 0)
    {
        if (u < v)
        {
            t= u; u=v; v=t ;
        }
    }
    
    return v;
    
}


int main(int argc, const char * argv[]) {
    // insert code here...
    
    int age;
    float weight;
    char sex;
    age = 23;
    weight = 72.2;
    sex = 'M';

    printf("Hello, World!\n");
    printf ("hi learner\n");
    printf ("%i %f %c",age,weight,sex);
   // printf (age,weight,sex);
    
    //euclid algorithim
    
    int x,y;
    while (scanf("%d, %d", &x, &y) != EOF)
        if (x>0 && y>0)
            printf ( "%d %d %d\n", x, y , gcd (x,y));
    

    
//    getch();
    return 0;

}

