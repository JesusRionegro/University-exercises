#include <stdio.h>
#include <string.h>
 
#define MAXCHAR 1000
int main() {
    FILE *fp;
    char str[MAXCHAR];
    char* filename = "frases.txt";

	int count=0;

 
    fp = fopen(filename, "r");
    if (fp == NULL){
        printf("No se pudo abrir el archivo %s",filename);
        return 1;
    }
    while (fgets(str, MAXCHAR, fp) != NULL)
	count = strlen(str);
        printf("%s %d\n", str, count);
    fclose(fp);

    return 0;
}
