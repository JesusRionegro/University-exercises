#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main ( void )
{
   int count=0;
   static const char filename[] = "frases.txt";
   FILE *file = fopen ( filename, "r" );
   FILE *f = fopen("fraseslimpias.txt", "w");
   char str[128];

if (f == NULL)
{
    printf("Error opening file!\n");
    exit(1);
}

   if ( file != NULL )
   {
      char line [ 128 ]; /* or other suitable maximum line size */
      while ( fgets ( line, sizeof line, file ) != NULL ) /* read a line */
      {
 	 count = strlen(line);
         fputs ( line, stdout ); /* write the line */
 	 printf("%d\n", count);
	fprintf(f, "%s\n", line);


   	}

   }else
   {
      perror ( filename ); /* why didn't the file open? */
   }
	fclose(f);
	fclose ( file );
   return 0;
}
