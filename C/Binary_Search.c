#include <stdio.h>

int busquedaBinaria(int  vector[], int dato) {
   size_t n = sizeof(vector);
   int centro,inf=0,sup=n;
   while(inf<=sup){
      centro=((sup-inf)/2)+inf;
      if(vector[centro]==dato)       return centro;
      else if(dato < vector[centro]) sup=centro-1;
      else                           inf=centro+1;
   }
   return -1;
}

int main()
{
    int  vector[]={12,14,16,18,20,22,26,27,28};
    int dato=14;
    int posicion=busquedaBinaria(vector,dato);
    printf("El valor buscado se encuentra en la posición: (empezando desde 0)\n");
    if(posicion>=0){
        printf("%d",posicion);
    }else{
        printf("El valor no se encuentra en el vector!");  
    }

    return 0;
}
