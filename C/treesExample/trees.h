#ifndef TREE_H_   /* Include guard */
#define TREE_H_

struct tree {
        int dato;
        struct tree * left;
        struct tree * right;
};

int tree_isEmpty(struct tree *t);
struct tree * tree_init(int dato, struct tree *left, struct tree *right);
void tree_destroy(struct tree **t);
void tree_preorder(struct tree *t);
void tree_inorder(struct tree *t);
void tree_postorder(struct tree *t);

#endif // TREE_H_
