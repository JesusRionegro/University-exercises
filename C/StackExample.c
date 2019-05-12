/************************************************************
Autor: Jon Ander Oribe Sánchez
Fecha: 12/05/2019
Asignatura: Estructura de Datos y Algoritmos, curso 18/19
Modo: punteros
************************************************************/

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
 
void DisposeStack(Stack s)
{
    if(s != NULL)
    {
        free(s->Array);
        free(s);
    }
}
 
int isFull(Stack s)
{
    return s->TopOfStack == s->Capacity - 1;
}
 
int isEmpty(Stack s)
{
    return s->TopOfStack == -1;
}
 
void Push(int x)
{
    if(isFull(s))
        printf("Full Stack\n\n");
    else
        s->Array[++s->TopOfStack] = x;
}
 
void Pop()
{
    if(isEmpty(s))
        printf("Empty Stack\n\n");
    else
        s->TopOfStack--;
}
 
int Top(Stack s)
{
    if(isEmpty(s))
        printf("Empty Stack\n\n");
    else
        return s->Array[s->TopOfStack];
}
 
int TopAndPop(Stack s)
{
    if(isEmpty(s))
        printf("Empty Stack\n\n");
    else
        return s->Array[s->TopOfStack--];
}
 
void Display(Stack s)
{
    int i;
    if(isEmpty(s))
        printf("Empty Stack\n\n");
    else
    {
        printf("The Stack Elements are :: ");
        for(i=s->TopOfStack; i >= 0; i--)
            printf("%d  ",s->Array[i]);
        printf("\n\n");
    }
}
 
 
 
void main()
{
    int n, x, ch, i;

    //printf("Enter the maximum number of elements in the stack :: ");
    //scanf("%d", &n);
    s = CreateStack(5); //Limitamos el número de posiciones a 5
    
    Push(10); //Agregamos elemento
    Push(20);
    Push(30);
    Push(40);
    
    Pop(); //Eliminamos elemento
    Pop();
    
    Push(50);
    Push(60);
    Push(70);
    Push(80);
    
    return 0;
}
