#include <stdlib.h>
#include <stdio.h>
#include "towers.h"

int main(int argc, char **argv)
{int n ;
    int from ;
    int dest ;
    if(!(argc == 1)&&(atoi(argv[2])>3||atoi(argv[2])<1||atoi(argv[3])>3||atoi(argv[3])<1||atoi(argv[2]) ==atoi(argv[3])))
   {printf("Error: invalid input");
     exit( 1);
    }
						 else{
  if (argc ==1)
    { n = 3;
     from = 1;
     dest = 2; }
  if (argc == 2)
    {n =atoi(argv[1]);
      from = 1;
     dest = 2;  
          }
  else if (argc == 4)
    {
      
      n =atoi(argv[1]);
	      from =atoi(argv[2]) ;
	      dest= atoi(argv[3]);}
 

   
    if (argc > 1) {
        n = atoi(argv[1]);
   }
    towers(n, from, dest);
    exit(0);
						 }}
