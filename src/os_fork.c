#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
int main (int argc, char *argv[]) {
   pid_t childpid = 0;
   int i, n, k, m, index;
   int c, nonoptarg;

   opterr = 0;
   
   if ( argc < 2 ) {
   		fprintf(stderr, "Usage : %s -n <int> -k <int> -m <int>\n", argv[0] );
	    return 1;
   }

   while((c = getopt (argc, argv, "h::k:m:n:")) != -1)
    switch (c)
    {
      case 'n':
          n = atoi(optarg);
          break;
	  case 'k':
	      k = atoi(optarg);
	      break;
	  case 'm':
	      m = atoi(optarg);
	      break;
	  case 'h':
	      fprintf(stderr, "Usage : %s -n <int> -k <int> -m <int>\nn = number of process to fork\nk = number of times to loop\nm = time to sleep in millis\n\n", argv[0] );
	      return 1;
	  case '?':
	      fprintf(stderr, "Try `%s -h' for more information.\n", argv[0]);
		  return -1;
	  default:
	      fprintf(stderr, "Usage: %s -n <int> -k <int> -m <int>\n", argv[0]);
	      abort();
	  }
	  
	  if(argc != 4){
	  	fprintf(stderr, "Try `%s -h' for more information.\n", argv[0]);
	  	return -1;
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
	  
	  if(n < 1 || k < 1 || m < 1) { 
	  		fprintf(stderr, "%s Error: values of optional params should be greater than 0.\n", argv[0]);
	  		return -1;
	  }

   // for (i = 1; i < n; i++)
//       if (childpid = fork())
//          break;
//    for(i = 0; i < k; i++) {
//    		fprintf(stderr, "i:%d  process ID:%ld  parent ID:%ld  child ID:%ld\n",
//            i, (long)getpid(), (long)getppid(), (long)childpid);
//         sleep(m);
//    }
   return 0;
}