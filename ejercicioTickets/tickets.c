#include <stdio.h>
#include <string.h>
 
#define MAXCHAR 1000
int main() {
  //Creamos las variables
    FILE *fp;
    char str[MAXCHAR];
    char* filename = "ticket.txt";
    int count=0;

  //Abrimos el fichero
    fp = fopen(filename, "r");
    if (fp == NULL){
      //En caso de no encontrar el archivo
        printf("No se pudo abrir el archivo %s",filename);
        return 1;
    }
  
   //Si se encuentra el archivo se lee el contenido (de momento solo imprime por pantalla la última línea)
    while (fgets(str, MAXCHAR, fp) != NULL)
	      count = strlen(str);
        printf("%s %d\n", str, count);
    fclose(fp);

    return 0;
}
