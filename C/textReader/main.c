#include <stdio.h>
#include <string.h>

int main ( void )
{
   int count=0;
   static const char filename[] = "frases.txt";
   FILE *file = fopen ( filename, "r" );
   char str[128];

   if ( file != NULL )
   {
      char line [ 128 ]; /* or other suitable maximum line size */
      while ( fgets ( line, sizeof line, file ) != NULL ) /* read a line */
      {
 	 count = strlen(line);
         fputs ( line, stdout ); /* write the line */
 	 printf("%d\n", count);

      }
      fclose ( file );
   }
   else
   {
      perror ( filename ); /* why didn't the file open? */
   }
   return 0;
}
