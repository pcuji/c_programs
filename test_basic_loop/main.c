//
//  main.c
//  test_basics_loop
//
//  Created by Pedro Jose Cuji on 1/21/17.
//  Copyright © 2017 Pedro Jose Cuji. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    for ( int j=0; j<= 10 ; j++){
        if (j==5)
            //printf("%d\n", j);
            continue;
           printf("%d\n", j);

    }
    printf("Hello, World!\n");
    return 0;
}
