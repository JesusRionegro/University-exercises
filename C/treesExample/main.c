#include <stdio.h>
#include "trees.h"

/*
Preorder: 5 3 1 4 8 6 9 
Inorder: 1 3 4 5 6 8 9 
Postorder: 1 4 3 6 9 8 5 
*/
int main() {
        struct tree *t;
        t=tree_init(5,tree_init(3,tree_init(1,NULL,NULL),tree_init(4,NULL,NULL)),tree_init(8,tree_init(6,NULL,NULL),tree_init(9,NULL,NULL)));
        printf("Preorder: "); tree_preorder(t); printf("\n");
        printf("Inorder: "); tree_inorder(t); printf("\n");
        printf("Postorder: "); tree_postorder(t); printf("\n");
        tree_destroy(&t);

        return 0;
}
