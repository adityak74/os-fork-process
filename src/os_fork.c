#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
int main (int argc, char *argv[]) {
   pid_t childpid = 0;
   int i, n, nchars, j;
   int c;

   if (argc != 3){   /* check for valid number of command-line arguments */
      fprintf(stderr, "Usage: %s processes nchars\n", argv[0]);
      return 1;
   }
   n = atoi(argv[1]);
   nchars = atoi(argv[2]);
   char mybuf[nchars+1];
   for (i = 1; i < n; i++)
      if (childpid = fork())
         break;
   for (j=0; j < nchars; j++)
      fscanf(stdin, "%c", &mybuf[j]);
   mybuf[j] = '\0';
   fprintf(stderr, "processID %ld : %s", (long)getpid(), mybuf);
   return 0;
}
