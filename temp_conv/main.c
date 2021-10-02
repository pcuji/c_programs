//
//  main.c
//  temp_conv
//
//  Created by Pedro Jose Cuji on 1/18/17.
//  Copyright © 2017 Pedro Jose Cuji. All rights reserved.
//

#include <stdio.h>
/*print conversions, loops
 */

main ()
{
    
    float fahr, celsius;
    int lower, upper, step;
    char *key;
    void *val;
    
    char y = "h";
    key= &y;
    
    
    
    
    
    lower =0;
    upper =300;
    step=20;
    
    fahr = lower;
    while (fahr <= upper ) {
        celsius = (5.0/9.0) * (fahr-32);
        printf ("%3.2f\t%6.2f\n", fahr , celsius);
        fahr= fahr+step;
    }
    for (fahr =0; fahr <= 300; fahr= fahr + 20 )
        printf ( "%3f %6.1f\n", fahr, (5.0/9.0)*(fahr -32));
    
    printf( "%c\n", y);
    printf( "%c\n", key);
    printf("Hello, World!\n");
    return 0;
}
