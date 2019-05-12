/************************************************************
Autor: Jon Ander Oribe Sánchez
Fecha: 12/05/2019
Asignatura: Estructura de Datos y Algoritmos, curso 18/19
Modo: punteros
************************************************************/

#include <stdlib.h>
#include <stdio.h>
 
typedef struct _nodo {
   int valor;
   struct _nodo *siguiente;
} tipoNodo;
 
typedef tipoNodo *pNodo;
typedef tipoNodo *Pila;
 
/* Funciones con pilas: */
void Push(Pila *l, int v);
int Pop(Pila *l);
 
int main() {
   Pila pila = NULL; //Creamos la pila
   printf("Elementos añadidos: ");
   Push(&pila, 17);
   printf("%d, ", *pila);
   Push(&pila, 23);
   printf("%d, ", *pila);
   Push(&pila, 12);
   printf("%d, ", *pila);
   Push(&pila, 45);
   printf("%d\n ", *pila);
   printf("Elementos borrados: ");
   printf("%d, ", Pop(&pila));
   printf("%d ", Pop(&pila));

   getchar();
   return 0;
}

void Push(Pila *pila, int v) {
   pNodo nuevo;
 
   /* Crear un nodo nuevo */
   nuevo = (pNodo)malloc(sizeof(tipoNodo));
   nuevo->valor = v;
   
   /* Añadimos la pila a continuación del nuevo nodo */
   nuevo->siguiente = *pila;
   /* Ahora, el comienzo de nuestra pila es en nuevo nodo */
   *pila = nuevo;
}

int Pop(Pila *pila) {
   pNodo nodo; /* variable auxiliar para manipular nodo */
   int v;      /* variable auxiliar para retorno */
   
   /* Nodo apunta al primer elemento de la pila */
   nodo = *pila;
   if(!nodo) return 0; /* Si no hay nodos en la pila retornamos 0 */
   /* Asignamos a pila toda la pila menos el primer elemento */
   *pila = nodo->siguiente;
   /* Guardamos el valor de retorno */
   v = nodo->valor; 
   /* Borrar el nodo */
   free(nodo);
   return v;
}
