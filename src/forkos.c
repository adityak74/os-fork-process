#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main (int argc, char *argv[]) {
   pid_t childpid = 0;
   int i, n, nchars, j, k, index;
   int c, nonoptarg = 0;
   
   opterr = 0;
   
   if ( argc < 2 ) {
   		fprintf(stderr, "Usage : %s -n processes -k nchars\n", argv[0] );
	    return 1;
   }
   
   while((c = getopt (argc, argv, "h::n:k:")) != -1)
    switch (c)
    {
      case 'n':
          n = atoi(optarg);
          break;
	  case 'k':
	      nchars = atoi(optarg);
	      break;
	  case 'h':
	      fprintf(stderr, "Usage: %s -n processes -k nchars\n", argv[0] );
	      return 1;
	  case '?':
	      fprintf(stderr, "Try `%s -h' for more information.\n", argv[0]);
		  return -1;
	  default:
	      fprintf(stderr, "Usage: %s -n processes -k nchars\n", argv[0]);
	      abort();
	  }
   
   if( optind < argc ) {
	  		nonoptarg = 1;
	  	for (index = optind; index < argc; index++){
    		printf ("Non-option argument %s\n", argv[index]);
      	}
      }
    	
      if(nonoptarg){
      		fprintf(stderr, "Try `%s -h' for more information.\n", argv[0]);
	  		return -1;
	  }
	  
	  if(n < 1 || nchars < 1) { 
	  		fprintf(stderr, "%s Error: values of params should be greater than 0.\n", argv[0]);
	  		return -1;
	  }
	  
   char mybuf[nchars+1];
   for (i = 1; i < n; i++)
      if (childpid = fork())
         break;
   // wait(); - Fix for Prob#8
   for (j=0; j < nchars; j++){
      fprintf(stdout, "\nCharacter being entered for process%d for iter%d: ", i, j);
      scanf(" %c", &mybuf[j]);
   }
   if(j>=nchars)
   	mybuf[j] = '\0';
   fprintf(stderr, "processID %ld : %s\n", (long)getpid(), mybuf);
   return 0;
}
