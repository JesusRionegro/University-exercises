#include <stdio.h>
#include "trees.h"  /* Include the header (not strictly necessary here) */

int tree_isEmpty(struct tree *t){
  printf( "¿Esta el arbol vacio? %d\n", (int)t);
  return 0;}

struct tree * tree_init(int dato, struct tree *left, struct tree *right){
  printf( "El valor en el tree_init es: %d\n", dato);
  return 0;};
  
void tree_destroy(struct tree **t){
  printf( "Destruyendo el arbol : %d\n", (int)*t);
  return;}

void tree_preorder(struct tree *t){
  printf( "El valor en el tree_preorder es: %d\n", (int)t);
  return;}

void tree_inorder(struct tree *t){
    printf( "El valor en el tree_inorder es: %d\n", (int)t);
  return;}

void tree_postorder(struct tree *t){
    printf( "El valor en el tree_postorder es: %d\n", (int)t);
  return;}


