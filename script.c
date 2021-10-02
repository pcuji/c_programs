#include <stdio.h>
//b1 =1 inside loop
//b2 =0 outside loop

int main( int argc, char *argv[]){
     FILE *fp;
     int c;
     int i,j;
    
    int size = sizeof (char *);
     //fp = fopen("file.txt","w");
    fp = fopen("neig.txt","w");
     for(i=0;i<100000;i++){
         for (j=0;j<3;j++){
             c++;
	     //fprintf(fp,"jogging\t1\t8\n");	//11 b1T => branch 1 and taken
         fprintf(fp,"pilsen\t1000\t8\n");	//11 b1T => branch 1 and taken
             
         }
	fprintf(fp,"cicero\t20000\t9\n");		//10 b1NT => branch 1 Not taken
	fprintf(fp,"lincon Park\t100\t7\n");		//01 b0T  => branch 0 T
     }
     fprintf(fp,"bornzeville\t400\t5\n");		//00 b0NT  => branch 0 Not taken

     fclose(fp);
     return 0;
}
