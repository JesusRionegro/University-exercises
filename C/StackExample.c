#include<stdio.h>
#include<stdlib.h>
struct stackarr;
typedef struct stackarr * Stack;
 
struct stackarr
{
    int Capacity;
    int TopOfStack;
    int *Array;
};

Stack s;

void MakeEmpty(Stack s)
{
    s->TopOfStack = -1;
}
 
Stack CreateStack(int MaxElements)
{
    Stack s;
    s = (struct stackarr*) malloc(sizeof(struct stackarr));
    s->Array = (int *)malloc(sizeof(int) * MaxElements);
    s->Capacity = MaxElements;
    MakeEmpty(s);
    return s;
}
 
 
int full()
{
    return s->TopOfStack == s->Capacity - 1; // Si el valor es igual a la capacidad -1, devuelve true
}
 
int empty()
{
    return s->TopOfStack == -1; //Si el valor es igual a -1 devuelve True
}
 
void Push(int x)
{
    if(full())
        printf("Pila llena, no se permiten más inserciones\n\n");
    else
        s->Array[++s->TopOfStack] = x;
}
 
void Pop()
{
    if(empty())
        printf("Pila vacia\n\n");
    else
        printf("Valor eliminado=%d\n\n",s->Array[s->TopOfStack]);
        s->TopOfStack--;
}
 
int Top(Stack s)
{
    if(empty())
        printf("Pila vacia\n\n");
    else
        return s->Array[s->TopOfStack];
}
 
int TopAndPop(Stack s)
{
    if(empty())
        printf("Pila vacia\n\n");
    else
        return s->Array[s->TopOfStack--];
}
 
void status()
{
    int i;
    if(empty())
        printf("Pila vacia\n\n");
    else
    {
        printf("Los elementos en la pila son :: ");
        for(i=s->TopOfStack; i >= 0; i--)
            printf("\nEn la posición %d=%d,  ",i,s->Array[i]);
        printf("\n\n");
    }
}
 
 
 
void main()
{

    s = CreateStack(5); //Limitamos el número de posiciones a 5
    printf("Valor de la pila colocado a %d \n", *s);
    Push(10); //Agregamos elemento
    Push(20);
    Push(30);
    Push(40);
    printf("Tras la inserción de los 4º primeros elementos \n");
    status();
    
    printf("Borramos 2 elementos \n");
    Pop(); //Eliminamos elemento
    Pop();
    printf("Tras borrar dos elementos \n");
    status(); 
    Push(50);
    Push(60);
    Push(70);
    Push(80);
    printf("Mensaje anterior obtenido al tratar de agregar un sexto elemento\n");
    printf("Ahora, intentamos borrar 6 elementos seguidos \n");
    Pop(); 
    Pop();
    Pop(); 
    Pop();
    Pop(); 
    Pop();
    printf("El aviso de 'pila vacia' nos avisa de que no podemos seguir eliminando contenido \n");
    return 0;
}
