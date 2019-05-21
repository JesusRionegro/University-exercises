#include <stdio.h>
#include "trees.h"  /* Include the header (not strictly necessary here) */

int tree_isEmpty(struct tree *t){return 0;}
struct tree * tree_init(int dato, struct tree *left, struct tree *right){return 0;};
void tree_destroy(struct tree **t){
  printf( "Destruyendo el arbol : %d\n", (int)*t);
  return;}
void tree_preorder(struct tree *t){return;}
void tree_inorder(struct tree *t){return;}
void tree_postorder(struct tree *t){return;}

