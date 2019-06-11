#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char * RemoveSpaces(char* source)
{
  char* i = source;
  char* j = source;
  while(*j != 0)
  {
    *i = *j++;
    if(*i != ' ')
      i++;
  }
  *i = 0;
  return source;
}

int main ( void )
{
   int count=0;
   static const char filename[] = "frases.txt";
   FILE *file = fopen ( filename, "r" );
   FILE *f = fopen("fraseslimpias.txt", "w");
   char str[128];

if (f == NULL)
{
    printf("Error al abrir!\n");
    exit(1);
}

   if ( file != NULL )
   {
      char line [ 128 ]; 
      while ( fgets ( line, sizeof line, file ) != NULL ) /* leemos la línea */
      {
 	 count = strlen(line);
         fputs ( line, stdout ); /* escribimos */
 	 printf("La longitud es: %d\n", count);
	 char respuestaTrimeada[1000];
	 strcpy(respuestaTrimeada,RemoveSpaces(line));
	 fprintf(f, "%s\n", respuestaTrimeada);


   	}

   }else
   {
      perror ( filename ); 
   }
	fclose(f);
	fclose ( file );
   return 0;
}
